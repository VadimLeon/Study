#pragma once
#include "NumericalMethodsBase.h"

class regioon : public NumericalMethodsBase
{
public:
  regioon();
  regioon(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega = -1.0);
  regioon(const regioon& _instance);
  ~regioon();

  void solveDifferenceScheme(bool isTest);

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xRight, double _xLeft, double _yRight, double _yLeft, double _omega = -1.0);
  void setOmega(double _omega, bool isNorm = false);

  double getMaxR(int& x, int& y);
  double getR2(int i, int j);
  double getMaxR(const regioon& instance, int& x, int& y);

protected:
  void testInitial();
  void mainInitial();

protected:
  std::vector<std::vector<double> > r2;   // Iterative solution
  double h_1, k_1, h_2, k_2, h_3, k_3;// Borders for 3th regions
  int minA, maxA, minB, maxB;         // Borders for 3th regions
  double h2, k2, a2;                  // Parameters of the method
};

