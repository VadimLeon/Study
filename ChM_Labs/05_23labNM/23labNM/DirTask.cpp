#include "DirTask.h"
#include <algorithm>
#include <math.h>

DirTest::DirTest(int _n, int _m) : DirBase(_n, _m)
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			Right[(n - 1)*(j - 1) + (i - 1)] = -f(a + i * h, c + j * k);
		}
	initRight();
}
double DirTest::Mu1(double y) const
{
	return (exp(sin(M_PI*a*y)*sin(M_PI*a*y)));
}
double DirTest::Mu2(double y) const
{
	return (exp(sin(M_PI*b*y)*sin(M_PI*b*y)));
}
double DirTest::Mu3(double x) const
{
	return (exp(sin(M_PI*x*c)*sin(M_PI*x*c)));
}
double DirTest::Mu4(double x) const
{
	return (exp(sin(M_PI*x*d)*sin(M_PI*x*d)));
}

double DirBase::uAcc(double x, double y) const
{
	return (exp(sin(M_PI*x*y)*sin(M_PI*x*y)));
}

DirBase::DirBase(int _n, int _m)
{
	n = _n;
	m = _m;
	a = 0;
	b = 1;
	c = 0;
	d = 2;

	h = (double)(b - a) / n;
	k = (double)(d - c) / m;
	A = -2.0*(1 / (h*h) + 1 / (k*k));
	diag1 = 1 / (h*h);
	diag2 = 1 / (k*k);

	Right.resize((n - 1)*(m - 1));
	V.resize((n - 1)*(m - 1));
	std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });

	double lambda_min = 4.0 / h / h * sin(M_PI / 2.0 / n) * sin(M_PI / 2.0 / n)
		+ 4.0 / k / k * sin(M_PI / 2.0 / m) * sin(M_PI / 2.0 / m);
	double lambda_max = 4.0 / h / h * sin(M_PI * (n - 1) / 2.0 / n) * sin(M_PI * (n - 1) / 2.0 / n)
		+ 4.0 / k / k * sin(M_PI * (m - 1) / 2.0 / m) * sin(M_PI * (m - 1) / 2.0 / m);

	tau = 2.0 / (lambda_max + lambda_min);

}

 
double DirTest::f(double x, double y) const 
{
	double add1 = (2 * sin(M_PI*x*y)*sin(M_PI*x*y) + 1)*cos(M_PI*x*y)*cos(M_PI*x*y) - sin(M_PI*x*y)*sin(M_PI*x*y);
	double add2 = 2 * M_PI*M_PI*x*x*exp(sin(M_PI*x*y)*sin(M_PI*x*y))*add1;
	double add3 = 2 * M_PI*M_PI*y*y*exp(sin(M_PI*x*y)*sin(M_PI*x*y))*add1;
	return -(add2 + add3);
}

void DirBase::initRight()
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			if (i - 1 == 0) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu1(c + j * k) / (h*h);
			if (i + 1 == n) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu2(c + j * k) / (h*h);
			if (j - 1 == 0) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu3(a + i * h) / (k*k);
			if (j + 1 == m) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu4(a + i * h) / (k*k);
		}
}

double DirBase::zeidelIter(int num_iter)
{
	for (int i = 0; i < (n - 1)*(m - 1); i++) V[i] = 0;
	double addent = 0;
	int previ = 0;
	int nexti = 0;
	int prevj = 0;
	int nextj = 0;
	double tempV = 0;
	double accuracy = 0;
	double norma = 0;
	double max_norma = 0;
	for (int l = 0; l < num_iter; l++)
	{
		max_norma = 0;
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[indV(i, j)];
				addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[indV(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[indV(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[indV(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[indV(i, nextj)];
				V[indV(i, j)] = (Right[indV(i, j)] - addent) / A;
				norma = fabs(V[indV(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

double DirBase::zeidelEps(double eps, int &spent)
{
	std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	
	double addent = 0;
	int previ = 0;
	int nexti = 0;
	int prevj = 0;
	int nextj = 0;
	double tempV = 0;
	double accuracy = eps + 1;
	double norma = 0;
	double max_norma = 0;
	spent = 0;
	while (accuracy > eps)
	{
		spent++;
		max_norma = 0;
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[indV(i, j)];
				addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[indV(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[indV(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[indV(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[indV(i, nextj)];
				V[indV(i, j)] = (Right[indV(i, j)] - addent) / A;
				norma = fabs(V[indV(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

int DirBase::indV(int i, int j) const
{
	return ((n - 1)*(j - 1) + (i - 1));
}

double DirBase::getX(int i)
{
	return a + i * h;
}

double DirBase::getTau()
{
	return tau;
}

double DirBase::getY(int j)
{
	return c + j * k;
}

//граничные условия основной задачи
double DirMain::Mu1(double y) const
{
	return sin(M_PI*y)*sin(M_PI*y);
}
double DirMain::Mu2(double y) const
{
	return fabs(exp(sin(M_PI*y)) - 1.0);
}
double DirMain::Mu3(double x) const
{
	return x * (1.0 - x);
}
double DirMain::Mu4(double x) const
{
	return x * (1.0 - x)*exp(x);
}
//функция основной задачи
double DirMain::f(double x, double y) const
{
	return fabs(x - y);
}

DirMain::DirMain(int _n, int _m) :DirBase(_n, _m)
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			Right[(n - 1)*(j - 1) + (i - 1)] = -f(a + i * h, c + j * k);
		}

	initRight();
}


double DirBase::simpleIterationIter(int num_iter)
{
	std::vector<double> rs((n - 1)*(m - 1));
	
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	
	int previ = 0;
	int nexti = 0;
	int prevj = 0;
	int nextj = 0;
	double tempV = 0;
	double accuracy = 0;
	double norma = 0;
	double max_norma = 0;
	double r = 0;

	for (int l = 0; l < num_iter; l++)
	{
		max_norma = 0;
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				r = A * V[indV(i, j)];
				if (previ != 0) r += 1.0 / (h*h) * V[indV(previ, j)];
				if (nexti != n) r += 1.0 / (h*h) * V[indV(nexti, j)];
				if (prevj != 0) r += 1.0 / (k*k) * V[indV(i, prevj)];
				if (nextj != m) r += 1.0 / (k*k) * V[indV(i, nextj)];
				rs[indV(i, j)] = Right[indV(i, j)] - r;
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[indV(i, j)];
				
				V[indV(i, j)] = tempV - tau * rs[indV(i, j)];
				norma = fabs(V[indV(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}


double DirBase::simpleIterationEps(double eps, int &spent)
{
	std::vector<double> rs((n - 1)*(m - 1));
	
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	
	spent = 0;
	int previ = 0;
	int nexti = 0;
	int prevj = 0;
	int nextj = 0;
	double tempV = 0;
	double accuracy = eps + 1;
	double norma = 0;
	double max_norma = 0;
	double r = 0;

	while (accuracy > eps)
	{
		spent++;
		max_norma = 0;
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				r = A * V[indV(i, j)];
				if (previ != 0) r += 1.0 / (h*h) * V[indV(previ, j)];
				if (nexti != n) r += 1.0 / (h*h) * V[indV(nexti, j)];
				if (prevj != 0) r += 1.0 / (k*k) * V[indV(i, prevj)];
				if (nextj != m) r += 1.0 / (k*k) * V[indV(i, nextj)];
				rs[indV(i, j)] = Right[indV(i, j)] - r;
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[indV(i, j)];
				
				V[indV(i, j)] = tempV - tau * rs[indV(i, j)];
				norma = fabs(V[indV(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}