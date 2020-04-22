#pragma once
#include "NumericalMethodsBase.h"
#include "Methods.h"
#include <vector>
#include <functional>
#include <math.h>

#define _USE_MATH_DEFINES

class overRelaxa : public NumericalMethodsBase
{
public:
  overRelaxa();
  overRelaxa(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  overRelaxa(const overRelaxa& _instance);
  ~overRelaxa();

  void solveDifferenceScheme(bool isTest);

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);
  void setOmega(double _omega) { omega = _omega; }
  void resetParameters();

  double getV(int i, int j) const;
  double getU(int i, int j) const;

  int getW() const { return xNumberStep; }
  int getH() const { return yNumberStep; }

  double getMaxR(int &x, int &y);
  double getMaxR(const overRelaxa& instance, int& x, int& y);
  double getMaxZ();
  int getCountIt() const { return countIteration; }


private:
  double ft(double _x, double _y);
  double muu(double _x, double _y);
  double mut(double _x, double _y);
  double muy(double _y);
  double mux(double _x);

  void initTest();
  void initMain();

  double getX(int i);
  double getY(int J);

private:
  std::vector<std::vector<double> > v;  // Iterative solution
  std::vector<std::vector<double> > u;  // Exact solution
};

