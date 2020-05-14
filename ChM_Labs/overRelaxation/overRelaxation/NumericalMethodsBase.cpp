#define _USE_MATH_DEFINES

#include "NumericalMethodsBase.h"
#include "Methods.h"
#include <math.h>


void NumericalMethodsBase::updateSteps()
{
  h = static_cast<double>(xRight - xLeft) / static_cast<double>(xNumberStep);
  k = static_cast<double>(yRight - yLeft) / static_cast<double>(yNumberStep);
}

int NumericalMethodsBase::getN() const
{
  return countIteration;
}

double NumericalMethodsBase::getEps() const
{
  return maxEps;
}

NumericalMethodsBase::NumericalMethodsBase() : xNumberStep(-1), yNumberStep(-1),
xRight(-1.), xLeft(-1.), yRight(-1.), yLeft(-1.),
eps(1e-8), maxCountStep(-1.), omega(1.),
maxEps(0.), countIteration(0)
{}

NumericalMethodsBase::NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep,
                                           double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega) :
                                           xNumberStep(_xNumberStep), yNumberStep(_yNumberStep),
                                           eps(_eps), maxCountStep(_maxCountStep),
                                           maxEps(0.), countIteration(0),
                                           xRight(_xRight), xLeft(_xLeft),
                                           yRight(_yRight), yLeft(_yLeft),
                                           omega(_omega)
{
  updateSteps();
}

NumericalMethodsBase::NumericalMethodsBase(const NumericalMethodsBase& _instance) : xNumberStep(_instance.xNumberStep), yNumberStep(_instance.yNumberStep),
                                                                                    xRight(_instance.xRight), xLeft(_instance.xLeft),
                                                                                    yRight(_instance.yRight), yLeft(_instance.yLeft),
                                                                                    h(_instance.h), k(_instance.k),
                                                                                    eps(_instance.eps), maxCountStep(_instance.maxCountStep),
                                                                                    maxEps(_instance.maxEps), countIteration(_instance.countIteration),
                                                                                    omega(_instance.omega)
{}

NumericalMethodsBase::~NumericalMethodsBase()
{
}

double NumericalMethodsBase::getX(int i)
{
  return h * (double)i;
}

double NumericalMethodsBase::getY(int j)
{
  return k * (double)j;
}

int NumericalMethodsBase::getW() const
{
  return xNumberStep;
}

int NumericalMethodsBase::getH() const
{
  return yNumberStep;
}

int NumericalMethodsBase::getCountIt() const
{
  return countIteration;
}

// Functions of boundary and solucion
double NumericalMethodsBase::ft(double x, double y)
{
  double addent1 = (2 * sin(M_PI*x*y)*sin(M_PI*x*y) + 1)*cos(M_PI*x*y)*cos(M_PI*x*y) - sin(M_PI*x*y)*sin(M_PI*x*y);
  double addent2 = 2 * M_PI*M_PI*x*x*exp(sin(M_PI*x*y)*sin(M_PI*x*y))*addent1;
  double addent3 = 2 * M_PI*M_PI*y*y*exp(sin(M_PI*x*y)*sin(M_PI*x*y))*addent1;
  return -(addent2 + addent3);
}

double NumericalMethodsBase::muu(double _x, double _y)
{
  return sqr(sin(M_PI * _x * _y));
}

double NumericalMethodsBase::mut(double _x, double _y)
{
  return exp(sqr(sin(M_PI * _x * _y)));
}

double NumericalMethodsBase::muy(double _y)
{
  return sin(M_PI * _y);
}

double NumericalMethodsBase::mux(double _x)
{
  return _x - sqr(_x);
}

// Init solution
void NumericalMethodsBase::initTest()
{
  for (int i = 0; i < xNumberStep + 1; i++)
  {
    v[i][0] = mut(getX(i), xLeft);
    v[i][yNumberStep] = mut(getX(i), xRight);
    u[i][0] = mut(getX(i), xLeft);
    u[i][yNumberStep] = mut(getX(i), xRight);
  }

  for (int j = 0; j < yNumberStep + 1; j++)
  {
    v[0][j] = mut(yLeft, getY(j));
    v[xNumberStep][j] = mut(yRight, getY(j));
    u[0][j] = mut(yLeft, getY(j));
    u[xNumberStep][j] = mut(yRight, getY(j));
  }

  for (int j = 1; j < yNumberStep; j++)
  {
    for (int i = 1; i < xNumberStep; i++)
    {
      u[i][j] = mut(getX(i), getY(j));
    }
  }
}

void NumericalMethodsBase::initMain()
{
  for (int i = 0; i < xNumberStep + 1; i++) {
    v[i][0] = mux(getX(i));
    v[i][yNumberStep] = mux(getX(i));
  }
  for (int j = 0; j < yNumberStep + 1; j++) {
    v[0][j] = muy(getY(j));
    v[xNumberStep][j] = muy(getY(j));
  }
}

void NumericalMethodsBase::resetParameters()
{
  if (!v.size())
  {
    for (int i = 0; i < v.size(); ++i)
    {
      v[i].clear();
      u[i].clear();
    }

    v.clear();
    u.clear();
  }
}

void NumericalMethodsBase::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  xNumberStep = _xNumberStep;
  yNumberStep = _yNumberStep;
  xLeft = _xLeft;
  yRight = _yRight;
  yLeft = _yLeft;
  xRight = _xRight;
  eps = _eps;
  omega = _omega;
  maxCountStep = _maxCountStep;
  countIteration = 0;

  updateSteps();

  if (!v.size()) resetParameters();

  v = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
  u = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
}

