#define _USE_MATH_DEFINES

#include "overRelax.h"

// Solving difference scheme
void OverRelax::solveDifferenceScheme(bool isTest)
{
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);

  // Init v on the bord
  isTest ? initTest() : initMain();

  // Seidel Implemetation
  do {
    maxEps = 0.;
    for (int j = 1; j < yNumberStep; j++)
    {
      for (int i = 1; i < xNumberStep; i++)
      {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += isTest ? ft(getX(i), getY(j)) :
                            muu(getX(i), getY(j));
        v[i][j] *= omega / a2;
        v[i][j] += (1.0 - omega) * oldV;
        double currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

void OverRelax::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega);
}

void OverRelax::setOmega(double _omega, bool isNorm)
{
  if (isNorm)
  {
    double tmp = 1. + sqrt(4 * sqr(sin(M_PI * h * 0.5)));
    NumericalMethodsBase::setOmeg(2.0 / tmp);
  }
  else
  {
    NumericalMethodsBase::setOmeg(_omega);
  }
}

double OverRelax::getMaxR(const OverRelax& instance, int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      tmp = std::fabs(instance.v[2 * i][2 * j] - v[i][j]);
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

double OverRelax::getMaxR(int &x, int &y)
{
  return NumericalMethodsBase::getMaxR(x,y);
}

// Constructors
OverRelax::OverRelax() : NumericalMethodsBase()
{}

OverRelax::OverRelax(int _xNumberStep, int _yNumberStep,
                     double _eps, double _maxCountStep,
                     double _xRight, double _xLeft, double _yRight, double _yLeft,
                     double _omega) :
                     NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega)
{}

OverRelax::OverRelax(const OverRelax& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
                                                                        _instance.eps,         _instance.maxCountStep,
                                                                        _instance.xRight,      _instance.xLeft,
                                                                        _instance.yRight,      _instance.yLeft,
                                                                        _instance.omega)
{}

OverRelax::~OverRelax()
{}
