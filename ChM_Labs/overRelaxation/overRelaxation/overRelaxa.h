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
  overRelaxa(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  overRelaxa(const overRelaxa& _instance);
  ~overRelaxa();


  std::vector<std::vector<double>> solveDifferenceScheme(std::function<double(double, double)> f,
                                                         double mut(double x, double y),
                                                         int countStep,
                                                         std::vector<double>& ans,
                                                         bool isTest,
                                                         std::vector<std::vector<double>>& _u);


  void   reset();
  int    getN() const;
  double getEps() const;
  virtual void setParams(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);

private:
  double ft(double _x, double _y);
  double muu(double _x, double _y);
  double mut(double _x, double _y);
  double muy(double _y);
  double mux(double _x);

protected:
  std::vector<std::vector<double>> v;  // Iterative solution
  std::vector<std::vector<double>> u;  // Exact solution
};

