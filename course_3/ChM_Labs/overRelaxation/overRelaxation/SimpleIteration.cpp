#include "SimpleIteration.h"
#include "Methods.h"

// Constructors
SimpleIteration::SimpleIteration() : NumericalMethodsBase()
{}

SimpleIteration::SimpleIteration(const SimpleIteration& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
                                                                                          _instance.eps, _instance.maxCountStep,
                                                                                          _instance.xRight, _instance.xLeft,
                                                                                          _instance.yRight, _instance.yLeft,
                                                                                          _instance.omega)
{}

SimpleIteration::SimpleIteration(int _xNumberStep, int _yNumberStep,
                                 double _eps, double _maxCountStep,
                                 double _xRight, double _xLeft, double _yRight, double _yLeft,
                                 double _omega) :
                                 NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega)
{}


SimpleIteration::~SimpleIteration()
{
}

// Solving difference scheme
void SimpleIteration::solveDifferenceScheme(bool isTest)
{
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);

  // Init v or u on the bord
  isTest ? initTest() : initMain();

  // Seidel Implemetation
  do {
    maxEps = 0.0;

    for (int j = 1; j < yNumberStep; ++j)
    {
      for (int i = 1; i < xNumberStep; ++i)
      {
        newv[i][j] = (h2 * (v[i + 1][j] - 2 * v[i][j] + v[i - 1][j]) + k2 * (v[i][j + 1] - 2 * v[i][j] + v[i][j - 1]));
        newv[i][j] += isTest ? ft(getX(i), getY(j)) :
                               muu(getX(i), getY(j));
        newv[i][j] *= omega;
        newv[i][j] += v[i][j];
        double currEps = std::abs(newv[i][j] - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    revertv();
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

void SimpleIteration::revertv()
{
  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      v[i][j] = newv[i][j];
    }
  }
}

double SimpleIteration::getMaxRv(int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      tmp = std::abs(v2[2 * i][2 * j] - v[i][j]);
      if (tmp > Rmax)
      {
        Rmax = tmp;
        x = i;
        y = j;
      }
    }
  }

  return Rmax;
}

double SimpleIteration::getMaxR(const SimpleIteration& ins,int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      tmp = std::abs(ins.v[2 * i][2 * j] - v[i][j]);
      if (tmp > Rmax)
      {
        Rmax = tmp;
        x = i;
        y = j;
      }
    }
  }

  return Rmax;
}

double SimpleIteration::getMaxR(int &x, int &y)
{
  return NumericalMethodsBase::getMaxR(x, y);
}

void SimpleIteration::resetParameters()
{
  if (!newv.size())
  {
    for (int i = 0; i < newv.size(); ++i) { newv[i].clear(); }

    newv.clear();
  }
}

void SimpleIteration::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, _omega);

  if (!newv.size()) resetParameters();

  newv = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

void SimpleIteration::setOmega(double _omega, bool isNorm)
{
  if (isNorm)
  {
    NumericalMethodsBase::setOmeg(sqr(h) / 4);
  }
  else
  {
    NumericalMethodsBase::setOmeg(_omega);
  }
}

void SimpleIteration::set2Omega(double _omega, bool isNorm)
{
  if (isNorm)
  {
    NumericalMethodsBase::setOmeg(sqr(0.5 * h) / 4);
  }
  else
  {
    NumericalMethodsBase::setOmeg(_omega);
  }
}
