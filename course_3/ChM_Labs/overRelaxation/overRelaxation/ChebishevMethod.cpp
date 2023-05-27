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
  lambdaMax -= sqr(cos(M_PI * h / 2.0)) * (4.0 * h2);
  lambdaMax -= sqr(cos(M_PI * k / 2.0)) * (4.0 * k2);

  int K = 0;
  //int K_MAX = 35;

  // Seidel Implemetation
  do {
    maxEps = 0;

    long double ltau = 2.0 / (lambdaMax + lambdaMin + (lambdaMax - lambdaMin) * cos(M_PI * (2.0 * K - 1) / (2.0 * R_MAX)));

    for (int j = 1; j < yNumberStep; ++j)
    {
      for (int i = 1; i < xNumberStep; ++i)
      {
        newv[i][j] = (h2 * (v[i + 1][j] - 2 * v[i][j] + v[i - 1][j]) + k2 * (v[i][j + 1] - 2 * v[i][j] + v[i][j - 1]));
        newv[i][j] += isTest ? ft(getX(i), getY(j)) :
                               muu(getX(i), getY(j));
        newv[i][j] *= -ltau;
        newv[i][j] += v[i][j];
        double currEps = std::abs(newv[i][j] - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    K = ++K % R_MAX;
    revertv();
    ++countIteration;
  } while (maxEps >= eps && maxCountStep > countIteration);
}

void ChebishevMethod::revertv()
{
  for (int i = 1; i < xNumberStep; ++i)
  {
    for (int j = 1; j < yNumberStep; ++j)
    {
      v[i][j] = newv[i][j];
    }
  }
}

void ChebishevMethod::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, 1.0);

  h2 = 1 / sqr(h);
  k2 = 1 / sqr(k);
  a2 = 2 * (h2 + k2);
 
  lambdaMin = 0;
  lambdaMax = 0;

  newv = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

double ChebishevMethod::getMaxR(int& x, int& y)
{
  double maxR_ = 0.0;

  for (int j = 0; j < yNumberStep; ++j)
  {
    for (int i = 0; i < xNumberStep; ++i)
    {
      if (maxR_ < abs(v[i][j] - u[i][j]))
      {
        maxR_ = abs(v[i][j] - u[i][j]);
        x = i;
        y = j;
      }
    }
  }

  return maxR_;
}

double ChebishevMethod::getMaxR(const ChebishevMethod& instance, int & x, int & y)
{
  double maxR_ = 0.0;

  for (int j = 1; j < yNumberStep; ++j)
  {
    for (int i = 1; i < xNumberStep; ++i)
    {
      if (maxR_ < abs(v[i][j] - instance.v[2 * i][2 * j]))
      {
        maxR_ = abs(v[i][j] - instance.v[2 * i][2 * j]);
        x = i;
        y = j;
      }
    }
  }

  return maxR_;
}

void ChebishevMethod::setRMax(int r_max)
{
  R_MAX = r_max;
}