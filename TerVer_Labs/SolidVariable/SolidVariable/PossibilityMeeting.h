#pragma once
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

  int    getN() const;
  int    getCount() const;
  std::vector<std::pair<int, double>> getBestBoys() { return firstBoys; }

private:
  void   getRand(bool isUpdate = false);
  double getTime(double ran, int k);

protected:
  int N;                                          // Number of boyfriend
  int count;                                      // Count of experiments
  std::vector<double> midTime;                    // Arrays: middle value distribution
  std::vector<std::pair<int, double>> firstBoys;  // All boyfrends in first position in 'count' experiments
};

