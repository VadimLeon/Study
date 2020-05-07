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

  void SetCount(int countExpirements);
  void SetMidTime(std::vector<double> ins, int n, bool isUpdate = false);
  void SetNumberBorders(int N);
  void SetBordersValue(std::vector<double> value);

  std::multimap<double, int> getBestBoys() { return firstBoys; }
  std::vector<double> getBordersValue();
  int getNumberBorders() const;
  int getN()     const;
  int getCount() const;
  double getE()  const;
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
  int numberBorders;                    // Number of Gap Boundaries
  std::vector<double> borders;          // Values of Gap Boundaries
  std::vector<double> midTime;          // Arrays: middle value distribution
  std::multimap<double, int> firstBoys; // All boyfrends in first position in 'count' experiments
};

