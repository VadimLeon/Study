#pragma once
#include "NumericalMethodsBase.h"
#include "Methods.h"

class OverRelax : public NumericalMethodsBase
{
public:
  OverRelax();
  OverRelax(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  OverRelax(const OverRelax& _instance);
  ~OverRelax();

  void solveDifferenceScheme(bool isTest);

  double getMaxR(int &x, int &y);
  double getMaxR(const OverRelax& instance, int& x, int& y);
};
