#pragma once
#include "NumericalMethodsBase.h"
class MinimumDiscrepancy : public NumericalMethodsBase
{
public:
  MinimumDiscrepancy();
  MinimumDiscrepancy(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft);
  MinimumDiscrepancy(const MinimumDiscrepancy& _instance);
  ~MinimumDiscrepancy();

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight);
  void solveDifferenceScheme(bool isTest);

  double CalculateParameter(double h, double k);


  double getMaxR(int &x, int &y);
  double getMaxR(const MinimumDiscrepancy& instance, int& x, int& y);

protected:
  void getTau();
  void revertv();
  void resetParameters();

private:
  std::vector<std::vector<double> > r; // Iterative solution
  double h2, k2, a2, tau;              // Parameters of the method
};

