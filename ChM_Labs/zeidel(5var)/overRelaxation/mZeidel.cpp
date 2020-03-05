#include "mZeidel.h"

double mu(double x, double y) {
  return 1 + (x * x) + (y * y * y);;
};
double f(double x, double y) {
  return -(2 + 6 * y);
};

std::vector<std::vector<double>> solveDifferenceScheme(std::function<double(double, double)> f,
  double mu(double x, double y),
  double a,
  double b,
  double c,
  double d,
  int n,
  int m,
  double eps,
  int countStep,
  std::vector<double>& ans)
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
  for (int i = 0; i < n + 1; i++) {
    v[i][0] = mu(getX(i), 0);
    v[i][m] = mu(getX(i), 1);
  }
  for (int j = 0; j < m + 1; j++) {
    v[0][j] = mu(0, getY(j));
    v[n][j] = mu(1, getY(j));
  }
  for (int j = 1; j < m; j++) {
    for (int i = 1; i < n; i++) {
      v[i][j] = 0.0;
    }
  }

  // Seidel Implemetation
  do {
    maxEps = 0.;
    for (int j = 1; j < m; j++) {
      for (int i = 1; i < n; i++) {
        double oldV = v[i][j];
        v[i][j] = (h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
        v[i][j] += f(getX(i), getY(j));
        v[i][j] /= a2;
        double currEps = std::fabs(oldV - v[i][j]);
        if (currEps > maxEps) {
          maxEps = currEps;
        }
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
      R += f(getX(i), getY(j));
      R2 += sqr(R);
    }
  }
  R2 = sqrt(R2);

  double temp_max = 0.0, temp;
  for (int j = 1; j < m; j++)
  {
    for (int i = 1; i < n; i++)
    {
      temp = std::fabs(mu(getX(i), getY(j)) - v[i][j]);
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

