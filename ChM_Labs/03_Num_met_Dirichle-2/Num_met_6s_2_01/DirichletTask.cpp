#include "DirichletTask.h"
#include <algorithm>


Dirichlet_Test::Dirichlet_Test(int _n, int _m) :Dirichlet_Base(_n, _m) 
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			Right[(n - 1)*(j - 1) + (i - 1)] = -f(a + i * h, c + j * k);
		}
	Init_Right();
}
double Dirichlet_Test::Mu1(double y) const
{
	return (exp(sin(PI*a*y)*sin(PI*a*y)));
}
double Dirichlet_Test::Mu2(double y) const
{
	return (exp(sin(PI*b*y)*sin(PI*b*y)));
}
double Dirichlet_Test::Mu3(double x) const
{
	return (exp(sin(PI*x*c)*sin(PI*x*c)));
}
double Dirichlet_Test::Mu4(double x) const
{
	return (exp(sin(PI*x*d)*sin(PI*x*d)));
}

double Dirichlet_Base::U_acc(double x, double y) const
{
	return (exp(sin(PI*x*y)*sin(PI*x*y)));
}

Dirichlet_Base::Dirichlet_Base(int _n, int _m)
{
	n = _n;
	m = _m;
	a = 0;
	b = 1;
	c = 0;
	d = 2;

	h = (double)(b - a) / n;
	k = (double)(d - c) / m;
	//A = -2.0*(n * n + m * m);
	A = -2.0*(1/(h*h) + 1/(k*k));
	diag1 = 1/(h*h);
	diag2 = 1/(k*k);

	Right.resize((n - 1)*(m - 1));
	V.resize((n - 1)*(m - 1));
	std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0;});

	double lambda_min = 4.0 / h / h * sin(PI / 2.0 / n) * sin(PI / 2.0 / n)
		+ 4.0 / k / k * sin(PI / 2.0 / m) * sin(PI / 2.0 / m);
	double lambda_max = 4.0 / h / h * sin(PI * (n - 1) / 2.0 / n) * sin(PI * (n - 1) / 2.0 / n)
		+ 4.0 / k / k * sin(PI * (m - 1) / 2.0 / m) * sin(PI * (m - 1) / 2.0 / m);
	//Tau = 0.00001;
	Tau = 2.0 / (lambda_max + lambda_min);

}

double Dirichlet_Test::f(double x, double y) const
{
	/*double addent1 = 2 * PI*PI*(x*x + y * y)*cos(2 * PI*x*y);
	double addent2 = PI * (2 + x + y)*sin(2 * PI*x*y);
	return -((exp(sin(PI*x*y)*sin(PI*x*y)) * (addent1 + addent2)));*/

	double addent1 = (2*sin(PI*x*y)*sin(PI*x*y)+1)*cos(PI*x*y)*cos(PI*x*y) - sin(PI*x*y)*sin(PI*x*y);
	double addent2 = 2*PI*PI*x*x*exp(sin(PI*x*y)*sin(PI*x*y))*addent1;
	double addent3 = 2*PI*PI*y*y*exp(sin(PI*x*y)*sin(PI*x*y))*addent1;
	return -(addent2 + addent3);
}

void Dirichlet_Base::Init_Right()
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

double Dirichlet_Base::Zeidel_iter(int num_iter)
{
	//std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
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
				tempV = V[Ind_v(i, j)];
				addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];
				V[Ind_v(i, j)] = (Right[Ind_v(i, j)] - addent) / A;
				norma = fabs(V[Ind_v(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

double Dirichlet_Base::Zeidel_eps(double eps, int &spent)
{
	std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	//for (int i = 0; i < (n - 1)*(m - 1); i++) V[i] = 0;
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
				tempV = V[Ind_v(i, j)];
				addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];
				V[Ind_v(i, j)] = (Right[Ind_v(i, j)] - addent) / A;
				norma = fabs(V[Ind_v(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

int Dirichlet_Base::Ind_v(int i, int j) const
{
	return ((n - 1)*(j - 1) + (i - 1));
}

double Dirichlet_Base::Getx(int i)
{
	return a + i * h;
}

double Dirichlet_Base::Gety(int j)
{
	return c + j * k;
}

double Dirichlet_Main::Mu1(double y) const
{
	return sin(PI*y)*sin(PI*y);
}
double Dirichlet_Main::Mu2(double y) const
{
	return fabs(exp(sin(PI*y)) - 1.0);
}
double Dirichlet_Main::Mu3(double x) const
{
	return x*(1.0-x);
}
double Dirichlet_Main::Mu4(double x) const
{
	return x*(1.0-x)*exp(x);
}

double Dirichlet_Main::f(double x, double y) const
{
	return fabs(x-y);
}

Dirichlet_Main::Dirichlet_Main(int _n, int _m) :Dirichlet_Base(_n, _m)
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			Right[(n - 1)*(j - 1) + (i - 1)] = -f(a + i * h, c + j * k);
		}
	
	Init_Right();
}

double Dirichlet_Base::Simple_iteration_iter(int num_iter)
{
	std::vector<double> rs((n - 1)*(m - 1));
	//std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	//std::for_each(rs.begin(), rs.end(), [](double _n) {_n = 0.0; });
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	//double addent = 0;
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
				r = A * V[Ind_v(i, j)];
				if (previ != 0) r += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) r += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) r += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) r += 1.0 / (k*k) * V[Ind_v(i, nextj)];
				rs[Ind_v(i,j)] = Right[Ind_v(i,j)] - r;
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[Ind_v(i, j)];
				/*addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];*/
				V[Ind_v(i, j)] = tempV - Tau*rs[Ind_v(i,j)];
				norma = fabs(V[Ind_v(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

double Dirichlet_Base::Simple_iteration_eps(double eps, int &spent)
{
	std::vector<double> rs((n - 1)*(m - 1));
	//std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	//std::for_each(rs.begin(), rs.end(), [](double _n) {_n = 0.0; });
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	//double Tau = 0.04;
	//double addent = 0;
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
				r = A * V[Ind_v(i, j)];
				if (previ != 0) r += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) r += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) r += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) r += 1.0 / (k*k) * V[Ind_v(i, nextj)];
				rs[Ind_v(i, j)] = Right[Ind_v(i, j)] - r;
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				tempV = V[Ind_v(i, j)];
				/*addent = 0;
				previ = i - 1;
				nexti = i + 1;
				prevj = j - 1;
				nextj = j + 1;
				if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
				if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
				if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
				if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];*/
				V[Ind_v(i, j)] = tempV - Tau * rs[Ind_v(i, j)];
				norma = fabs(V[Ind_v(i, j)] - tempV);
				if (norma > max_norma) max_norma = norma;
			}
		accuracy = max_norma;
	}
	return accuracy;
}

double Dirichlet_Main_2::Mu5(double y) const
{
	return (exp(sin(PI*((b+a)/2.0)*y)*sin(PI*((b+a)/2.0)*y)));
}

double Dirichlet_Main_2::Mu6(double x) const
{
	return (exp(sin(PI*x*((c + d) / 2.0))*sin(PI*x*((c + d) / 2.0))));
}

Dirichlet_Main_2::Dirichlet_Main_2(int _n, int _m) :Dirichlet_Test(_n, _m)
{
	/*Right.resize((n - 1)*(m - 1));
	V.resize((n - 1)*(m - 1));
	std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });*/

	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			Right[(n - 1)*(j - 1) + (i - 1)] = -f(a + i * h, c + j * k);
		}
	this->Init_Right();
}

void Dirichlet_Main_2::Init_Right()
{
	for (int j = 1; j < m; j++)
		for (int i = 1; i < n; i++)
		{
			if (i < n / 2 || j < m / 2) {
				if (i - 1 == 0) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu1(c + j * k) / (h*h);
				if (i + 1 == n) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu2(c + j * k) / (h*h);
				if (i + 1 == n / 2 && j >= m / 2) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu5(c + j * k) / (h*h);
				if (j - 1 == 0) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu3(a + i * h) / (k*k);
				if (j + 1 == m) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu4(a + i * h) / (k*k);
				if (j + 1 == m / 2 && i >= n / 2) Right[(n - 1)*(j - 1) + (i - 1)] -= Mu6(a + i * h) / (k*k);
			}
		}
}

double Dirichlet_Main_2::Simple_iteration_iter(int num_iter)
{
	std::vector<double> rs((n - 1)*(m - 1));
	//std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	//std::for_each(rs.begin(), rs.end(), [](double _n) {_n = 0.0; });
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	//double addent = 0;
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
				r = A * V[Ind_v(i, j)];
				if (i < n / 2 || j < m / 2) {
					if (previ != 0) r += 1.0 / (h*h) * V[Ind_v(previ, j)];
					if (nexti != n && (nexti != n / 2 || j < m / 2)) r += 1.0 / (h*h) * V[Ind_v(nexti, j)];
					if (prevj != 0) r += 1.0 / (k*k) * V[Ind_v(i, prevj)];
					if (nextj != m && (nextj != m / 2 || i < n / 2)) r += 1.0 / (k*k) * V[Ind_v(i, nextj)];
					rs[Ind_v(i, j)] = Right[Ind_v(i, j)] - r;
				}
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				if (i < n / 2 || j < m / 2) {
					tempV = V[Ind_v(i, j)];
					/*addent = 0;
					previ = i - 1;
					nexti = i + 1;
					prevj = j - 1;
					nextj = j + 1;
					if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
					if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
					if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
					if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];*/
					V[Ind_v(i, j)] = tempV - Tau * rs[Ind_v(i, j)];
					norma = fabs(V[Ind_v(i, j)] - tempV);
					if (norma > max_norma) max_norma = norma;
				}
			}
		accuracy = max_norma;
	}
	return accuracy;
}

double Dirichlet_Main_2::Simple_iteration_eps(double eps, int &spent)
{
	std::vector<double> rs((n - 1)*(m - 1));
	//std::for_each(V.begin(), V.end(), [](double _n) {_n = 0.0; });
	//std::for_each(rs.begin(), rs.end(), [](double _n) {_n = 0.0; });
	for (int i = 0; i < (n - 1)*(m - 1); i++)
	{
		V[i] = 0;
		rs[i] = 0;
	}
	//double Tau = 0.04;
	//double addent = 0;
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
				r = A * V[Ind_v(i, j)];
				if (i < n / 2 || j < m / 2) {
					if (previ != 0) r += 1.0 / (h*h) * V[Ind_v(previ, j)];
					if (nexti != n && (nexti != n / 2 || j < m / 2)) r += 1.0 / (h*h) * V[Ind_v(nexti, j)];
					if (prevj != 0) r += 1.0 / (k*k) * V[Ind_v(i, prevj)];
					if (nextj != m && (nextj != m / 2 || i < n / 2)) r += 1.0 / (k*k) * V[Ind_v(i, nextj)];
					rs[Ind_v(i, j)] = Right[Ind_v(i, j)] - r;
				}
			}
		for (int j = 1; j < m; j++)
			for (int i = 1; i < n; i++)
			{
				if (i < n / 2 || j < m / 2) {
					tempV = V[Ind_v(i, j)];
					/*addent = 0;
					previ = i - 1;
					nexti = i + 1;
					prevj = j - 1;
					nextj = j + 1;
					if (previ != 0) addent += 1.0 / (h*h) * V[Ind_v(previ, j)];
					if (nexti != n) addent += 1.0 / (h*h) * V[Ind_v(nexti, j)];
					if (prevj != 0) addent += 1.0 / (k*k) * V[Ind_v(i, prevj)];
					if (nextj != m) addent += 1.0 / (k*k) * V[Ind_v(i, nextj)];*/
					V[Ind_v(i, j)] = tempV - Tau * rs[Ind_v(i, j)];
					norma = fabs(V[Ind_v(i, j)] - tempV);
					if (norma > max_norma) max_norma = norma;
				}
			}
		accuracy = max_norma;
	}
	return accuracy;
}