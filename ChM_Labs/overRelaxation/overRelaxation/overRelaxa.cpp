#include "overRelaxa.h"

// Solving difference scheme
void overRelaxa::solveDifferenceScheme(bool isTest)
{
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);

  // Init v on the bord
  isTest ? initTest() : initMain();

  // Interpolation along x
  for (int j = 1; j < yNumberStep; j++)
  {
    double steph = (v[xNumberStep][j] - v[0][j]) / xNumberStep;

    for (int i = 1; i < xNumberStep; i++)
    {
      v[i][j] = v[0][j] + steph * i;
    }
  }

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
        v[i][j] += (1 - omega) * oldV;
        double currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

// Init solution
void overRelaxa::initTest()
{
  for (int i = 0; i < xNumberStep + 1; i++)
  {
    v[i][0]           = mut(getX(i), xLeft);
    v[i][yNumberStep] = mut(getX(i), xRight);
    u[i][0]           = mut(getX(i), xLeft);
    u[i][yNumberStep] = mut(getX(i), xRight);
  }

  for (int j = 0; j < yNumberStep + 1; j++)
  {
    v[0][j]           = mut(yLeft,  getY(j));
    v[xNumberStep][j] = mut(yRight, getY(j));
    u[0][j]           = mut(yLeft,  getY(j));
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

void overRelaxa::initMain()
{
  for (int i = 0; i < xNumberStep + 1; i++) {
    v[i][0]           = mux(getX(i));
    v[i][yNumberStep] = mux(getX(i));
  }
  for (int j = 0; j < yNumberStep + 1; j++) {
    v[0][j]           = muy(getY(j));
    v[xNumberStep][j] = muy(getY(j));
  }
}

// Geter methods
double overRelaxa::getX(int i)
{
  return h * (double)i;
}

double overRelaxa::getY(int j)
{
  return k * (double)j;
}

double overRelaxa::getV(int i, int j) const
{
  return v[i][j];
}

double overRelaxa::getU(int i, int j) const
{
  return u[i][j];
}

double overRelaxa::getMaxR(int &x, int &y)
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

double overRelaxa::getMaxR(const overRelaxa& instance, int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int i = 0; i < xNumberStep; ++i)
  {
    for (int j = 0; j < yNumberStep; ++j)
    {
      tmp = std::fabs(instance.v[i][j] - v[i][j]);
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

double overRelaxa::getMaxZ()
{
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);
  double Z2 = 0.0, Z;

  for (int j = 1; j < yNumberStep; j++)
  {
    for (int i = 1; i < xNumberStep; i++)
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
double overRelaxa::ft(double x, double y)
{
  double addent = (sqr(x) + sqr(y)) * (2 * sqr(M_PI) * exp(sqr(sin(M_PI*x*y))) * (2 * sqr(sin(M_PI*x*y)) + 1) * sqr(cos(M_PI*x*y)) - sqr(sin(M_PI*x*y)));
  return -(addent);
}

double overRelaxa::muu(double _x, double _y)
{
  return sqr(sin(M_PI * _x * _y));
}

double overRelaxa::mut(double _x, double _y)
{
  return exp(sqr(sin(M_PI * _x * _y)));
}

double overRelaxa::muy(double _y)
{
  return sin(M_PI * _y);
}

double overRelaxa::mux(double _x)
{
  return _x - sqr(_x);
}

void overRelaxa::resetParameters()
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

void overRelaxa::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  NumericalMethodsBase::setParameters(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, _omega);

  if (!v.size()) resetParameters();

  v = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
  u = (std::vector<std::vector<double>>(xNumberStep + 1, std::vector<double>(yNumberStep + 1)));
}

// Constructors
overRelaxa::overRelaxa() : NumericalMethodsBase()
{}

overRelaxa::overRelaxa(int _xNumberStep, int _yNumberStep,
                       double _eps, double _maxCountStep,
                       double _xRight, double _xLeft, double _yRight, double _yLeft,
                       double _omega) :
                       NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega)
{}

overRelaxa::overRelaxa(const overRelaxa& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
                                                                           _instance.eps, _instance.maxCountStep,
                                                                           _instance.xRight, _instance.xLeft,
                                                                           _instance.yRight, _instance.yLeft,
                                                                           _instance.omega)
{}

overRelaxa::~overRelaxa()
{}