#include "PossibilityMeeting.h"
#include <iostream>
#include <ctime>

PossibilityMeeting::PossibilityMeeting() : N(1)
{}

PossibilityMeeting::PossibilityMeeting(const PossibilityMeeting& copy) : N(copy.N)
{
  if (this != &copy)
  {
    if (!midTime.empty()) midTime.clear();

    for (int i = 0; i < copy.midTime.size(); ++i)
    {
      midTime.push_back(copy.midTime[i]);
      //      possibles[i] = copy.possibles[i];
    }
  }
}

PossibilityMeeting::~PossibilityMeeting()
{}

void PossibilityMeeting::getRand(bool isUpdate)
{
  isUpdate ? srand(time(NULL)) : srand(1);
  for (int i = 0; i < N; ++i)
  {
    possibles[i] = getTime((double)rand() / (double)RAND_MAX, i);
  }
}

double PossibilityMeeting::getTime(double ran, int k)
{
  return -(1 / midTime[k])*log(1. - ran);
}

void PossibilityMeeting::setMidTime(std::vector<double> ins, int n, bool isUpdate)
{
  setN(n);

  if (!midTime.empty()) midTime.clear();
  if (!possibles.empty()) possibles.clear();

  for (int i = 0; i < n; ++i)
  {
    midTime.push_back(ins[i]);
  }

  getRand(isUpdate);
}

int PossibilityMeeting::getN() const
{
  return N;
}

void PossibilityMeeting::setN(const int _N)
{
  N = _N;
  midTime.resize(N);
}
