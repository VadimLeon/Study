// OneIsOne.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"
#include "string.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const string Last = ".!?";
	string *Line, *Tk;
	int m, N, k;
	setlocale(LC_ALL, "Rus");

	do
	{
	cout << "����� ����� ����� � ������" << endl;
	cin >> N;
	}
	while(N <= 0);

	Tk = new string[N];
	Line = new string[3 * N];

	cin.ignore();
	cout << "����� �������� �����" << endl;
	for(int i = 0; i < N; i++)
		{getline(cin, Tk[i]);}

	m = 0;
	Line[m] = "";
	for (int i = 0; i < N; i++)
	{
		Tk[i] = Tk[i] + " ";
		k = Tk[i].length();
		for (int j = 0; j < k; j++)
		{
			Line[m] = Line[m] + Tk[i][j];
			int c = Last.find(Tk[i][j]);
			if ((c >= 0) && (c < 3))
				{Line[++m] = "";}
		}
	}

	cout << "����� �����" << endl;
	for (int i = 0; i < m; i++)
		{cout << Line[i] << endl;}

	system("pause");
	return 0;
}