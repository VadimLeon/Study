#pragma once
#include <vector>
# define M_PI           3.14159265358979323846  /* pi */

class baseTask
{
public:

	int N;
	double h;
	double Mu1;
	double Mu2;
	double a;
	double b;

	std::vector<double> RunningMethod(std::vector<double> D_1, std::vector<double> D_2, std::vector<double> D_3, std::vector<double> B, int size);
	virtual double function(double x) const = 0;
	virtual double functionDerivative1(double x) const = 0;
	virtual double functionDerivative2(double x) const = 0;
	
	void initCoefs(int choise = 0);
	void initCoefA();
	void initCoefB();
	void initCoefC();
	void initCoefD();

public:
	std::vector <double> xGrid;
	std::vector <double> yGrid;
	std::vector <double> aCoef;
	std::vector <double> bCoef;
	std::vector <double> cCoef;
	std::vector <double> dCoef;

	double sXi(int i, double x);
	double sXiDerivative1(int i, double x);
	double sXiDerivative2(int i, double x);

};

class testTask : public baseTask
{
public:
	testTask(int _N);
	double function(double x) const;
	double functionDerivative1(double x) const;
	double functionDerivative2(double x) const;
};

class main1Task : public baseTask
{
public:
	main1Task(int _N);
	double function(double x) const;
	double functionDerivative1(double x) const;
	double functionDerivative2(double x) const;
};

class main2Task : public baseTask
{
public:
	main2Task(int _N);
	double function(double x) const;
	double functionDerivative1(double x) const;
	double functionDerivative2(double x) const;
};
class main3Task : public baseTask
{
public:
	main3Task(int _N);
	double function(double x) const;
	double functionDerivative1(double x) const;
	double functionDerivative2(double x) const;
};