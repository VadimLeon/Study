#ifndef _DIRICHLETTASK_
#define _DIRICHLETTASK_

#include <cmath>
#include <cstdlib>
#include <vector>


#define PI 3.141592653589793238462643383279502884197169399375105820974944

class Dirichlet_Base
{
public:
	std::vector <double> V;
	int Ind_v(int i, int j) const;
	double U_acc(double x, double y) const;
	double Getx (int i);
	double Gety (int j);
	double Zeidel_iter(int num_iter);
	double Zeidel_eps(double eps,int &spent);
	double Simple_iteration_iter(int num_iter);
	double Simple_iteration_eps(double eps, int &spent);
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
	double Tau;

	std::vector <double> Right;

	virtual double Mu1(double y) const = 0;
	virtual double Mu2(double y) const = 0;
	virtual double Mu3(double x) const = 0;
	virtual double Mu4(double x) const = 0;

	virtual double f(double x, double y) const = 0;
	void Init_Right();
	//double calc_accuracy(std::vector<double> &a, std::vector<double> &b);
	
	

	Dirichlet_Base(int _n, int _m);
	
};

class Dirichlet_Test : public Dirichlet_Base
{
public:
	virtual double Mu1(double y) const;
	virtual double Mu2(double y) const;
	virtual double Mu3(double x) const;
	virtual double Mu4(double x) const;
	virtual double f(double x, double y) const;
	//virtual void Init_Right();
public:
	Dirichlet_Test(int _n, int _m);

};

class Dirichlet_Main : public Dirichlet_Base
{
public:
	virtual double Mu1(double y) const;
	virtual double Mu2(double y) const;
	virtual double Mu3(double x) const;
	virtual double Mu4(double x) const;
	virtual double f(double x, double y) const;
	//virtual void Init_Right();
public:
	Dirichlet_Main(int _n, int _m);

};


#endif // !_DIRICHLETTASK_
