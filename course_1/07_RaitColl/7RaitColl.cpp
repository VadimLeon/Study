// Algor_7.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string *Name, *Sp;
	int N, k, L, j, *Reit;
	setlocale(LC_ALL, "Rus");

	do
	{
		cout << "¬веди длинну списка" << endl;
		cin >> N;
	}
	while(N <= 0);

	Name = new string[N];

	for(int i = 0; i < N; i++)
	{
		cout << "¬веди название" << endl;
		cin >> Name[i];
	}

	Sp = new string[2 * N];
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
			Reit[k++] = 1;
		}
		else
		{
			Reit[L] = Reit[L] + 1;
		}
	}

	cout << "—писок без повторений с рейтингами" << endl;
	for(int i = 0; i < k; i++)
		cout << Sp[i] << "\t\t" << Reit[i] << endl;
	
	system("pause");
	return 0;
}
