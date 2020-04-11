#include "PossibilityBase.h"


PossibilityBase::PossibilityBase() : N(-1)
{}

PossibilityBase::PossibilityBase(const PossibilityBase& copy): N(copy.N) 
{
  if (this != &copy)
  {
    if (!possibles.empty()) possibles.clear();

    for (int i = 0; i < copy.possibles.size(); ++i)
    {
      possibles.push_back(copy.possibles[i]);
    }
  }
}


PossibilityBase::~PossibilityBase()
{
  if (!possibles.empty()) possibles.clear();
}

int PossibilityBase::getN() const
{
  return N;
}

void PossibilityBase::setN(const int _N)
{
  N = _N;
}

