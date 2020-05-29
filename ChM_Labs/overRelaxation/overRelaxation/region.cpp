#define _USE_MATH_DEFINES
#include "region.h"
#include "Methods.h"

// Solving difference scheme
void regioon::solveDifferenceScheme(bool isTest)
{
  // Init v on the bord
  isTest ? testInitial() : mainInitial();

  // Seidel Implemetation
  do {
    maxEps = 0.0;
    double currEps;

    // First region
    for (int j = 1; j <= minB; ++j)
    {
      for (int i = minA + 1; i < maxA; ++i)
      {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += isTest ? ft(getX(i), getY(j)) :
                            muu(getX(i), getY(j));
        v[i][j] *= omega / a2;
        v[i][j] += (1.0 - omega) * oldV;
        currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }

    // Second region
    for (int j = minB + 1; j < maxB; ++j)
    {
      for (int i = 1; i < xNumberStep; ++i)
      {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += isTest ? ft(getX(i), getY(j)) :
                            muu(getX(i), getY(j));
        v[i][j] *= omega / a2;
        v[i][j] += (1.0 - omega) * oldV;
        currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }

    // Third region
    for (int j = maxB; j < yNumberStep; ++j)
    {
      for (int i = minA + 1; i < xNumberStep; ++i)
      {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += isTest ? ft(getX(i), getY(j)) :
                            muu(getX(i), getY(j));
        v[i][j] *= omega / a2;
        v[i][j] += (1.0 - omega) * oldV;
        currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }

    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

void regioon::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega);

  minA = (int)(_xNumberStep / 3);
  maxA = _xNumberStep - minA;
  minB = (int)(_yNumberStep / 3);
  maxB = _yNumberStep - minB;

  h_1 = maxA - minA - 1; k_1 = minB;
  h_2 = _xNumberStep;    k_2 = maxB - minB - 1;
  h_3 = maxA;            k_3 = maxA - minA - 1;

  h2 = 1 / sqr(h);
  k2 = 1 / sqr(k);
  a2 = 2 * (h2 + k2);

  setOmega(_omega, (_omega < 0.0));
  r2 = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

void regioon::setOmega(double _omega, bool isNorm)
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

double regioon::getMaxR(const regioon& instance, int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int j = 1; j <= minB; ++j)
  {
    for (int i = minA + 1; i < maxA; ++i)
    {
      tmp = r2[i][j] = std::fabs(instance.v[2 * i][2 * j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }
  for (int j = minB + 1; j < maxB; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      tmp = r2[i][j] = std::fabs(instance.v[2 * i][2 * j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }
  for (int j = maxB; j < yNumberStep; ++j)
  {
    for (int i = minA + 1; i < xNumberStep; ++i)
    {
      tmp = r2[i][j] = std::fabs(instance.v[2 * i][2 * j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }

  return Rmax;
}

double regioon::getMaxR(int& x, int& y)
{
  double Rmax = 0., tmp;

  for (int j = 1; j <= minB; ++j)
  {
    for (int i = minA + 1; i < maxA; ++i)
    {
      tmp = std::fabs(u[i][j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }
  for (int j = minB + 1; j < maxB; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      tmp = std::fabs(u[i][j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }
  for (int j = maxB; j < yNumberStep; ++j)
  {
    for (int i = minA + 1; i < xNumberStep; ++i)
    {
      tmp = std::fabs(u[i][j] - v[i][j]);
      if (tmp > Rmax) { Rmax = tmp; x = i; y = j; }
    }
  }

  return Rmax;
}

double regioon::getR2(int i, int j)
{
  return r2[i][j];
}

void regioon::testInitial()
{
  // First region
  for (int i = minA; i <= maxA; ++i)
  {
    v[i][0] = u[i][0] = mut(getX(i), yLeft);
  }
  for (int i = 0; i <= minB; ++i)
  {//x[minA] & x[maxA] - vertical
    v[minA][i] = u[minA][i] = mut(minA * h, getY(i));
    v[maxA][i] = u[maxA][i] = mut(maxA * h, getY(i));
  }

  // Second region
  for (int i = 0; i <= xNumberStep; ++i)
  {
    if (i > minA && i < maxA) { continue; }

    v[i][minB] = u[i][minB] = mut(getX(i), minB * k);
    if (i <= minA) { v[i][maxB] = u[i][maxB] = mut(getX(i), maxB * k); }
  }
  for (int i = minB; i <= maxB; ++i)
  {//x[0] & x[n] - vertical
    v[0][i] = u[0][i] = mut(xLeft, getY(i));
    v[xNumberStep][i] = u[xNumberStep][i] = mut(xRight, getY(i));
  }

  // Third region
  for (int i = minA; i <= xNumberStep; ++i)
  {
    v[i][yNumberStep] = u[i][yNumberStep] = mut(getX(i), yRight);
  }
  for (int i = maxB + 1; i < yNumberStep; ++i)
  {//x[0] & x[n] - vertical
    v[minA][i] = u[minA][i] = mut(minA * h, getY(i));
    v[xNumberStep][i] = u[maxA][i] = mut(xRight, getY(i));
  }

  // Init u
  for (int j = 1; j <= minB; ++j)
    for (int i = minA + 1; i < maxA; ++i)
      u[i][j] = mut(getX(i), getY(j));
  for (int j = minB + 1; j < maxB; ++j)
    for (int i = 1; i < xNumberStep; ++i)
      u[i][j] = mut(getX(i), getY(j));
  for (int j = maxB; j < yNumberStep; ++j)
    for (int i = minA + 1; i < xNumberStep; ++i)
      u[i][j] = mut(getX(i), getY(j));
}

void regioon::mainInitial()
{
  // First region
  for (int i = minA; i <= maxA; ++i)
  {
    v[i][0] = mux(getX(i));
  }
  for (int i = 0; i <= minB; ++i)
  {//x[minA] & x[maxA] - vertical
    v[minA][i] = muy(getY(i));
    v[maxA][i] = muy(getY(i));
  }

  // Second region
  for (int i = 0; i <= xNumberStep; ++i)
  {
    if (i > minA && i < maxA) { continue; }

    v[i][minB] = mux(getX(i));
    if (i <= minA) { v[i][maxB] = mux(getX(i)); }
  }
  for (int i = minB; i <= maxB; ++i)
  {//x[0] & x[n] - vertical
    v[0][i] = muy(getY(i));
    v[xNumberStep][i] = muy(getY(i));
  }

  // Third region
  for (int i = minA; i <= xNumberStep; ++i)
  {
    v[i][yNumberStep] = mux(getX(i));
  }
  for (int i = maxB + 1; i < yNumberStep; ++i)
  {//x[0] & x[n] - vertical
    v[minA][i] = muy(getY(i));
    v[xNumberStep][i] = muy(getY(i));
  }



}

// Constructors
regioon::regioon() : NumericalMethodsBase()
{}

regioon::regioon(int _xNumberStep, int _yNumberStep,
  double _eps, double _maxCountStep,
  double _xRight, double _xLeft, double _yRight, double _yLeft,
  double _omega) :
  NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega)
{
  r2 = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

regioon::regioon(const regioon& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
  _instance.eps, _instance.maxCountStep,
  _instance.xRight, _instance.xLeft,
  _instance.yRight, _instance.yLeft,
  _instance.omega)
{}

regioon::~regioon()
{}
