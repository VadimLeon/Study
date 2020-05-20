#include <iostream>
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
        double currEps = std::fabs(newv[i][j] - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    revertv();
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);

  if (!isTest)
  {
    initOld2V();
    h = h * 0.5;
    k = k * 0.5;
    h2 = 1 / sqr(h);
    k2 = 1 / sqr(k);
    // Seidel Implemetation
    double max2Eps = 0.0;
    int iterations = 0;
    do {
      for (int j = 1; j < yNumberStep * 2; ++j)
      {
        for (int i = 1; i < xNumberStep * 2; ++i)
        {
          new2v[i][j] = (h2 * (old2v[i + 1][j] - 2 * old2v[i][j] + old2v[i - 1][j]) + k2 * (old2v[i][j + 1] - 2 * old2v[i][j] + old2v[i][j - 1]));
          new2v[i][j] += muu(getX(i), getY(j));
          new2v[i][j] *= omega;
          new2v[i][j] += old2v[i][j];
          double currEps = std::fabs(new2v[i][j] - old2v[i][j]);
          if (currEps > max2Eps) max2Eps = currEps;
        }
      }
      revert2v();
      ++iterations;
    } while (max2Eps >= eps && maxCountStep > iterations);
    h = h * 2;
    k = k * 2;
  }
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

void SimpleIteration::revert2v()
{
  for (int i = 1; i < xNumberStep * 2; ++i)
  {
    for (int j = 1; j < yNumberStep * 2; ++j)
    {
      old2v[i][j] = new2v[i][j];
    }
  }
}

void SimpleIteration::initOld2V()
{
  for (int i = 0; i < xNumberStep * 2 + 1; ++i) {
    old2v[i][0] = mux(getX(i));
    old2v[i][yNumberStep * 2] = mux(getX(i));
  }
  for (int j = 0; j < yNumberStep * 2 + 1; ++j) {
    old2v[0][j] = muy(getY(j));
    old2v[xNumberStep * 2][j] = muy(getY(j));
  }

  // Interpolation along y
  for (int j = 1; j < yNumberStep * 2; ++j)
  {
    double steph = (old2v[xNumberStep * 2][j] - old2v[0][j]) / (xNumberStep * 2);

    for (int i = 1; i < xNumberStep * 2; i++)
    {
      old2v[i][j] = old2v[0][j] + steph * i;
    }
  }
}

double SimpleIteration::get2V(int i, int j)
{
  return old2v[i][j];
}

double SimpleIteration::getMaxR(const SimpleIteration& /*instance*/, int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      tmp = std::fabs(old2v[2 * i][2 * j] - v[i][j]);
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
    for (int i = 0; i < new2v.size(); ++i)
    {
      new2v[i].clear();
      old2v[i].clear();
    }

    newv.clear();
    new2v.clear();
    old2v.clear();
  }
}

void SimpleIteration::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, _omega);

  if (!newv.size()) resetParameters();

  newv = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
  new2v = (std::vector<std::vector<double>>(_xNumberStep * 2 + 1, std::vector<double>(_yNumberStep * 2 + 1)));
  old2v = (std::vector<std::vector<double>>(_xNumberStep * 2 + 1, std::vector<double>(_yNumberStep * 2 + 1)));
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

