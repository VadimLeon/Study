#include "NumericalMethodsBase.h"


NumericalMethodsBase::NumericalMethodsBase() : countIteration(-1), xNumberStep(-1), yNumberStep(-1), r(-1.), z(-1.),
xRight(-1.), xLeft(-1.), yRight(-1.), yLeft(-1.), eps(1e-8), omega(-1.)
{}

NumericalMethodsBase::NumericalMethodsBase(int _xNumberStep, int _yNumberStep, double _eps,
                                           double _xRight, double _xLeft,
                                           double _yRight, double _yLeft,
                                           double _omega) : xNumberStep(_xNumberStep), yNumberStep(_yNumberStep), eps(_eps),
                                                            xRight(_xRight), xLeft(_xLeft),
                                                            yRight(_yRight), yLeft(_yLeft),
                                                            omega(_omega), countIteration(-1)
{}

NumericalMethodsBase::NumericalMethodsBase(const NumericalMethodsBase& _instance) : countIteration(_instance.countIteration),
                                                                                    xNumberStep(_instance.xNumberStep),
                                                                                    yNumberStep(_instance.yNumberStep),
                                                                                    r(_instance.r), z(_instance.z),
                                                                                    xRight(_instance.xRight), xLeft(_instance.xLeft),
                                                                                    yRight(_instance.yRight), yLeft(_instance.yLeft),
                                                                                    eps(_instance.eps), omega(_instance.omega)
{}


NumericalMethodsBase::~NumericalMethodsBase()
{
}
