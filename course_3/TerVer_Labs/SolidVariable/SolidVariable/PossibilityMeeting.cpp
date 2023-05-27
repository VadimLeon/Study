#define _USE_MATH_DEFINES
#include "PossibilityMeeting.h"
#include <math.h>
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
    chanceMup.insert(std::make_pair(getY(possibles.begin()->first, midTime[possibles.begin()->second]), possibles.begin()->second));
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

  minTime = 1000.0;
  for (int i = 0; i < N; ++i)
  {
    midTime.push_back(ins[i]);
    if (ins[i] < minTime) minTime = ins[i];
  }

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
  return (1. - exp(-(_x / minTime)));
}

double PossibilityMeeting::getZ(double _x)
{
  return (exp(-(_x / minTime)));
}

double PossibilityMeeting::getY(double _x, double _mathWait)
{
  return (1. - exp(-(_x / _mathWait)));
}

double PossibilityMeeting::getDefen(double x1, double x2)
{
  return ((1. - exp(-(x1 / minTime))) - (1. - exp(-(x2 / minTime))));
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
  return minTime;
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

std::vector<double> getMidBorders()
{
  std::vector<double> res;



  return res;
}

double PossibilityMeeting::getR_0()
{
  R_0 = 0.0;
  std::vector<int> numberCount;
  int prevCount = 0;

  for (int i = 0; i < k_i.size(); ++i)
  {
    numberCount.push_back(0);
    for (const auto &x : chanceMup)
    {
      if (x.first < k_i[i]) { numberCount[i] += 1; }
    }

    if (i != 0) { numberCount[i] -= prevCount; }

    prevCount += numberCount[i];
  }

  for (int i = 0; i < k_i.size(); ++i)
  {
    R_0 += sqr((numberCount[i] - q_i[i] * k_i.size())) / (q_i[i] * k_i.size());
  }

  return R_0;
}

double PossibilityMeeting::getFR0()
{
  getR_0();

  double gamma, tmp = 0.0;
  if (k_i.size() % 2) { gamma = sqrt(M_PI) * ((int)(k_i.size() * 0.5)); }
  else { gamma = (int)(k_i.size() * 0.5); }

  for (int i = 0; i < k_i.size(); ++i)
  {
    double a = i ? k_i[i - 1] : 0;
    double b = k_i[i];
    double X1 = a + (b - a) * (i - 1) / k_i.size();
    double X2 = a + (b - a) * i / k_i.size();

    tmp += (pow(2, (k_i.size() * (-0.5))) * gamma * exp(-0.5 * X1) * pow(X1, k_i.size() * 0.5 - 1.0) +
            pow(2, (k_i.size() * (-0.5))) * gamma * exp(-0.5 * X2) * pow(X2, k_i.size() * 0.5 - 1.0)) *
            (b - a) / (2.0 * k_i.size());
  }

  FR0 = 1.0 - tmp;

  return tmp;
}

void PossibilityMeeting::SetGQ(std::vector<double> k, std::vector<double> q, int size)
{
  for (int i = 0; i < size; ++i)
  {
    q_i.push_back(q[i]);
    k_i.push_back(k[i]);
  }
}

