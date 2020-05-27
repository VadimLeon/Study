#pragma once
#include "NumericalMethodsBase.h"
class SimpleIteration : public NumericalMethodsBase
{
public:
  SimpleIteration();
  SimpleIteration(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega = 1.0);
  SimpleIteration(const SimpleIteration& _instance);
  ~SimpleIteration();

  void solveDifferenceScheme(bool isTest);

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega = 1.0);
  void setOmega(double _omega, bool isNorm = false);
  void set2Omega(double _omega, bool isNorm = false);

  double getMaxR(int &x, int &y);
  double getMaxR(const SimpleIteration& instance, int& x, int& y);

protected:
  void revertv();
  void resetParameters();

private:
  std::vector<std::vector<double> > newv;   // Iterative solution
};

