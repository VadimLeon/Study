// Test_MyString.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "mystring.h"

using std::cout;
using std::cin;
using std::endl;
int _tmain(int argc, _TCHAR* argv[])
{
	system("color E0");
	mystring St, *W, Spase = " ";
	int k = 0;

	setlocale(LC_ALL, "Rus");
	cout << "Введи строку" << endl;
	cin >> St;
	mystring T = St + " ";
	W = new mystring[St.mylength() / 2 + 2];

	while (T.mylength() > 0)
	{
		int L = T.find(Spase);
		if (L > 0)
		{
			W[k++] = T.copy(0, L);
		}
		T.del(0, ++L);
	}

	cout << "Слова строки:" << endl;
	for(int i = 0; i < k; i++)
		cout << W[i] << endl;


	system("pause");
	return 0;
}