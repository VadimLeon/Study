#pragma once
#include"Function.h"



void RungeKutt4(int num, double &x, double &v, double h)
{
	double k1, k2, k3, k4;
	double x1, v1;
	x1 = x + h;
	k1 = function(num, x, v, h);
	k2 = function(num, (x + h / 2), (v + h * k1 / 2), h);
	k3 = function(num, (x + h / 2), (v + h * k2 / 2), h);
	k4 = function(num, (x + h), (v + h * k3), h);
	v1 = v + (h / 6)*(k1 + 2 * k2 + 2 * k3 + k4);
	x = x1;
	v = v1;
}

void RungeKutt4System (double &x, double &V1, double &V2, double h, double a)
{
	double k1, k2, k3, k4, q1, q2, q3, q4;
	double x1, v1;
	x1 = x + h;

	k1 = h * f(x, V1, V2, h, a);
	q1 = h * g(x, V1, V2, h, a);

	k2 = h * f(x + h / 2, V1 + q1 / 2, V2 + k1 / 2, h, a);
	q2 = h * g(x + h / 2, V1 + q1 / 2, V2 + k1 / 2, h, a);

	k3 = h * f(x + h / 2, V1 + q2 / 2, V2 + k2 / 2, h, a);
	q3 = h * g(x + h / 2, V1 + q2 / 2, V2 + k2 / 2, h, a);

	k4 = h * f(x + h, V1 + q3, V2 + k3, h, a);
	q4 = h * g(x + h, V1 + q3, V2 + k3, h, a);

	V2 = V2 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
	V1 = V1 + (q1 + 2 * q2 + 2 * q3 + q4) / 6;
	x = x1;
}

void HalfStepRungeKutt4(int num, double x, double &v, double h)
{
	double h1 = h / 2;
	double x1 = x, v1 = v;
	RungeKutt4(num, x1, v1, h1);
	//x1 = x + h1;
	RungeKutt4(num, x1, v1, h1);
	v = v1;
}