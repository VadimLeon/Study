// Algor_6.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string *Name, *Sp;
	int N, k, L, j, *Ch;
	setlocale(LC_ALL, "Rus");

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
		cout << "¬веди название" << endl;
		cin >> Name[i];
	}

	Sp = new string[N + 1];
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
			Sp[k++] = Name[i];
	}

	cout << "—писок без повторений:" << endl;
	for(int i = 0; i < k; i++)
		cout << Sp[i] << endl;
	
	system("pause");
	return 0;
}
