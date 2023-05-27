// LinariPos.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	string *Name, Ctrl;
	int N;

	do
	{
		cout << "Введи количество данных" << endl;
		cin >> N;
	}
	while (N <= 0);

	Name = new string[N];

	cout << "Введи данные" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> Name[i];
	}
	cout << "Введи искомое значение" << endl;
	cin >> Ctrl;
	int i = 0;
	int L = -1;
	while ((L == -1) && (i < N))
	{
		if(Name[i] == Ctrl)
			{
				L = i;
			}
		i++;
	}

	cout << "Номер значения = " << L << endl;

	system("pause");
	return 0;
}