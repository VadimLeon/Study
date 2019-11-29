#pragma once
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <vector>
#include <cmath>
using namespace std;

double g(double y, double l, double a)//подсчёт обратной функции
{
	return ((-log(1 - y) / l) + a);
}


vector <double> rando_gen(int n)//генерирует вектор из n случайных чисел от 0 до 1 
{
	vector <double> res;
	int i = 0;

	while (i < n)
	{
		double r = 1.0 * rand() / RAND_MAX;
		if (r != 0 && r != 1)
		{
			res.push_back(r);
			++i;
		}
	}

	return res;
}


double calculate_lambda(double d)//считаем параметр лямбда через дисперсию
{
	return 1.0 / sqrt(d);
}


double calculate_a(double l, double m)//считаем сдвиг через мат ожидание и лямбда
{
	return m - 1/l;
}


double get_random_value(vector <double>& random_values, double l, int N, double a)//получаем вектор случайных величин соответсвующий параметрам
{
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		double s;
		s = (g(random_values[i], l, a));
		sum += g(random_values[i], l, a);
	}
	return sum;
}


void swap(pair<int, double> & arg1, pair <int, double> & arg2)//чтоб сортировать штучки
{
	pair<int, double> temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}


void bubble_sort(vector < std::pair<int, double> > & vArray)//сортируем штучки
{
	for (int i = 0; i < vArray.size(); ++i)
	{
		for (int j = vArray.size() - 1; j > i; --j)
		{
			if (vArray[i].second > vArray[j].second)
			{
				swap(vArray[i], vArray[j]);
			}
		}
	}
}

void calculate_things(double &X, double & S, double & R, double & Me,const vector < std::pair<int, double> > & etha,double N,double num)
{
	X = 0;
	S = 0;
	R = 0;
	Me = 0;
	double n = num;
	//Сalculating X
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += etha[i].second;
	X = sum / n;
	//Calculating S
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += pow((etha[i].second - X),2);
	S = sum / n;
	//Calculating R
	R = etha[n-1].second - etha[0].second;
	//Calculating Me
	int k = 0;
	if (((int)n % 2) == 1)
	{
		k = (n - 1) / 2;
		Me = etha[k + 1].second;
	
	}
	else
	{
		k = n / 2;
		Me = (etha[k].second + etha[k + 1].second) / 2;
	}
}

double func_rasp(double x,double l,double a)// x - значение случайной величины l - лямбда a - сдвиг
{//для N >>1 нужна нормальная
	return 1.0-(1.0/exp(l*(x-a)));
}
double func_rasp_norm(double x,double m,double d)//m - мат ожидание d - дисперсия
{
	//return 0.5 * (1.0 + erf((x - m) / sqrt(2.0 * d)));
	return 0.5 * (1.0 + erf((x - m) / sqrt(2.0 * d)));
}

double func_plotnost_exp(double x, double l, double a)
{
	return l * exp((-l) * (x - a));
}
double func_plotnost_norm(double x, double m, double d,double N)
{
	return 1.0/(sqrt(N*d)*sqrt(2*3.14)) * exp( -(x - N*m)/sqrt(2*N*d));
}

