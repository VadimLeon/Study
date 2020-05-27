#define _USE_MATH_DEFINES
#include "NumericalMethodsBase.h"
#include "Methods.h"
#include <math.h>

void NumericalMethodsBase::updateSteps()
{
  h = static_cast<double>(xRight - xLeft) / static_cast<double>(xNumberStep);
  k = static_cast<double>(yRight - yLeft) / static_cast<double>(yNumberStep);
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


void NumericalMethodsBase::resetParameter()
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

void NumericalMethodsBase::setParameter(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  xNumberStep = _xNumberStep;
  yNumberStep = _yNumberStep;
  xLeft  = _xLeft;
  xRight = _xRight;
  yLeft  = _yLeft;
  yRight = _yRight;
  eps = _eps;
  omega = _omega;
  maxCountStep = _maxCountStep;
  maxEps = 0.0;
  countIteration = 0;

  updateSteps();

  if (!v.size()) resetParameter();

  v = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
  v2 = (std::vector<std::vector<double>>((xNumberStep * 2) + 1, std::vector<double>((yNumberStep * 2) + 1)));
  u = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
}

void NumericalMethodsBase::setOmeg(double _omega)
{
  omega = _omega;
}

void NumericalMethodsBase::setH(double _h)
{
  h = _h;
}

// Geter methods
double NumericalMethodsBase::getV(int i, int j) const
{
  return v[i][j];
}

double NumericalMethodsBase::getU(int i, int j) const
{
  return u[i][j];
}

double NumericalMethodsBase::getX(int i)
{
  return h * (double)i;
}

double NumericalMethodsBase::getY(int j)
{
  return k * (double)j;
}

int NumericalMethodsBase::getN() const
{
  return countIteration;
}

double NumericalMethodsBase::getEps() const
{
  return maxEps;
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

double NumericalMethodsBase::getOmega() const
{
  return omega;
}

double NumericalMethodsBase::getMaxR(int &x, int &y)
{
  double Rmax = 0., tmp;

  for (int i = 0; i < xNumberStep; ++i)
  {
    for (int j = 0; j < yNumberStep; ++j)
    {
      tmp = std::fabs(u[i][j] - v[i][j]);
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

double NumericalMethodsBase::getMaxZ()
{
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);
  double Z2 = 0.0, Z;

  for (int j = 1; j < yNumberStep; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      Z = -a2 * v[i][j] + h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]);
      Z += u[i][j];
      Z2 += sqr(Z);
    }
  }
  Z2 = sqrt(Z2);

  return Z2;
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
  for (int i = 0; i < xNumberStep + 1; ++i)
  {
    v[i][0] = mut(getX(i), xLeft);
    v[i][yNumberStep] = mut(getX(i), xRight);
    u[i][0] = mut(getX(i), xLeft);
    u[i][yNumberStep] = mut(getX(i), xRight);
  }

  for (int j = 0; j < yNumberStep + 1; ++j)
  {
    v[0][j] = mut(yLeft, getY(j));
    v[xNumberStep][j] = mut(yRight, getY(j));
    u[0][j] = mut(yLeft, getY(j));
    u[xNumberStep][j] = mut(yRight, getY(j));
  }

  for (int j = 1; j < yNumberStep; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      u[i][j] = mut(getX(i), getY(j));
    }
  }
}

void NumericalMethodsBase::initMain()
{
  for (int i = 0; i < xNumberStep + 1; ++i) {
    v[i][0] = mux(getX(i));
    v[i][yNumberStep] = mux(getX(i));
  }
  for (int j = 0; j < yNumberStep + 1; ++j) {
    v[0][j] = muy(getY(j));
    v[xNumberStep][j] = muy(getY(j));
  }

  // Interpolation along y
  for (int j = 1; j < yNumberStep; ++j)
  {
    double steph = (v[xNumberStep][j] - v[0][j]) / xNumberStep;

    for (int i = 1; i < xNumberStep; i++)
    {
      v[i][j] = v[0][j] + steph * i;
    }
  }

  for (int i = 0, j = 0; i < 2 * xNumberStep + 1 || j < 2 * yNumberStep + 1; ++i, ++j)
  {
    v2[i][0] = mux(0.5 * h);
    v2[i][2 * yNumberStep] = mux(0.5 * h);
    v2[0][j] = muy(0.5 * k);
    v2[2 * xNumberStep][j] = muy(0.5 * k);
  }
  for (int j = 1; j < 2 * yNumberStep; ++j)
  {
    double steph = (v2[2 * xNumberStep][j] - v2[0][j]) / (2 * xNumberStep);

    for (int i = 1; i < 2 * xNumberStep; i++)
    {
      v2[i][j] = v2[0][j] + steph * i;
    }
  }
}
