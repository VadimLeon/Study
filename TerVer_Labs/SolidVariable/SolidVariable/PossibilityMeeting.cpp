#include "PossibilityMeeting.h"
#include <iostream>
#include <ctime>

PossibilityMeeting::PossibilityMeeting() : N(1), count(1)
{}

PossibilityMeeting::PossibilityMeeting(const PossibilityMeeting& copy) : N(copy.N), count(copy.count)
{
  if (this != &copy)
  {
    if (!midTime.empty()) midTime.clear();

    for (int i = 0; i < copy.midTime.size(); ++i)
    {
      midTime.push_back(copy.midTime[i]);
    }
  }
}

PossibilityMeeting::~PossibilityMeeting()
{}

void PossibilityMeeting::getRand(bool isUpdate)
{
  srand(1);

  for (int j = 0; j < count; ++j)
  {
    std::map<double, int> possibles;

    isUpdate ? srand(unsigned(time(NULL) + 11 * (j + 1))) : false;
    for (int i = 0; i < N; ++i)
    {
      possibles.insert(std::make_pair(getTime((double)rand() / (double)RAND_MAX, i), i));
    }

    firstBoys.push_back(std::make_pair(possibles.begin()->second, possibles.begin()->first));
  }
}

double PossibilityMeeting::getTime(double ran, int k)
{
  return -(1 / midTime[k])*log(1. - ran);
}

void PossibilityMeeting::setMidTime(std::vector<double> ins, int n, bool isUpdate)
{
  N = n;

  if (!midTime.empty()) midTime.clear();
  if (!firstBoys.empty()) firstBoys.clear();

  for (int i = 0; i < N; ++i)
  {
    midTime.push_back(ins[i]);
  }

  getRand(isUpdate);
}

int PossibilityMeeting::getN() const
{
  return N;
}

int  PossibilityMeeting::getCount() const
{
  return count;
}

void PossibilityMeeting::setCount(int countExpirement)
{
  count = countExpirement;
}
