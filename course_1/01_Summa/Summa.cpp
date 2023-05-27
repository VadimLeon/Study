// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;	//использование стандартного пространства имён

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 0;
	int *Arr;
	int Sum = 0;

	setlocale(LC_ALL, "Rus");
	cout << "Введи количество элементов" << endl;
	cin >> N;

	Arr = new int[N];

	cout << "Введи массив" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		Sum += Arr[i];
	}

	cout << "Сумма = " << Sum << endl;

	system("pause");	//фунуция библиотеки iostream, для задержки завершения програмы
	return 0;
}