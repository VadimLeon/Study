// MenuTest.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "string"
#include "conio.h"
#include "windows.h"

using namespace std;
#include "Procedur.h"
///		Функция рабочей программы
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	const string Zn = " ,.!?:;";
	const string Last = ".!?";
	int Sum, N, *Arr, *A;
	int L, Min;
	int k;
	string *Name, NamePunkt[12], *Best, T;
	string Ctrl;
	string *Sp;
	int *Ch;
	int *Reit, m;
	int *SumM = 0, Np = 12;
	string St, *W;
	string *Line, *Tk;
	string PuN = "Выбран пункт:\t";
	int answer;

	NamePunkt[0] = "Сумма чисел                         ";
	NamePunkt[1] = "Поиск минимума                      ";
	NamePunkt[2] = "Отбор по количеству элементов       ";
	NamePunkt[3] = "Линейный поиск элементов            ";
	NamePunkt[4] = "Бинарный поиск элементов            ";
	NamePunkt[5] = "Массив без повторений               ";
	NamePunkt[6] = "Массив с рейтингом                  ";
	NamePunkt[7] = "Массив с сумарной характеристикой   ";
	NamePunkt[8] = "Даление строки на слова             ";
	NamePunkt[9] = "Даление строки на слова со знаками  ";
	NamePunkt[10] = "Деления массива строк на предложения";
	NamePunkt[11] = "Выход                               ";


	do
	{
		answer = MenuF(NamePunkt, Np);
		switch (answer)
		{
		case 0:
			{
				cout << PuN << NamePunkt[0] << endl << endl;
				//	1 - Fanction
				N = 0;
				do
				{
					cout << "Введи количество элементов" << endl;
					cin >> N;
				}
				while (N <= 0);
				Arr = new int[N];
				cout << "\nВведи массив" << endl;
				for (int i = 0; i < N; i++)
					cin >> Arr[i];
				//	Вызов функции суммирования N чисел
				Sum = Summa(Arr, N);
				//	1 - Fanction вывод
				cout << "\nСумма = " << Sum << endl;
				system("pause");
				break;
			}

		case 1:
			{
				cout << PuN << NamePunkt[1] << endl << endl;
				//	2 - Procedure
				N = 0;
				do
				{
					cout << "Введи количество элементов" << endl;
					cin >> N;
				}
				while (N <= 0);
				A = new int[N];
				cout << "\nВведи элементы" << endl;
				for (int i = 0; i < N; i++)
					cin >> A[i];
				//	Вызов процедуры поиска минимального элемента
				Minimum(A, N, Min, L);
				//	2 - Procedure вывод
				cout << "\nМинимальный элемент = " << Min << endl;
				cout << "Под № " << ++L << endl;
				system("pause");
				break;
			}

		case 2:
			{
				cout << PuN << NamePunkt[2] << endl << endl;
				// 3 - Procedure
				N = 0;
				do
				{
					cout << "Введи количество данных" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N];
				Best = new string[N];
				cout << "\nВведи данные" << endl;
				for (int i = 0; i < N; i++)
					cin >> Name[i];
				//	Вызов процедуры для массива меньше 6 символов
				MasMid(Name, N, Best, k);
				//	3 - Procedure вывод
				cout << "\nСписок меньше 6 символов" << endl;
				for (int i = 0; i < k; i++)
					cout << Best[i] << endl;
				system("pause");
				break;
			}

		case 3:
			{
				cout << PuN << NamePunkt[3] << endl << endl;
				// 4 - Fanction
				N = 0;
				do
				{
					cout << "Введи количество данных" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N];
				cout << "\nВведи данные" << endl;
				for (int i = 0; i < N; i++)
					cin >> Name[i];
				cout << "\nВведи искомое значение" << endl;
				cin >> Ctrl;
				//	Вызов функции линейного поиска элемента с выводом только значения элемента
				L = LinPos(Name, Ctrl, N);
				//	4 - Fanction вывод
				cout << "\nНомер значения = " << L << endl;
				system("pause");
				break;
			}

		case 4:
			{
				cout << PuN << NamePunkt[4] << endl << endl;
				//	5 - Fanction 
				N = 0;
				do
				{
					cout << "Введи количество данных" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N + 2];
				cout << "\nВведи упорядоченные данные" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];
				cout << "\nВведи искомое значение" << endl;
				cin >> Ctrl;
				//	Вызов функции бинарного поиска с выводом тольно номера элемента
				L = BinarPos(Name, Ctrl, N);
				//	5 - Fanction вывод
				cout << "\nНомер элемента = " << L << endl;
				system("pause");
				break;
			}

		case 5:
			{
				cout << PuN << NamePunkt[5] << endl << endl;
				//	6 - Procedure
				N = 0;
				do
				{
					cout << "Введи длину списка" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				Ch = new int[10];
				cout << "\nВведи названия" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];

				Sp = new string[2 * N];
				//	Вызов процедуры массива без повторений
				BestMass(Name, Sp, N, k);
				//	6 - Procedure вывод
				cout << "\nСписок без повторений:" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << endl;
				system("pause");
				break;
			}

		case 6:
			{
				cout << PuN << NamePunkt[6] << endl << endl;
				//	7 - Procedure
				N = 0;
				do
				{
					cout << "Введи длину списка" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				cout << "\nВведи названия" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];
				Sp = new string[2 * N];
				Reit = new int[20];
				//	Вызов процедуры массива с рейтингом
				MassReit(Name, Sp, Reit, N, k);
				//	7 - Procedure вывод
				cout << "\nСписок без повторений с рейтингами" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << "\t\t" << Reit[i] << endl;
				system("pause");
				break;
			}

		case 7:
			{
				cout << PuN << NamePunkt[7] << endl << endl;
				//	8 - Procedure
				N = 0;
				do
				{
					cout << "Введи длину списка" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				Ch = new int[N];
				cout << "\nВведи названия и её характеристику" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i] >> Ch[i];
				Sp = new string[N];
				SumM = new int[N];
				//	Вызов процедуры суммарной характеристики
				MasHarSum(Name, Sp, SumM, N, k, Ch);
				//	8 - Procedure вывод
				cout << "\nСписок без повторений с характеристикой" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << "\t\t" << SumM[i] << endl;
				system("pause");
				break;
			}

		case 8:
			{
				cout << PuN << NamePunkt[8] << endl << endl;
				//	9 - Procedure
				cout << "Введи строку" << endl;
				getline(cin, St);
				T = St + " ";
				W = new string[St.length() / 2 + 2];
				//	Вызов процедуры деление строки на слова
				MasToSlova(T, W, k);
				//	9 - Procedure вывод
				cout << "\nСлова строки:" << endl;
				for(int i = 0; i < k; i++)
					cout << W[i] << endl;
				system("pause");
				break;
			}

		case 9:
			{
				cout << PuN << NamePunkt[9] << endl << endl;
				//	10 - Procedure
				cout << "Введи строку" << endl;
				getline(cin, St);
				St = St + " ";
				W = new string[St.length() / 2];
				//	Вызов процедуры деления строки на слова со знаком
				MasSoZnak(St, Zn, W, k);
				//	10 - Procedure вывод
				cout << "\nСлова строки" << endl;
				for (int i = 0; i < k; i++)
					cout << W[i] << endl;
				system("pause");
				break;
			}

		case 10:
			{
				cout << PuN << NamePunkt[10] << endl << endl;
				N = 0;
				do
				{
					cout << "Введи число строк в тексте" << endl;
					cin >> N;
				}
				while(N <= 0);

				Tk = new string[N];
				Line = new string[3 * N];
				cin.ignore();
				cout << "\nВведи исходный текст" << endl;
				for(int i = 0; i < N; i++)
					getline(cin, Tk[i]);
				//	Вызов процедуры деления массива строк на предложения
				OneIsMas(m, N, Last, Line, Tk);
				//	11 - Procedure вывод
				cout << "\nНовый текст" << endl;
				for (int i = 0; i < m; i++)
					cout << Line[i] << endl;
				system("pause");
				break;
			}

		default:
			{
				cout << "Программа завершена.\n" << endl;
				return 0;
			}
		}
	}
	while(11 != answer);
	system("pause");
	return 0;
}