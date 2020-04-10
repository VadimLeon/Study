#include "mOverRelaxation.h"

double ft(double x, double y)
{
  double addent1 = (2 * sin(PI*x*y)*sin(PI*x*y) + 1)*cos(PI*x*y)*cos(PI*x*y) - sin(PI*x*y)*sin(PI*x*y);
  double addent2 = 2 * PI*PI*x*x*exp(sin(PI*x*y)*sin(PI*x*y))*addent1;
  double addent3 = 2 * PI*PI*y*y*exp(sin(PI*x*y)*sin(PI*x*y))*addent1;
  return -(addent2 + addent3);
}

double muu(double _x, double _y)
{
  return sin(PI * _x * _y) * sin(PI * _x * _y);
}

double mut(double _x, double _y)
{
  return exp(sin(PI * _x * _y) * sin(PI * _x * _y));
}

double muy(double _y)
{
  return sin(PI * _y);
}

double mux(double _x)
{
  return _x - _x * _x;
}

double mu1(double y)
{
  return 1./*exp(sin(PI*0*y)*sin(PI*0*y))*/;
}
double mu2(double y)
{
  return exp(sin(PI*y)*sin(PI*y));
}
double mu3(double x)
{
  return 1./*exp(sin(PI*x*0)*sin(PI*x*0))*/;
}
double mu4(double x)
{
  return exp(sin(PI*x)*sin(PI*x));
}

std::vector<std::vector<double>> solveDifferenceScheme(std::function<double(double, double)> ft,
                                                       double mut(double x, double y),
                                                       double a,
                                                       double b,
                                                       double c,
                                                       double d,
                                                       int n,
                                                       int m,
                                                       double eps,
                                                       int countStep,
                                                       std::vector<double>& ans,
                                                       double omega,
                                                       bool isTest)
{
  double h = static_cast<double>(b - a) / static_cast<double>(n);
  double k = static_cast<double>(d - c) / static_cast<double>(m);
  double h2 = 1 / sqr(h);
  double k2 = 1 / sqr(k);
  double a2 = 2 * (h2 + k2);
  double maxEps = 0;
  int    counter = 0;

  std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1));
  auto getX = [&](int i) -> double {
    return a + h * i;
  };

  auto getY = [&](int j) -> double {
    return c + k * j;
  };

  // Init v on the bord
  if (isTest)
  {
    for (int i = 0; i < n + 1; i++) {
      v[i][0] = mut(getX(i), a);
      v[i][m] = mut(getX(i), b);
    }
    for (int j = 0; j < m + 1; j++) {
      v[0][j] = mut(c, getY(j));
      v[n][j] = mut(d, getY(j));
    }
  }
  else
  {
    for (int i = 0; i < n + 1; i++) {
      v[i][0] = mux(getX(i));
      v[i][m] = mux(getX(i));
    }
    for (int j = 0; j < m + 1; j++) {
      v[0][j] = muy(getY(j));
      v[n][j] = muy(getY(j));
    }
  }
  for (int j = 1; j < m; j++) {
    double steph = (v[n][j] - v[0][j]) / n;
    for (int i = 1; i < n; i++) {
      v[i][j] = v[0][j] + steph * i;
    }
  }

  // Seidel Implemetation
  do {
    maxEps = 0.;
    for (int j = 1; j < m; j++)
    {
      for (int i = 1; i < n; i++)
      {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += isTest ? ft(getX(i), getY(j)) :
                            muu(getX(i), getY(j));
        v[i][j] *= 1 / a2;
        double currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) maxEps = currEps;
      }
    }
    counter++;
  } while (maxEps >= eps && counter < countStep);

  double R2 = 0.0, R;

  for (int j = 1; j < m; j++)
  {
    for (int i = 1; i < n; i++)
    {
      R = -a2 * v[i][j] + h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]);
      R += ft(getX(i), getY(j));
      R2 += sqr(R);
    }
  }
  R2 = sqrt(R2);

  double temp_max = 0.0, temp;
  for (int j = 1; j < m; j++)
  {
    for (int i = 1; i < n; i++)
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
  return v;
}
