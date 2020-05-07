#include "PossibilityMeeting.h"
#include <iostream>
#include <ctime>

PossibilityMeeting::PossibilityMeeting() : N(1), count(1)
{}

PossibilityMeeting::PossibilityMeeting(const PossibilityMeeting& copy) : N(copy.N), count(copy.count)
{}

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

    firstBoys.insert(std::make_pair(possibles.begin()->first, possibles.begin()->second));
  }

  calculate();
}

double PossibilityMeeting::getTime(double ran, int k)
{
  return -(1 / midTime[k])*log(1. - ran);
}

void PossibilityMeeting::SetMidTime(std::vector<double> ins, int n, bool isUpdate)
{
  N = n;

  if (!midTime.empty()) midTime.clear();
  if (!firstBoys.empty()) firstBoys.clear();

  midleTime = 0.;
  for (int i = 0; i < N; ++i)
  {
    midTime.push_back(ins[i]);
    midleTime += ins[i];
  }
  midleTime /= N;

  getRand(isUpdate);
}

void PossibilityMeeting::SetCount(int countExpirement)
{
  count = countExpirement;
}

void PossibilityMeeting::SetBordersValue(std::vector<double> value)
{
  if (!borders.empty()) { borders.clear(); }

  for (int i = 0; i < numberBorders; ++i)
  {
    borders.push_back(value[i]);
  }
}

double PossibilityMeeting::getY(double _x)
{
  return (1. - exp(-(_x / midleTime)));
}

double PossibilityMeeting::getY(double _x, double _mathWait)
{
  return (1. - exp(-(_x / _mathWait)));
}

void PossibilityMeeting::calculate()
{
  double sum = 0.;

  // get x'
  for (const auto &x : firstBoys)
  {
    sum += x.first;
  }
  sampleMean = sum / (double)count;

  bool isMidle = (count % 2 == 0);
  int midle = int(count / 2), med = 0;
  sum = 0.;
  for (const auto &x : firstBoys)
  {
    // get S^2
    sum += sqr(x.first - sampleMean);

    // get Me"
    if (med == midle && isMidle) sampleMedian = x.first;
    if (med == midle + 1 && isMidle) sampleMedian = (sampleMedian + x.first) / 2;
    else if (med == midle + 1) sampleMedian = x.first;
    ++med;
  }
  sampleVariance = sum / (double)count;

  // get R"
  sampleRange = (firstBoys.crbegin()->first - firstBoys.begin()->first);

}

int PossibilityMeeting::getN() const
{
  return N;
}

int  PossibilityMeeting::getCount() const
{
  return count;
}

double PossibilityMeeting::getE()  const
{
  return midleTime;
}

double PossibilityMeeting::getR() const
{
  return sampleRange;
}

double PossibilityMeeting::getMe() const
{
  return sampleMedian;
}

double PossibilityMeeting::getX() const
{
  return sampleMean;
}

double PossibilityMeeting::getS2() const
{
  return sampleVariance;
}

double PossibilityMeeting::getMaxD()
{
  int i = 0;
  std::map<double, int> stec;
  for (const auto &x : firstBoys)
  {
    double diff = abs(getY(x.first, midTime[x.second]) - getY(x.first));
    stec.insert(std::make_pair(diff, i++));
  }

  return (stec.rbegin()->first);
}

void PossibilityMeeting::SetNumberBorders(int N)
{
  numberBorders = N;
}

int PossibilityMeeting::getNumberBorders() const
{
  return numberBorders;
}

std::vector<double> PossibilityMeeting::getBordersValue()
{
  return borders;
}
