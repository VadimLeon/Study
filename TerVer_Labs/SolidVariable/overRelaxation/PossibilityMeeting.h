#pragma once
#include <vector>
#include <map>

class PossibilityMeeting
{
public:
  PossibilityMeeting();
  PossibilityMeeting(const PossibilityMeeting& copy);
  ~PossibilityMeeting();

  int  getN() const;
  void setN(const int _N);
  void setMidTime(std::vector<double> ins, int n, bool isUpdate = false);
  double getTime(double ran, int k);
  void getRand(bool isUpdate = false);
  std::map<int, double> getMap() { return possibles; }

protected:
  int N;                           // Number of experiments
  std::vector<double> midTime;     // Arrays: middle value distribution
  std::map<int, double> possibles; // Map: < Number of candidate, Possibility value >
};

