#pragma once
#include <vector>

class PossibilityBase
{
public:
  PossibilityBase();
  PossibilityBase(const PossibilityBase& copy);
  ~PossibilityBase();

public:
  int getN() const;
  void setN(const int _N);

protected:


//private:
protected:
  int N;                                  // Number of experiments
  std::vector<double, double> possibles;  // Arrays: paranetr of values and possibility
};

