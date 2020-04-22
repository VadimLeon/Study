#pragma once
#include <vector>
#include <math.h>

#define _USE_MATH_DEFINES

class NumericalMethodsBase
{
protected:
  void updateSteps();
  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega = 1.);

public:
  int    getN() const;
  double getEps() const;

  NumericalMethodsBase();
  NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);
  NumericalMethodsBase(const NumericalMethodsBase& _instance);
  ~NumericalMethodsBase();

  virtual void solveDifferenceScheme(){}

protected:
  int    xNumberStep;       // Number of partitions on the abscissa axis
  int    yNumberStep;       // Number of partitions on the ordinate axis
  int    countIteration;    // Final value iteration
  double maxEps;            // Final value eps
  double h, k;              // Grid steps
  double eps, maxCountStep; // Exit parameter
  double xRight, xLeft;     // Limits on the abscissa axis
  double yRight, yLeft;     // Limits on the ordinate axis
  double omega;             // Parameter of method
};