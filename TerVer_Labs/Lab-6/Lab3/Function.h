#pragma once
#include<math.h>


double function(int num, double x, double v, double h)
{
	switch (num)
	{
	case 1:
	{
		return(3 * v);
	}
	case 2:
	{
		return((1 / (2 * x + x * x)) * v * v + v - v * v * v * sin(10 * x));
	}
	case 3:
	{
		
	}
	default:
		break;
	}
}

double f(double x, double V1, double V2, double h, double a)
{
	return (a * sqrt( V1 * V1 + 1));

}

double g(double x, double V1, double V2, double h, double a)
{
	return V2;
}