#pragma once
#include"Function.h"
#include"RK4.h"

void CheckLocalFault(int num, double x, double v,  double &h, double eps, int &C1, int &C2)
{
	double h1 = h / 2;
	double x1 = x, v1 = v, xStart = x, vStart = v, s;	
	RungeKutt4(num, x, v, h);
	RungeKutt4(num, x1, v1, h1);	
	RungeKutt4(num, x1, v1, h1);
	s = (v1 - v) / 15;	
	if (abs(s) > eps)
	{
		h = h / 2;
		CheckLocalFault(num, xStart, vStart, h, eps, C1, C2);
		C1++;
		//return;
	}
	else if ( abs(s) < (eps / 32) )
	{
		h = h * 2;
		//CheckLocalFault(num, x, v1, h, eps, C1, C2);
		C2++;
		return;
	}
	return;
}

void CheckLocalFaultSystem(double x, double V1, double V2, double &h, double a, double eps, int &C1, int &C2)
{
	double h1 = h / 2;
	double x1 = x, v1 = V1, v2 = V2, xStart = x, v1Start = V1, v2Start = V2, s;
	RungeKutt4System(x, V1, V2, h, a);
	RungeKutt4System(x, v1, v2, h1, a);
	RungeKutt4System(x, v1, v2, h1, a);
	s = sqrt((V1 - v1)*(V1 - v1) / 15 / 15 + (V2 - v2)*(V2 - v2) / 15 / 15);
	/*RungeKutt4(num, x, v, h);
	RungeKutt4(num, x1, v1, h1);	
	RungeKutt4(num, x1, v1, h1);
	s = (v1 - v) / 15;	*/
	if (s > eps)
	{
		h = h / 2;
		CheckLocalFaultSystem(x, v1Start, v2Start, h, a, eps, C1, C2);
	//	CheckLocalFault(num, xStart, vStart, h, eps, C1, C2);
		C1++;
		//return;
	}
	else if (abs(s) < (eps / 32))
	{
		h = h * 2;
		//CheckLocalFault(num, x, v1, h, eps, C1, C2);
		C2++;
		return;
	}
	return;
}

