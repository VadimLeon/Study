// BinareSerch.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"
#include <cmath>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int beg, en, midle, L, N;
	string *Name, Ctrl;

	cout << "����� ���������� ������" << endl;
	cin >> N;

	Name = new string[N + 2];

	cout << "����� ������������� ������" << endl;
	for(int i = 0; i < N; i++)
		cin >> Name[i];
	cout << "����� �������� ��������" << endl;
	cin >> Ctrl;

	beg = 0;
	en = N;
	L = -1;
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

	cout << "����� �������� = " << L << endl;
	
	system("pause");
	return 0;
}