#include <cmath>
#include <math.h>
#include <cstdlib>
#include <vector>
#define _USE_MATH_DEFINES


class DirBase
{
public:
	std::vector <double> V;
	int indV(int i, int j) const;
	double uAcc(double x, double y) const;
	double getX(int i);
	double getY(int j);
	double zeidelIter(int num_iter);
	double zeidelEps(double eps, int &spent);
	double simpleIterationIter(int num_iter);
	double simpleIterationEps(double eps, int &spent);
	double getTau();
protected:
	double a;
	double b;
	double c;
	double d;
	int n;
	int m;
	double h;
	double k;
	double A;
	double diag1;
	double diag2;
	double tau;

	std::vector <double> Right;

	virtual double Mu1(double y) const = 0;
	virtual double Mu2(double y) const = 0;
	virtual double Mu3(double x) const = 0;
	virtual double Mu4(double x) const = 0;

	virtual double f(double x, double y) const = 0;
	void initRight();

	DirBase(int _n, int _m);

};

class DirTest : public DirBase
{
public:
	virtual double Mu1(double y) const;
	virtual double Mu2(double y) const;
	virtual double Mu3(double x) const;
	virtual double Mu4(double x) const;
	virtual double f(double x, double y) const;
public:
	DirTest(int _n, int _m);

};

class DirMain : public DirBase
{
public:
	virtual double Mu1(double y) const;
	virtual double Mu2(double y) const;
	virtual double Mu3(double x) const;
	virtual double Mu4(double x) const;
	virtual double f(double x, double y) const;
public:
	DirMain(int _n, int _m);

};


