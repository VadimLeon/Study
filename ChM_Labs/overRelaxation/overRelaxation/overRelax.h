#pragma once
#include <vector>
#include "NumericalMethodsBase.h"
#include "Methods.h"
#include <math.h>

#define _USE_MATH_DEFINES

class OverRelax : public NumericalMethodsBase
{
public:
  OverRelax();
  OverRelax(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  OverRelax(const OverRelax& _instance);
  ~OverRelax();

  void solveDifferenceScheme(bool isTest);


  double getV(int i, int j) const;
  double getU(int i, int j) const;

  double getMaxR(int &x, int &y);
  double getMaxR(const OverRelax& instance, int& x, int& y);
  double getMaxZ();

};

