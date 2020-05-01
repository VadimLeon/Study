#pragma once
#include "Methods.h"
#include <vector>
#include <map>

class PossibilityMeeting
{
public:
  PossibilityMeeting();
  PossibilityMeeting(const PossibilityMeeting& copy);
  ~PossibilityMeeting();

  void setCount(int countExpirements);
  void setMidTime(std::vector<double> ins, int n, bool isUpdate = false);

  std::multimap<double, int> getBestBoys() { return firstBoys; }
  int getN()     const;
  int getCount() const;
  double getR()  const;
  double getMe() const;
  double getX()  const;
  double getS2() const;
  double getMaxD();
  double getY(double _x);
  double getY(double _x, double _mathWait);

private:
  void   getRand(bool isUpdate = false);
  double getTime(double ran, int k);
  void   calculate();

protected:
  double sampleMean;                    // x'
  double sampleVariance;                // S^2
  double sampleRange;                   // R"
  double sampleMedian;                  // Me"
  double midleTime;                     // Middle math waiting
  int N;                                // Number of boyfriend
  int count;                            // Count of experiments
  std::vector<double> midTime;          // Arrays: middle value distribution
  std::multimap<double, int> firstBoys; // All boyfrends in first position in 'count' experiments
};

