// Minimum.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int *Arr, L = 0, N = 0;

	setlocale(LC_ALL, "Rus");
	cout << "Введи количество элементов" << endl;
	cin >> N;

	Arr = new int[N];

	cout << "Введи элементы" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}

	int Min = Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < Min)
		{
			Min = Arr[i];
			L = i;
		}
	}

	cout << "Минимальный элемент = " << Min << endl;
	cout << "Под № " << ++L << endl;

	system("pause");
	return 0;
}