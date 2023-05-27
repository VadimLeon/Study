// TESTAxpess.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "MyClasses.h"
#include <iostream>

#define TypeZapis int
#define TypeMyStack int
#define TypeMTablice int

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	system("color F0");
	setlocale(LC_ALL, "RUS");


	///Stack
	{
		cout << "\n\r���� ������ Stack" << endl << endl;
		int N;
	//
		cout << "����� ������ �����" << endl;
		cin >> N;
	//
		MySteak<TypeMyStack> A(N), C;
		cout << "����� ������� (int), ������� ����� ��������� � ����  " << N << "  ���" << endl;
		for(int i = 0; i < N; i++)
		{
			int Ilement;
			cin >> Ilement;
			A.push(Ilement);
		}
	//
		cout << "\n\n\r�������� �����\t���������� ��������� � �����\n\r" << A.pop() << "\t" << A.isEmpty() << endl << endl;
	//
		cout << "����������� �����������\t �(�)" << endl;
		MySteak<TypeMyStack> B(A);
		cout << "�������� �����\t���������� ��������� � �����\n\r" << B.pop() << "\t" << B.isEmpty() << endl << endl;
		
		cout << "�������� ������������\t C = A" << endl;
		C = A;
		cout << "�������� �����\t���������� ��������� � �����\n\r" << C.pop() << "\t" << C.isEmpty() << endl << endl;
	//
		int n;
		do
		{
			cout << "������� ��������� ������ �� �����? ( ������ < " << N << " ��������� )" << endl;
			cin >> n;
		}
		while(n >= N && n < 0);
	
		for(int i = 0; i < n; i++)
		{
			cout << "\n\r�������, ������� ��������� �� �����\t" << A.top() << endl;
		}
		cout << "\n\r�������� �����\t���������� ��������� � �����\n\r" << C.pop() << "\t" << C.isEmpty() << endl << endl;
	}

	///Tablice
	{
		cout << "\n\n\r���� ������ My_Tablice" << endl << endl;
	//
		cout << "����� ������ �������" << endl;
		int N;
		cin >> N;
	//
		MTablice<TypeMTablice> A(N), B;
	//
		cout << "\n\r�������� � ������� �������� (�� ���� \"���\" \"��������\") " << N << " ���" << endl;
		string str;
		int value;
		for(int i = 0; i < N; i++) { cin >> str >> value; A.add(str,value);}
	//
		cout << "\n\r���������� ��������� � ������� = \t" << A.getCount() << endl;
		cout << "\n\r������� �:" << endl;
		cout << "���\t��������" << endl;
		for(int i = 0; i < A.getCount(); i++) { cout << A[i].GetName() << "\t" << A[i].GetValue() << endl; }
	//
		cout << "\n\r�������� ������������ � = �" << endl;
		B = A;
	//
		cout << "\n\r������� B:" << endl;
		cout << "���\t��������" << endl;
		for(int i = 0; i < B.getCount(); i++) { cout << B[i].GetName() << "\t" << B[i].GetValue() << endl; }
	//
		int n;
		do
		{
			cout << "\n\r�����, ������� ����� ������� �� ������� ( < " << N << " ����" << endl;
			cin >> n;
		}
		while(n < 0 && n >= N);
	//
		cout << "����� ( " << n << " ��� )" << ", ����� ������ ������� �� ������� "<< endl;
		for(int i = 0; i < n; i++) { A.del(str); }
	//
		cout << "\n\r���������� ��������� � ������� = \t" << A.getCount() << endl;
		cout << "\n\r������� �:" << endl;
		cout << "���\t��������" << endl;
		for(int i = 0; i < A.getCount(); i++) { cout << A[i].GetName() << "\t" << A[i].GetValue() << endl; }
	//
		cout << "\n\r����������� ����������� �(�)" << endl;
		MTablice<TypeMTablice> C(A);
	//
		cout << "\n\r������� �:" << endl;
		cout << "���\t��������" << endl;
		for(int i = 0; i < C.getCount(); i++) { cout << C[i].GetName() << "\t" << C[i].GetValue() << endl; }
	}

	///Poliz
	{
		cout << "\n\n\r���� ������ Poliz" << endl << endl;
	//	
		cout << "����� �������������� ��������� ( ��� �������� !!! )\n\r\t";
		string str;
		cin >> str;
		Pol A(str), B;
		cout << "Poliz:\t" << A.getPoliz() << "\n\rCount:\t" << A.getCount() << endl << endl;
	//
		cout << "������� ����������:\n\r���\t��������" << endl;
	//
		for(int i = 0; i < A.getCount(); i++)
		{
			cout << A.getTablVar()[i].GetName() << "\t" << A.getTablVar()[i].GetValue() << endl;
		}
	//
		cout << "\n\r�������� ������������ B = A" << endl << endl;
		B = A;
		cout << "���������:\t" << str << "\n\rPoliz:\t" << B.getPoliz() << "\n\rCount:\t" << B.getCount() << endl << endl;
	//
		cout << "������� ����������:\n\r���\t��������" << endl;
	//
		for(int i = 0; i < B.getCount(); i++)
		{
			cout << B.getTablVar()[i].GetName() << "\t" << B.getTablVar()[i].GetValue() << endl;
		}
	//
		cout << "\n\r����������� ����������� C(A)" << endl << endl;
		Pol C(A);
		cout << "���������:\t" << str << "\n\rPoliz:\t" << C.getPoliz() << "\n\rCount:\t" << C.getCount() << endl << endl;
	//
		cout << "������� ����������:\n\r���\t��������" << endl;
	//
		for(int i = 0; i < C.getCount(); i++)
		{
			cout << C.getTablVar()[i].GetName() << "\t" << C.getTablVar()[i].GetValue() << endl;
		}
	//
	}

	system("pause");
	return 0;
}

