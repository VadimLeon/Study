#pragma once
#include "NumericalMethodsBase.h"
#include <vector>
#include <functional>
#include <cmath>
//#include <iostream>

#include "Methods.h"

class overRelaxa : public NumericalMethodsBase
{
public:
  overRelaxa();
  overRelaxa(int _xNumberStep, int _yNumberStep, double _eps, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  overRelaxa(const overRelaxa& _instance);
  ~overRelaxa();

  double ft(double _x, double _y);
  double muu(double _x, double _y);
  double mut(double _x, double _y);
  double muy(double _y);
  double mux(double _x);

  double mu1(double y);
  double mu2(double y);
  double mu3(double x);
  double mu4(double x);

  std::vector<std::vector<double>> solveDifferenceScheme(std::function<double(double, double)> f,
                                                         double mut(double x, double y),
                                                         int countStep,
                                                         std::vector<double>& ans,
                                                         bool isTest,
                                                         std::vector<std::vector<double>>& _u);



  int    getN() const;
  double getEps() const;
  void   setParams(double _a, double _b,
                   double _c, double _d,
                   double _eps,
                   int _xSteps, int _ySteps,
                   double _omega);
  virtual std::vector<std::vector<double>> Value(std::function<double(double, double)> f,
                                                 double mu(double x, double y),
                                                 int countStep,
                                                 std::vector<double>& ans) = 0;

protected:
  double mu_t(double x, double y);
  double testf(double _x, double _y);
  double testu(double _x, double _y);
};

