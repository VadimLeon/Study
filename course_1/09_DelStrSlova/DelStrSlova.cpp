// DelStrSlova.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string St, *W;
	int k = 0;

	setlocale(LC_ALL, "Rus");
	cout << "Введи строку" << endl;
	getline(cin, St);
	string T = St + " ";
	W = new string[St.length() / 2 + 2];

	while (T.length() > 0)
	{
		int L = T.find(" ");
		if (L > 0)
		{
			W[k++] = T.substr(0, L);
		}
		T.erase(0, ++L);
	}

	cout << "Слова строки:" << endl;
	for(int i = 0; i < k; i++)
		cout << W[i] << endl;

	system("pause");
	return 0;
}