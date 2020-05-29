#include "MinimumDiscrepancy.h"
#include "Methods.h"

// Constructors
MinimumDiscrepancy::MinimumDiscrepancy() : NumericalMethodsBase()
{}

MinimumDiscrepancy::MinimumDiscrepancy(const MinimumDiscrepancy& _instance) :
  NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
                       _instance.eps, _instance.maxCountStep,
                       _instance.xRight, _instance.xLeft,
                       _instance.yRight, _instance.yLeft, 1.0)
{}

MinimumDiscrepancy::MinimumDiscrepancy(int _xNumberStep, int _yNumberStep,
                                       double _eps, double _maxCountStep,
                                       double _xRight, double _xLeft, double _yRight, double _yLeft) :
                                       NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, 1.0)
{}


MinimumDiscrepancy::~MinimumDiscrepancy()
{}

// Solving difference scheme
void MinimumDiscrepancy::solveDifferenceScheme(bool isTest)
{
  isTest ? initTest() : initMain();

  countIteration = 0;
  bool stop = false;
  
  do {
    maxEps = 0.0;

    for (int i = 1; i < xNumberStep; i++)
    {
      for (int j = 1; j < yNumberStep; j++)
      {
        r[i][j] = v[i][j] * a2 + h2 * (v[i - 1][j] + v[i + 1][j]) + k2 * (v[i][j - 1] + v[i][j + 1])
          - ((isTest) ? (ft(getX(i), getY(j))) :
                        (muu(getX(i), getY(j))));
      }
    }

    getTau();
    for (int i = 1; i < xNumberStep; i++)
    {
      for (int j = 1; j < yNumberStep; j++)
      {
        double oldValue = v[i][j];
        double newValue = v[i][j] - tau * r[i][j];
        double currEps = std::fabs(oldValue - newValue);
        if (currEps > maxEps) maxEps = currEps;
        v[i][j] = newValue;
      }
    }

    ++countIteration;
    if (maxEps < eps || countIteration >= maxCountStep) stop = true;
  } while (!stop);
}


void MinimumDiscrepancy::getTau()
{
  double h2 = -sqr((double)xNumberStep / (xRight - xLeft));
  double k2 = -sqr((double)yNumberStep / (yRight - yLeft));
  double a2 = -2 * (h2 + k2);
  double divider = 0.0, temp;
  tau = 0.0;
  for (int i = 1; i < xNumberStep; i++)
  {
    for (int j = 1; j < yNumberStep; j++)
    {
      temp = (r[i][j] * a2 + h2 * (r[i + 1][j] + r[i - 1][j]) + k2 * (r[i][j + 1] + r[i][j - 1]));
      tau += temp * r[i][j];
      divider += temp * temp;
    }
  }
  tau /= divider;
}

double MinimumDiscrepancy::getMaxR(const MinimumDiscrepancy& instance, int& x, int& y)
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

double MinimumDiscrepancy::getMaxR(int &x, int &y)
{
  return NumericalMethodsBase::getMaxR(x, y);
}

void MinimumDiscrepancy::resetParameters()
{
  if (!r.size())
  {
    for (int i = 0; i < r.size(); ++i) { r[i].clear(); }

    r.clear();
  }
}

void MinimumDiscrepancy::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight)
{
  NumericalMethodsBase::setParameter(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xLeft, _xRight, _yLeft, _yRight, 1.0);

  h2 = -((double)xNumberStep / (xRight - xLeft)) * ((double)xNumberStep / (xRight - xLeft));
  k2 = -((double)yNumberStep / (yRight - yLeft)) * ((double)yNumberStep / (yRight - yLeft));
  a2 = -2 * (h2 + k2);

  if (!r.size()) resetParameters();

  r = (std::vector<std::vector<double>>(_xNumberStep + 1, std::vector<double>(_yNumberStep + 1)));
}

