// TESTAxpess.cpp: определяет точку входа для консольного приложения.
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
		cout << "\n\rТест класса Stack" << endl << endl;
		int N;
	//
		cout << "Введи размер стека" << endl;
		cin >> N;
	//
		MySteak<TypeMyStack> A(N), C;
		cout << "Введи элемент (int), который нужно поместить в стек  " << N << "  раз" << endl;
		for(int i = 0; i < N; i++)
		{
			int Ilement;
			cin >> Ilement;
			A.push(Ilement);
		}
	//
		cout << "\n\n\rВерхушка стека\tКоличество элементов в стеке\n\r" << A.pop() << "\t" << A.isEmpty() << endl << endl;
	//
		cout << "Конструктор копирования\t В(А)" << endl;
		MySteak<TypeMyStack> B(A);
		cout << "Верхушка стека\tКоличество элементов в стеке\n\r" << B.pop() << "\t" << B.isEmpty() << endl << endl;
		
		cout << "Операция присваивания\t C = A" << endl;
		C = A;
		cout << "Верхушка стека\tКоличество элементов в стеке\n\r" << C.pop() << "\t" << C.isEmpty() << endl << endl;
	//
		int n;
		do
		{
			cout << "Сколько элементов изъять из стека? ( ввести < " << N << " элементов )" << endl;
			cin >> n;
		}
		while(n >= N && n < 0);
	
		for(int i = 0; i < n; i++)
		{
			cout << "\n\rЭлемент, который изымается из стека\t" << A.top() << endl;
		}
		cout << "\n\rВерхушка стека\tКоличество элементов в стеке\n\r" << C.pop() << "\t" << C.isEmpty() << endl << endl;
	}

	///Tablice
	{
		cout << "\n\n\rТест класса My_Tablice" << endl << endl;
	//
		cout << "Введи размер таблицы" << endl;
		int N;
		cin >> N;
	//
		MTablice<TypeMTablice> A(N), B;
	//
		cout << "\n\rДобавить в таблицу элементы (по типу \"Имя\" \"Значение\") " << N << " раз" << endl;
		string str;
		int value;
		for(int i = 0; i < N; i++) { cin >> str >> value; A.add(str,value);}
	//
		cout << "\n\rКоличество элементов в таблице = \t" << A.getCount() << endl;
		cout << "\n\rТаблица А:" << endl;
		cout << "Имя\tЗначение" << endl;
		for(int i = 0; i < A.getCount(); i++) { cout << A[i].GetName() << "\t" << A[i].GetValue() << endl; }
	//
		cout << "\n\rОперация присваивания В = А" << endl;
		B = A;
	//
		cout << "\n\rТаблица B:" << endl;
		cout << "Имя\tЗначение" << endl;
		for(int i = 0; i < B.getCount(); i++) { cout << B[i].GetName() << "\t" << B[i].GetValue() << endl; }
	//
		int n;
		do
		{
			cout << "\n\rВведи, сколько строк удалить из таблицы ( < " << N << " штук" << endl;
			cin >> n;
		}
		while(n < 0 && n >= N);
	//
		cout << "Введи ( " << n << " раз )" << ", какую строку удалить из таблицы "<< endl;
		for(int i = 0; i < n; i++) { A.del(str); }
	//
		cout << "\n\rКоличество элементов в таблице = \t" << A.getCount() << endl;
		cout << "\n\rТаблица А:" << endl;
		cout << "Имя\tЗначение" << endl;
		for(int i = 0; i < A.getCount(); i++) { cout << A[i].GetName() << "\t" << A[i].GetValue() << endl; }
	//
		cout << "\n\rКонструктор копирования С(А)" << endl;
		MTablice<TypeMTablice> C(A);
	//
		cout << "\n\rТаблица С:" << endl;
		cout << "Имя\tЗначение" << endl;
		for(int i = 0; i < C.getCount(); i++) { cout << C[i].GetName() << "\t" << C[i].GetValue() << endl; }
	}

	///Poliz
	{
		cout << "\n\n\rТест класса Poliz" << endl << endl;
	//	
		cout << "Введи арифметическое выражение ( без пробелов !!! )\n\r\t";
		string str;
		cin >> str;
		Pol A(str), B;
		cout << "Poliz:\t" << A.getPoliz() << "\n\rCount:\t" << A.getCount() << endl << endl;
	//
		cout << "Таблица переменных:\n\rИмя\tЗначение" << endl;
	//
		for(int i = 0; i < A.getCount(); i++)
		{
			cout << A.getTablVar()[i].GetName() << "\t" << A.getTablVar()[i].GetValue() << endl;
		}
	//
		cout << "\n\rОперация присваивания B = A" << endl << endl;
		B = A;
		cout << "Выражение:\t" << str << "\n\rPoliz:\t" << B.getPoliz() << "\n\rCount:\t" << B.getCount() << endl << endl;
	//
		cout << "Таблица переменных:\n\rИмя\tЗначение" << endl;
	//
		for(int i = 0; i < B.getCount(); i++)
		{
			cout << B.getTablVar()[i].GetName() << "\t" << B.getTablVar()[i].GetValue() << endl;
		}
	//
		cout << "\n\rКонструктор копирования C(A)" << endl << endl;
		Pol C(A);
		cout << "Выражение:\t" << str << "\n\rPoliz:\t" << C.getPoliz() << "\n\rCount:\t" << C.getCount() << endl << endl;
	//
		cout << "Таблица переменных:\n\rИмя\tЗначение" << endl;
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

