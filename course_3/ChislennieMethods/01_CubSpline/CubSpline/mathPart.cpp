#include "mathPart.h"
#include <cmath>


double baseTask::sXi(int i, double x)
{
	return aCoef[i] + bCoef[i] * (x - xGrid[i]) + (cCoef[i] / 2.0) * (x - xGrid[i])*(x - xGrid[i]) +
		+(dCoef[i] / 6.0) * (x - xGrid[i])*(x - xGrid[i])*(x - xGrid[i]);
}

void baseTask::initCoefA()
{
	for (int i = 0; i < N + 1; i++)
		aCoef[i] = yGrid[i];
}

void baseTask::initCoefC()
{
	std::vector<double> D1(N + 1);
	std::vector<double> D2(N + 1);
	std::vector<double> D3(N + 1);
	std::vector<double> B(N + 1);

	D1[0] = D1[N] = 0;
	D2[0] = D2[N] = 1;
	D3[0] = D3[N] = 0;
	B[0] = Mu1;
	B[N] = Mu2;

	for (int i = 1; i < N; i++)
	{
		D1[i] = h;
		D2[i] = 4 * h;
		D3[i] = h;
		B[i] = 6 * ((yGrid[i + 1] - yGrid[i]) / h - (yGrid[i] - yGrid[i - 1]) / h);
	}

	cCoef = RunningMethod(D1, D2, D3, B, N);

}

std::vector<double> baseTask::RunningMethod(std::vector<double> D1, std::vector<double> D2, std::vector<double> D3, std::vector<double> B, int size)
{
	std::vector<double> V(size + 1);
	std::vector<double> alfa(size + 1);
	std::vector<double> beta(size + 1);
	alfa[1] = 0;
	beta[1] = Mu1;
	V[0] = Mu1;
	V[size] = Mu2;

	for (int i = 2; i < size + 1; i++)
	{
		alfa[i] = D3[i - 1] / (-D2[i - 1] - alfa[i - 1] * D1[i - 1]);
		beta[i] = (-B[i - 1] + beta[i - 1] * D1[i - 1]) / (-D2[i - 1] - alfa[i - 1] * D1[i - 1]);
	}

	for (int i = size - 1; i > 0; i--)
	{
		V[i] = alfa[i + 1] * V[i + 1] + beta[i + 1];
	}


	return V;
}

void baseTask::initCoefB()
{

	for (int i = 0; i < N; i++)
	{
		bCoef[i + 1] = (yGrid[i + 1] - yGrid[i]) / h + cCoef[i + 1] * h / 3.0 + cCoef[i] * h / 6.0;
	}
}

void baseTask::initCoefD()
{
	for (int i = 0; i < N; i++)
	{
		dCoef[i + 1] = (cCoef[i + 1] - cCoef[i]) / h;
	}
}

void baseTask::initCoefs(int choise)
{

	if (choise == 1)
	{
		Mu1 = -(5.0 / 4.0)*sin(1.0) + cos(1.0);
		Mu2 = -1.0 / sqrt(M_PI);
	}
	else if (choise == 2)
	{
		Mu1 = cos(1.0) - (5.0 / 4.0)*(sin(1.0) + 80.0*cos(10.0));
		Mu2 = -100 - 1.0 / sqrt(M_PI);
	}
	else if (choise == 3)
	{
		Mu1 = -5.0 * sin(1) / 4.0 + cos(1.0) - 10000.0*cos(100.0);
		Mu2 = -10000 - 1.0 / sqrt(M_PI);
	}

	initCoefA();
	initCoefC();
	initCoefB();
	initCoefD();
}

double baseTask::sXiDerivative1(int i, double x)
{
	return (bCoef[i] + cCoef[i] * (x - xGrid[i]) + dCoef[i] * (x - xGrid[i])*(x - xGrid[i]) / 2.0);
}

double baseTask::sXiDerivative2(int i, double x)
{
	return (cCoef[i] + dCoef[i] * (x - xGrid[i]));
}

//////////////////////////////////////test////////////////////////////////////////
testTask::testTask(int _N)
{
	N = _N;

	xGrid.resize(N + 1);
	yGrid.resize(N + 1);

	a = -1;
	b = 1;

	Mu1 = Mu2 = 0;

	h = (double)(b - a) / N;

	for (int i = 0; i < N; i++)
	{
		xGrid[i] = a + i * h;
		yGrid[i] = function(a + i * h);
	}
	xGrid[N] = b;
	yGrid[N] = function(b);

	aCoef.resize(N + 1);
	bCoef.resize(N + 1);
	cCoef.resize(N + 1);
	dCoef.resize(N + 1);

}

double testTask::function(double x) const
{
	if (x >= -1 && x <= 0)
		return (x*x*x + 3.0*x*x);
	else
		return (-x * x*x + 3.0*x*x);
}

double testTask::functionDerivative1(double x) const
{
	if (x >= -1 && x <= 0)
		return 3.0 * x * x + 6 * x;
	else
		return -3.0 * x * x + 6 * x;
}

double testTask::functionDerivative2(double x) const
{
	if (x >= -1 && x <= 0)
		return 6.0 * x + 6;
	else
		return -6.0 * x + 6;
}

//////////////////////////////////////////MAIN 1//////////////////////////////////

main1Task::main1Task(int _N)
{
	N = _N;
	xGrid.resize(N + 1);
	yGrid.resize(N + 1);
	a = 1;
	b = M_PI;
	Mu1 = Mu2 = 0;
	h = (double)(b - a) / N;
	for (int i = 0; i < N; i++)
	{
		xGrid[i] = a + i * h;
		yGrid[i] = function(a + i * h);
	}
	xGrid[N] = b;
	yGrid[N] = function(b);

	aCoef.resize(N + 1);
	bCoef.resize(N + 1);
	cCoef.resize(N + 1);
	dCoef.resize(N + 1);

}

double main1Task::function(double x) const
{
	return sqrt(x)* sin(x);
}


double main1Task::functionDerivative1(double x) const
{
	return 0.5*sin(x) / sqrt(x) + sqrt(x)*cos(x);
}


double main1Task::functionDerivative2(double x) const
{
	return -0.25*sin(x) / sqrt(x*x*x) + cos(x) / sqrt(x) - sqrt(x)*sin(x);
}


//////////////////////////////////////////MAIN 2//////////////////////////////////

main2Task::main2Task(int _N)
{
	N = _N;
	xGrid.resize(N + 1);
	yGrid.resize(N + 1);
	a = 1;
	b = M_PI;
	Mu1 = Mu2 = 0;
	h = (double)(b - a) / N;
	for (int i = 0; i < N; i++)
	{
		xGrid[i] = a + i * h;
		yGrid[i] = function(a + i * h);
	}
	xGrid[N] = b;
	yGrid[N] = function(b);

	aCoef.resize(N + 1);
	bCoef.resize(N + 1);
	cCoef.resize(N + 1);
	dCoef.resize(N + 1);

}

double main2Task::function(double x) const
{
	return sqrt(x)* sin(x) + cos(10 * x);
}

double main2Task::functionDerivative1(double x) const
{
	return  0.5*sin(x) / sqrt(x) + sqrt(x)*cos(x) - 10 * sin(10 * x);
}

double main2Task::functionDerivative2(double x) const
{
	return -0.25*sin(x) / sqrt(x*x*x) + cos(x) / sqrt(x) - sqrt(x)*sin(x) - 100 * cos(10 * x);
}

//////////////////////////////////////////MAIN 3//////////////////////////////////

main3Task::main3Task(int _N)
{
	N = _N;
	xGrid.resize(N + 1);
	yGrid.resize(N + 1);
	a = 1;
	b = M_PI;
	Mu1 = Mu2 = 0;
	h = (double)(b - a) / N;
	for (int i = 0; i < N; i++)
	{
		xGrid[i] = a + i * h;
		yGrid[i] = function(a + i * h);
	}
	xGrid[N] = b;
	yGrid[N] = function(b);

	aCoef.resize(N + 1);
	bCoef.resize(N + 1);
	cCoef.resize(N + 1);
	dCoef.resize(N + 1);

}

double main3Task::function(double x) const
{
	return  sqrt(x)* sin(x) + cos(100 * x);
}

double main3Task::functionDerivative1(double x) const
{
	return 0.5*sin(x) / sqrt(x) + sqrt(x)*cos(x) - 100 * sin(100 * x);
}

double main3Task::functionDerivative2(double x) const
{
	return -0.25*sin(x) / sqrt(x*x*x) + cos(x) / sqrt(x) - sqrt(x)*sin(x) - 10000 * cos(100 * x);
}
