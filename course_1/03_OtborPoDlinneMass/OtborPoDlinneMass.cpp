// OtborPoDlinneMass.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string *Name, *Best;
	int N, k = 0, L;

	do
	{
		setlocale(LC_ALL, "Rus");
		cout << "����� ���������� ������" << endl;
		cin >> N;
	}
	while (N <= 0);

	Name = new string[N];
	Best = new string[N];

	cout << "����� ������" << endl;
	for (int i = 0; i < N; i++)
		cin >> Name[i];
	for (int i = 0; i < N; i++)
	{
		L = Name[i].length();
		if(L < 6)
		{
			Best[k++] = Name[i];
		}
	}

	cout << "������ ������ 6 ��������" << endl;
	for (int i = 0; i < k; i++)
		cout << Best[i] << endl;

	system("pause");
	return 0;
}

