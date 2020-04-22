#pragma once
#include <vector>

class NumericalMethodsBase
{
public:
#define PI 3.141592653589793

  NumericalMethodsBase();
  NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega);
  NumericalMethodsBase(const NumericalMethodsBase& _instance);
  ~NumericalMethodsBase();
  virtual std::vector<std::vector<double> > solveDifferenceScheme() = 0;

protected:
  int    xNumberStep;    // Number of partitions on the abscissa axis
  int    yNumberStep;    // Number of partitions on the ordinate axis
  int    countIteration; // Number of nodes in the grid
  double eps;            // Error value
  double r, z;           // Accuracy and discrepancy of the method
  double xRight, xLeft;  // Limits on the abscissa axis
  double yRight, yLeft;  // Limits on the ordinate axis
  double omega;          // Parameter of method

  std::vector<std::vector<double>> v; // Iterative solution
  std::vector<std::vector<double>> v2; // Iterative solution
};