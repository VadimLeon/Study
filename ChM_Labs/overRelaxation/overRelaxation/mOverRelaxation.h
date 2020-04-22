#pragma once

#include <vector>
#include <functional>
#include <cmath>
//#include <iostream>

#define PI 3.141592653589793

double muu(double _x, double _y);
double mut(double _x, double _y);
double ft(double _x, double _y);
double muy(double _y);
double mux(double _x);

std::vector<std::vector<double>> solveDifferenceScheme(std::function<double(double, double)> f,
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
  bool isTest,
  std::vector<std::vector<double>>& _u);
