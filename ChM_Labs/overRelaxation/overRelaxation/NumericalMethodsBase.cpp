#include "NumericalMethodsBase.h"
#include "Methods.h"

void NumericalMethodsBase::setParameters(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep, double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega)
{
  xNumberStep = _xNumberStep;
  yNumberStep = _yNumberStep;
  xLeft       = _xLeft;
  yRight      = _yRight;
  yLeft       = _yLeft;
  xRight      = _xRight;
  eps         = _eps;
  omega       = _omega;
  maxCountStep   = _maxCountStep;
  countIteration = 0;

  updateSteps();
}

void NumericalMethodsBase::updateSteps()
{
  h = static_cast<double>(xRight - xLeft) / static_cast<double>(xNumberStep);
  k = static_cast<double>(yRight - yLeft) / static_cast<double>(yNumberStep);
}

int NumericalMethodsBase::getN() const
{
  return countIteration;
}

double NumericalMethodsBase::getEps() const
{
  return maxEps;
}


NumericalMethodsBase::NumericalMethodsBase() : xNumberStep(-1), yNumberStep(-1),
xRight(-1.), xLeft(-1.), yRight(-1.), yLeft(-1.),
eps(1e-8), maxCountStep(-1.), omega(1.),
maxEps(0.), countIteration(0)
{}

NumericalMethodsBase::NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps, double _maxCountStep,
                                           double _xLeft, double _xRight, double _yLeft, double _yRight, double _omega) :
                                           xNumberStep(_xNumberStep), yNumberStep(_yNumberStep),
                                           eps(_eps), maxCountStep(_maxCountStep),
                                           maxEps(0.), countIteration(0),
                                           xRight(_xRight), xLeft(_xLeft),
                                           yRight(_yRight), yLeft(_yLeft),
                                           omega(_omega)
{
  updateSteps();
}

NumericalMethodsBase::NumericalMethodsBase(const NumericalMethodsBase& _instance) : xNumberStep(_instance.xNumberStep), yNumberStep(_instance.yNumberStep),
                                                                                    xRight(_instance.xRight), xLeft(_instance.xLeft),
                                                                                    yRight(_instance.yRight), yLeft(_instance.yLeft),
                                                                                    h(_instance.h), k(_instance.k),
                                                                                    eps(_instance.eps), maxCountStep(_instance.maxCountStep),
                                                                                    maxEps(_instance.maxEps), countIteration(_instance.countIteration),
                                                                                    omega(_instance.omega)
{}

NumericalMethodsBase::~NumericalMethodsBase()
{
}

