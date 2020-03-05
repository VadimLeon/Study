#pragma once

#include <vector>
#include <functional>
#include <vector>
#include <cmath>
#include <iostream>

template<typename T>
T sqr(T x) {
  return x * x;
}

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
  std::vector<double>& ans);

double mu(double x, double y);
double f(double x, double y);