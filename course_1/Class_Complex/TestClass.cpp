// TestClass.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "string"
#include "complex.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	complex A;
	complex B(-8, -2);

	A = B;
	complex C(B), E(1, -1);

	cout << "�����\tA" << endl;
	cout << "�������������� �����\t" << A.getRe() << endl;
	cout << "������ �����        \t" << A.getIm() << endl << endl;

	cout << "�����\tB" << endl;
	cout << "�������������� �����\t" << B.getRe() << endl;
	cout << "������ �����        \t" << B.getIm() << endl << endl;

	cout << "�����\tC" << endl;
	cout << "�������������� �����\t" << C.getRe() << endl;
	cout << "������ �����        \t" << C.getIm() << endl << endl;

	///�������� ���������� ��������
	cout << "�����\tE" << endl;
	cout << "�������������� �����\t" << E.getRe() << endl;
	cout << "������ �����        \t" << E.getIm() << endl << endl;

	cout << "A - E =  " << A - E << endl;
	cout << "B + E =  " << B + E << endl;
	cout << "C * E =  " << C * E << endl;
	cout << "C / E =  " << C / E << endl;
	cout << "E * 3 =  " << E * 3 << endl;	

	///�������� ���������� �������� �����/������
	int N = 6;
	for(int i = 0; i < N; i++)
	{
		complex D;
		cout << "����� ����������� ����� \" D \"" << endl;
		cin >> D;
		cout << "\nA =  " << A << endl;
		cout << "B =  " << B << endl;
		cout << "C =  " << C << endl;
		cout << "D =  " << D << "\n\n" << endl;

		cout << "A + D =\t\t" << A + D << endl;
		cout << "A - D =\t\t" << A - D << endl;

		C = D * B;
		cout << "D * B =\t\t" << C << endl;

		C = C / D;
		cout << "(D * B) / D =\t" << C << endl << endl;
	}

	system("pause");
	return 0;
}

