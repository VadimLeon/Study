// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"

using namespace std;	//������������� ������������ ������������ ���

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 0;
	int *Arr;
	int Sum = 0;

	setlocale(LC_ALL, "Rus");
	cout << "����� ���������� ���������" << endl;
	cin >> N;

	Arr = new int[N];

	cout << "����� ������" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		Sum += Arr[i];
	}

	cout << "����� = " << Sum << endl;

	system("pause");	//������� ���������� iostream, ��� �������� ���������� ��������
	return 0;
}