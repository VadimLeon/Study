// LinariPos.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "����� ���������� ������" << endl;
		cin >> N;
	}
	while (N <= 0);

	Name = new string[N];

	cout << "����� ������" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> Name[i];
	}
	cout << "����� ������� ��������" << endl;
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

	cout << "����� �������� = " << L << endl;

	system("pause");
	return 0;
}