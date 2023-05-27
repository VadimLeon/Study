#pragma once
#include "Cirklist.h"

#define MAXSTEPEN 10
#define MAXPEREMEN 5

class MyPolinom
{
	int maxSt, n;
	Cirklist *cl;

	int stringToSv(std::string st, int maxSt, int k)
	{
		int rez = -1;
		int *n = new int[k];
		std::string str = st;

		for (int i = 0; i < k; i++)
		{
			std::string res = "x" + std::to_string(i);
			int L = (int)(str.find(res));
			if (-1 == L) { n[i] = 0; }
			else {
				str.erase(L, res.length());
				if (L > str.length()) { n[i] = 1; }
				else {
					if (str[L] == 'x') { n[i] = 1; }
					else {
						str.erase(L, 1);
						std::string s = "";
						while (L < str.length() && str[L] >= '0' && str[L] <= '9')
						{
							s += str[L];
							str.erase(L, 1);
						}

						if (s != "") { n[i] = stoi(s); }
						else
						{
							n[i] = 1;
						}

						if (n[i] > maxSt) { return -1; }
					}
				}
			}
		}

		int Sv = 0;

		for (int i = 0; i < k - 1; i++)
		{
			Sv = (Sv + n[i]) * maxSt;
		}
		Sv = Sv + n[k - 1];

		delete[] n;
		return Sv;
	}
	int stringToA(std::string st, int maxSt, int k)
	{
		int rez;
		int l = st.find('x');
		if (l == -1) { return stoi(st); }
		if (l == 0)
		{
			rez = 1;
		}
		if (l == 1)
		{
			if (st[0] == '-')
			{
				rez = -1;
			}
			else
				if (st[0] == '+')
				{
					rez = 1;
				}
				else
				{
					char *a = new char[1];
					a[0] = st[0];
					rez = atoi(a);
				}



		}
		if (l != 0 && l != 1 && l != -1)
		{
			std::string s = st.substr(0, l);
			return stoi(s);
		}
		int q = ((int)st[l + 1] - 48);
		if (q >= n)
		{
			std::string tmp = st;
			tmp.erase(0, l + 1);
			l = tmp.find("x");
			if (l == -1)
				rez = 0;
		}
		return rez;
		/*int rez;
		int L = (int)(st.find('x'));
		if (-1 == L) { rez = stoi(st); }
		if (1 == L)
		{
			if ('-' == st[0]) { rez = -1; }
			else
			{
				rez = stoi(st);
			}
		}
		else
		{
			std::string s = st.substr(0, L);
			if (s == "") { rez = 1; }
			else
			{
				rez = stoi(s);
			}
		}

		return rez;*/
	}
	void MasSoZnak(std::string &Str, std::string *W, int &k)
	{
		std::string Znak = " +-";
		std::string St = Str + " ";

		int Cn = (int)(St.length());
		int m = (int)(Znak.length());
		k = 0;

		for (int i = 0; i < Cn; i++)
		{
			int L = (int)(Znak.find(St[i]));

			if ((L > m) || (L < 0))
				W[k] = W[k] + St[i];
			else
				if (St[i] == Znak[0])
				{
					if (W[k] != "" && W[k] != "-" && W[k] != "+")
						W[++k] = "";
				}
				else
				{
					if (W[k] != "")
						k++;

					W[k] = St[i];
				}
		}
	}

public:
	MyPolinom(std::string st = "", int _maxSt = MAXSTEPEN, int _n = MAXPEREMEN);
	MyPolinom(const MyPolinom &p);
	~MyPolinom(void);

	MyPolinom& operator=(const MyPolinom &p);
	MyPolinom operator+(const MyPolinom &p);
	MyPolinom operator-(const MyPolinom &p);
	MyPolinom operator*(const MyPolinom &p);
	MyPolinom operator*(const int k);

	void addMonom(std::string st, int _maxSt, int _n);
	std::string PolToString();
};

