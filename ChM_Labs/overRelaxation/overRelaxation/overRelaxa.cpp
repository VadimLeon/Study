#include "overRelaxa.h"


overRelaxa::overRelaxa() : NumericalMethodsBase()
{}

overRelaxa::overRelaxa(int _xNumberStep, int _yNumberStep, double _eps, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega) :
                       NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _xRight, _xLeft, _yRight, _yLeft, _omega)
{}

overRelaxa::overRelaxa(const overRelaxa& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep, _instance.eps,
                                                                           _instance.xRight, _instance.xLeft,
                                                                           _instance.yRight, _instance.yLeft,
                                                                           _instance.omega)
{}

overRelaxa::~overRelaxa()
{}



double overRelaxa::ft(double x, double y)
{
  double addent = (sqr(x) + sqr(y)) * (2 * sqr(PI) * exp(sqr(sin(PI*x*y))) * (2 * sqr(sin(PI*x*y)) + 1) * sqr(cos(PI*x*y)) - sqr(sin(PI*x*y)));
  return -(addent);
}

double overRelaxa::muu(double _x, double _y)
{
  return sqr(sin(PI * _x * _y));
}

double overRelaxa::mut(double _x, double _y)
{
  return exp(sqr(sin(PI * _x * _y)));
}

double overRelaxa::muy(double _y)
{
  return sin(PI * _y);
}

double overRelaxa::mux(double _x)
{
  return _x - sqr(_x);
}

double overRelaxa::mu1(double y)
{
  return 1./*exp(sin(PI*0*y)*sin(PI*0*y))*/;
}
double overRelaxa::mu2(double y)
{
  return exp(sqr(sin(PI * y)));
}
double overRelaxa::mu3(double x)
{
  return 1./*exp(sin(PI*x*0)*sin(PI*x*0))*/;
}
double overRelaxa::mu4(double x)
{
  return exp(sqr(sin(PI * x)));
}

std::vector<std::vector<double>> overRelaxa::solveDifferenceScheme(std::function<double(double, double)> ft,
                                                                   double mut(double x, double y),
                                                                   int countStep,
                                                                   std::vector<double>& ans,
                                                                   bool isTest,
                                                                   std::vector<std::vector<double>>& u)
{
  double h = static_cast<double>(xRight - xLeft) / static_cast<double>(xNumberStep);
  double k = static_cast<double>(yRight - yLeft) / static_cast<double>(yNumberStep);
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);
  double maxEps = 0;
  int    counter = 0;

  std::vector<std::vector<double>> v(xNumberStep + 1, std::vector<double>(yNumberStep + 1));
  auto getX = [&](int i) -> double {
    return xLeft + h * i;
  };

  auto getY = [&](int j) -> double {
    return yLeft + k * j;
  };

  // Init v on the bord
  if (isTest)
  {
    for (int i = 0; i < xNumberStep + 1; i++) {
      v[i][0] = mut(getX(i), xLeft);
      v[i][yNumberStep] = mut(getX(i), xRight);
      u[i][0] = mut(getX(i), xLeft);
      u[i][yNumberStep] = mut(getX(i), xRight);
    }
    for (int j = 0; j < yNumberStep + 1; j++) {
      v[0][j] = mut(yLeft, getY(j));
      v[xNumberStep][j] = mut(yRight, getY(j));
      u[0][j] = mut(yLeft, getY(j));
      u[xNumberStep][j] = mut(yRight, getY(j));
    }
  }
  else
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
  for (int j = 1; j < yNumberStep; j++) {
    double steph = (v[xNumberStep][j] - v[0][j]) / xNumberStep;
    for (int i = 1; i < xNumberStep; i++) {
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
    counter++;
  } while (maxEps >= eps && counter < countStep);

  for (int j = 1; j < yNumberStep; j++)
  {
    for (int i = 1; i < xNumberStep; i++)
    {
      u[i][j] = mut(getX(i), getY(j));
    }
  }

  double R2 = 0.0, R;
  if (isTest)
  {
    for (int j = 1; j < yNumberStep; j++)
    {
      for (int i = 1; i < xNumberStep; i++)
      {
        R = -a2 * v[i][j] + h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]);
        R += ft(getX(i), getY(j));
        R2 += sqr(R);
      }
    }
    R2 = sqrt(R2);

    double temp_max = 0.0, temp;
    for (int j = 1; j < yNumberStep; j++)
    {
      for (int i = 1; i < xNumberStep; i++)
      {
        temp = std::fabs(mut(getX(i), getY(j)) - v[i][j]);
        if (temp > temp_max)
        {
          temp_max = temp;
        }
      }
    }

    ans.push_back(counter);
    ans.push_back(maxEps);
    ans.push_back(R2);
    ans.push_back(temp_max);
  }
  return v;
}



double overRelaxa::testf(double _x, double _y)
{ // -sin^2 (PI*x*y)
  return -(sqr(sin(_x*_y*PI)));
}

double overRelaxa::testu(double _x, double _y)
{ // e^(sin^2 (PI*x*y))
  return exp(sqr(sin(_x*_y*PI)));
}

double overRelaxa::mu_t(double x, double y)
{
  return sin(PI*x*y);
}

