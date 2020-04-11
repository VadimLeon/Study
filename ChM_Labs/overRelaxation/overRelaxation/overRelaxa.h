#pragma once
#include <vector>
#include <functional>
#include <cmath>
//#include <iostream>

class overRelaxa
{
public:
  overRelaxa();
  ~overRelaxa();
#pragma once


#define PI 3.141592653589793

  template<typename T>
  T sqr(T x) {
    return x * x;
  }

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


  NumericalMethods();
  NumericalMethods(const NumericalMethods& _instance);
  ~NumericalMethods() {}


  int getN() const;
  double getEps() const;
  void setParams(double _a, double _b,
                 double _c, double _d,
                 double _eps, int nIter/*???*/,
                 int xSteps, int ySteps,
                 double);
  virtual std::vector<std::vector<double>> Value(std::function<double(double, double)> f,
                                                 double mu(double x, double y),
                                                 double a,
                                                 double b,
                                                 double c,
                                                 double d,
                                                 int n,
                                                 int m,
                                                 double eps,
                                                 int countStep,
                                                 std::vector<double>& ans) = 0;

  template<typename T>
  T sqr(T x) {
    return x * x;
  }

protected:
  int    xNumberStep;    // Number of partitions on the abscissa axis
  int    yNumberStep;    // Number of partitions on the ordinate axis
  int    countIteration; // Number of nodes in the grid
  double eps;            // Error value
  double r, z;           // Accuracy and discrepancy of the method
  double xRight, xLeft;  // Limits on the abscissa axis
  double yRight, yLeft;  // Limits on the ordinate axis

  std::vector<std::vector<double>> v; // Iterative solution

  OverRelacsation();
  OverRelacsation(const OverRelacsation& _instance);
  ~OverRelacsation() {}










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

  double mu_t(double x, double y);
  double f_t(double x, double y);

  double testf(double _x, double _y);
  double testu(double _x, double _y);

protected:
  double omega; // Parameter of the method

};

