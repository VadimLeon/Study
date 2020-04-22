#pragma once
#include <vector>

class NumericalMethodsBase
{
public:
#define PI 3.141592653589793

  NumericalMethodsBase();
  NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);
  NumericalMethodsBase(const NumericalMethodsBase& _instance);
  ~NumericalMethodsBase();

  virtual std::vector<std::vector<double> > solveDifferenceScheme() = 0;

protected:
  void updateSteps();
  virtual void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);

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