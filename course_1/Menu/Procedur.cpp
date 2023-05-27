#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "string"
#include "conio.h"
#include "windows.h"
using namespace std;

int MenuF(string *NamePunct, int Np)
{
	int Number = 0;
	char Cod;

	//Получаение дескриптора устройства стандартного вывода
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// F - цвет фона; 0 - цвет текста
	system("color F0");
	do
	{
		system("cls");
		for(int i = 0; i < Np; i++)
		{
			if(i == Number)
			{
				SetConsoleTextAttribute(hConsole, (WORD) ((10 << 4) | 0));
				cout << NamePunct[i] << endl;
				SetConsoleTextAttribute(hConsole, (WORD) ((15 << 4) | 0));
			}
			else
				cout << NamePunct[i] << endl;
		}

		Cod = _getch();
		if(Cod == 224)
			Cod = _getch();
		if(Cod == 72)
		{
			Number = Number -1;
			if(Number == -1)
				Number = Np - 1;
		}
		if(Cod == 80)
		{
			Number = Number + 1;
			if(Number == Np)
				Number = 0;
		}
	}
	while(Cod != 13);
	system("cls");
	return Number;
}
/// Описание процедур !!!

int Summa(int *Arr, int N)
{
	int Sum = 0;

	for (int i = 0; i < N; i++)
		Sum += Arr[i];
	return Sum;
}

void Minimum(int *A, int N, int &Min, int &L)
{
	L = 0;
	Min = A[0];
	for (int i = 0; i < N; i++)
	{
		if (A[i] < Min)
		{
			Min = A[i];
			L = i;
		}
	}
}

void MasMid(string *Name, int N, string *Best, int &k)
{
	int L = 0;
	k = 0;
	for (int i = 0; i < N; i++)
	{
		L = Name[i].length();
		if(L < 6)
		{
			Best[k++] = Name[i];
		}
	}
}

int LinPos(string *Name, string Ctrl, int N)
{
	int i = 0;
	int L = -1;
	while ((-1 == L) && (i < N))
	{
		if(Name[i] == Ctrl)
		{
			L = i;
		}
		i++;
	}
	return L;
}

int BinarPos(string *Name, string Ctrl, int N)
{
	int beg = 0, en, midle, L = -1;

	en = N;
	while((L == -1) && (beg <= en))
	{
		midle = ((en + beg) / 2);
		if (Name[midle] == Ctrl)
			L = midle;
		if(Name[midle] > Ctrl)
			en = midle - 1;
		if(Name[midle] < Ctrl)
			beg = midle + 1;
	}
	return L;
}

void BestMass(string *Name, string *Sp, int N, int &k)
{
	k = 0;
	for(int i = 0; i < N; i++)
	{
		int L = -1;
		int j = 0;

		while((-1 == L) && (j < k))
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
}

void MassReit(string *Name, string *Sp, int *Reit, int N, int &k)
{
	k = 0;
	for(int i = 0; i < N; i++)
	{
		int L = -1;
		int j = 0;

		while((-1 == L) && (j < k))
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
}

void MasHarSum(string *Name, string *Sp, int *SumM, int N, int &k, int *Ch)
{
	k = 0;
	for(int i = 0; i < N; i++)
	{
		int L = -1;
		int j = 0;

		while((-1 == L) && (j < k))
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
			SumM[k++] = Ch[i];
		}
		else
		{
			SumM[L] = SumM[L] + Ch[i];
		}
	}
}

void MasToSlova(string &T, string *W, int &k)
{
	k = 0;
	while (T.length() > 0)
	{
		int L = T.find(" ");

		if (L > 0)
		{
			W[k++] = T.substr(0, L);
		}
		T.erase(0, ++L);
	}
}

void MasSoZnak(string &St, string Znak, string *W, int &k)
{
	int Cn = St.length();
	int m = Znak.length();
	k = 0;

	for (int i = 0; i < Cn; i++)
	{
		int L = Znak.find(St[i]);

		if ((L > m) || (L < 0))
			W[k] = W[k] + St[i];
		else
			if (St[i] == Znak[0])
			{
				if (W[k] != "")
					W[++k] = "";
			}
			else
			{
				if (W[k] != "")
					k++;

				W[k] = St[i];
				W[++k] = "";
			}
	}
}

void OneIsMas(int &m, int N, string Last, string *Line, string *Tk)
{
	string Probel = " ";

	m = 0;
	Line[m] = "";
	for (int i = 0; i < N; i++)
	{
		Tk[i] = Tk[i] + " ";
		int k = Tk[i].length();
		for (int j = 0; j < k; j++)
		{
			Line[m] = Line[m] + Tk[i][j];
			int c = Last.find(Tk[i][j]);
			if ((c >= 0) && (c < 3))
				if (Tk[i][j + 1] == Probel[0])
				{
					Line[++m] = "";
					++j;
				}
				else
					Line[++m] = "";
		}
	}
}