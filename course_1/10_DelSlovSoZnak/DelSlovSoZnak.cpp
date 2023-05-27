// DelSlovSoZnak.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const string Zn = " ,.!?:;";
	int k = 0;
	string St, *W;
	int Cn = St.length();
	int m = Zn.length();
	k = 0;

	setlocale(LC_ALL, "Rus");
	cout << "Введи строку" << endl;
	getline(cin, St);
	St = St + " ";
	W = new string[St.length() / 2 + 2];

	for (int i = 0; i < Cn; i++)
	{
		int L = Zn.find(St[i]);

		if ((L > m) || (L < 0))
			W[k] = W[k] + St[i];
		else
			if (St[i] == Zn[0])
			{
				if (W[k] != "")
					W[++k] = "";
			}
			else
			{
				if (W[k] != "")
					k++;

				W[k] = St[i];
				W[++k] = "";
			}
	}

	cout << "Слова строки" << endl;
	for (int i = 0; i < k; i++)
		cout << W[i] << endl;

	system("pause");
	return 0;
}