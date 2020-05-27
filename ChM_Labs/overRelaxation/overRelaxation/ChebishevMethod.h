#pragma once
#include "NumericalMethodsBase.h"
class ChebishevMethod : public NumericalMethodsBase
{
public:
  // Constructors
  ChebishevMethod() : NumericalMethodsBase()
  {}

  ChebishevMethod(const ChebishevMethod& _instance) : NumericalMethodsBase(_instance.xNumberStep, _instance.yNumberStep,
    _instance.eps, _instance.maxCountStep,
    _instance.xRight, _instance.xLeft,
    _instance.yRight, _instance.yLeft,
    _instance.omega)
  {}

  ChebishevMethod(int _xNumberStep, int _yNumberStep,
              double _eps, double _maxCountStep,
              double _xRight, double _xLeft, double _yRight, double _yLeft,
              double _omega) :
              NumericalMethodsBase(_xNumberStep, _yNumberStep, _eps, _maxCountStep, _xRight, _xLeft, _yRight, _yLeft, _omega)
  {}


  ~ChebishevMethod() {}

  void solveDifferenceScheme(bool isTest);

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight);

  double getMaxR(int &x, int &y);
  double getMaxR(const ChebishevMethod& instance, int& x, int& y);

protected:
  void revertv();

private:
  std::vector<std::vector<double> > newv;   // Iterative solution
  double h2, k2, a2, lambdaMin, lambdaMax;  // Parameters of the method
  double normR;                             // max|v - u| from test
  int _x, _y;
};