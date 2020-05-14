#pragma once
#include <vector>

class NumericalMethodsBase
{
protected:
  void updateSteps();

public:
  int    getN() const;
  double getEps() const;

  NumericalMethodsBase();
  NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);
  NumericalMethodsBase(const NumericalMethodsBase& _instance);
  ~NumericalMethodsBase();

  virtual void solveDifferenceScheme(){}
  void setOmega(double _omega) { omega = _omega; }
  double getX(int i);
  double getY(int J);
  int getW() const;
  int getH() const;
  int getCountIt() const;
  double getMaxR(int &x, int &y);
  double getMaxZ();
  double getV(int i, int j) const;
  double getU(int i, int j) const;

  // Functions of boundary and solucion
  double ft(double x, double y);
  double muu(double _x, double _y);
  double mut(double _x, double _y);
  double muy(double _y);
  double mux(double _x);

  void initTest();
  void initMain();

  void setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega);
  void resetParameters();


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

  std::vector<std::vector<double> > v;  // Iterative solution
  std::vector<std::vector<double> > u;  // Exact solution

};