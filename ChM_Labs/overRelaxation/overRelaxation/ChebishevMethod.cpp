#define _USE_MATH_DEFINES
#include "ChebishevMethod.h"
#include "Methods.h"

void ChebishevMethod::solveDifferenceScheme(bool isTest)
{
  // Init v or u on the bord
  isTest ? initTest() : initMain();

  lambdaMin = 0;
  lambdaMin -= sqr(sin(M_PI * h / 2.0)) * (4.0 * h2);
  lambdaMin -= sqr(sin(M_PI * k / 2.0)) * (4.0 * k2);

  lambdaMax = 0;
  lambdaMax -= sqr(cos(M_PI * h / 2.L)) * (4.0 * h2);
  lambdaMax -= sqr(cos(M_PI * k / 2.L)) * (4.0 * k2);

  int K = 0;
  int K_MAX = 35;

  // Seidel Implemetation
  do {
    revertv();
    maxEps = 0;
    normR = 0;

    long double ltau = 2.0L / (lambdaMax + lambdaMin + (lambdaMax - lambdaMin) * cos(M_PI * (2.0L * K - 1) / (2.L * K_MAX)));

    for (int j = 1; j < yNumberStep; ++j)
    {
      for (int i = 1; i < xNumberStep; ++i)
      {
        double Vs = 0;
        Vs -= a2 * newv[i][j];
        Vs -= h2 * (newv[i + 1][j] + newv[i - 1][j]);
        Vs -= k2 * (newv[i][j + 1] + newv[i][j - 1]);
        Vs -= isTest ? ft(getX(i), getY(j)) :
                         muu(getX(i), getY(j));;
        Vs *= ltau;
        v[i][j] += Vs;

        if (maxEps < abs(v[i][j] - newv[i][j])) { maxEps = abs(v[i][j] - newv[i][j]); }
        if (normR < abs(v[i][j] - u[i][j])) { normR = abs(v[i][j] - u[i][j]); _x = i; _y = j; }
      }
    }
    K = ++K % K_MAX;
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

void ChebishevMethod::revertv()
{
  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      newv[i][j] = v[i][j];
    }
  }
}

void ChebishevMethod::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, 0.0);

  h2 = -sqr(xNumberStep);
  k2 = -sqr(yNumberStep);
  a2 = -2 * (h2 + k2);
  lambdaMin = 0;
  lambdaMax = 0;

  newv = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

double ChebishevMethod::getMaxR(int& x, int& y)
{
  x = _x;
  y = _y;
  return normR;
}

double ChebishevMethod::getMaxR(const ChebishevMethod& instance, int & x, int & y)
{
  double maxR_ = 0.0;
  for (int j = 1; j < yNumberStep; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      if (maxR_ < abs(v[i][j] - instance.v[2 * i][2 * j])) { maxR_ = abs(v[i][j] - instance.v[2 * i][2 * j]); }
    }
  }

  return maxR_;
}
