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

  double get2V(int i, int j);
  double getMaxR(int &x, int &y);
  double getMaxR(const SimpleIteration& instance, int& x, int& y);

protected:
  void revertv();
  void revert2v();
  void resetParameters();
  void initOld2V();

private:
  std::vector<std::vector<double> > newv;   // Iterative solution
  std::vector<std::vector<double> > new2v;  // Iterative solution
  std::vector<std::vector<double> > old2v;  // Iterative solution
};

