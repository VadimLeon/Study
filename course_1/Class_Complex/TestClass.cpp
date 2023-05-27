// TestClass.cpp: определяет точку входа для консольного приложения.
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

	cout << "Число\tA" << endl;
	cout << "Действительная часть\t" << A.getRe() << endl;
	cout << "Мнимая часть        \t" << A.getIm() << endl << endl;

	cout << "Число\tB" << endl;
	cout << "Действительная часть\t" << B.getRe() << endl;
	cout << "Мнимая часть        \t" << B.getIm() << endl << endl;

	cout << "Число\tC" << endl;
	cout << "Действительная часть\t" << C.getRe() << endl;
	cout << "Мнимая часть        \t" << C.getIm() << endl << endl;

	///Проверка перегрузки операций
	cout << "Число\tE" << endl;
	cout << "Действительная часть\t" << E.getRe() << endl;
	cout << "Мнимая часть        \t" << E.getIm() << endl << endl;

	cout << "A - E =  " << A - E << endl;
	cout << "B + E =  " << B + E << endl;
	cout << "C * E =  " << C * E << endl;
	cout << "C / E =  " << C / E << endl;
	cout << "E * 3 =  " << E * 3 << endl;	

	///Проверка перегрузки операций Ввода/Вывода
	int N = 6;
	for(int i = 0; i < N; i++)
	{
		complex D;
		cout << "Введи комплексное число \" D \"" << endl;
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

