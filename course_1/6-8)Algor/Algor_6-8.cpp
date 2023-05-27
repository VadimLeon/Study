// Algor_6-8.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	string *Name, *Sp;
	int N, k, L, j, *Sum, *Reit, *Ch;
	do
	{
		cout << "¬веди длинну списка" << endl;
		cin >> N;
	}
	while(N <= 0);

	Name = new string[N];
	Ch = new int[10];

	for(int i = 0; i < N; i++)
	{
		cout << "¬веди название и характеристику" << endl;
		cin >> Name[i] >> Ch[i];
	}

	Sp = new string[2 * N];
	Sum = new int[35];
	Reit = new int[20];
	k = 0;

	for(int i = 0; i < N; i++)
	{
		L = -1;
		j = 0;
		while((L == -1) && (j <= k))
		{
			if(Name[i] == Sp[j])
			{
				L = j;
			}
			j++;
		}
		if(-1 == L)
		{
			Sp[k] = Name[i];
			Reit[k] = 1;
			Sum [k++] = Ch[i];
		}
		else
		{
			Reit[L] = Reit[L] + 1;
			Sum[L] = Sum[L] + Ch[i];
		}
	}

	cout << "—писок без повторений с рейтингами и характеристикой" << endl;
	for(int i = 0; i < k; i++)
		cout << " " << Sp[i] << "\t\t" << Reit[i] << "\t\t" << Sum[i] << endl;

	system("pause");
	return 0;
}

