#include "Monom.h"
#include <iostream>
#include <sstream>


Monom::Monom(int _A, int _Sv) : A(_A), Sv(_Sv), Next(this)
{}

Monom::Monom(std::string str, int maxSv, int n) : Next(this)
{
	A = Monom::stringToA(str, maxSv, n);
	Sv = Monom::stringToSv(str, maxSv, n);
}

Monom::Monom(const Monom &M) : A(M.A), Sv(M.Sv), Next(this)
{}

Monom::~Monom(void) { Next = nullptr; }

Monom& Monom::operator=(const Monom &M)
{
	A = M.A;
	Sv = M.Sv;
	Next = this;

	return *this;
}

void Monom::setA(int _A) { A = _A; }

void Monom::setSv(int _Sv) { Sv = _Sv; }

void Monom::setNext(Monom *_Next) { Next = _Next; }

int Monom::getA(void) const
{
	return A;
}

int Monom::getSv(void) const
{
	return Sv;
}

Monom * Monom::getNext()
{
	return Next;
}

Monom Monom::mulMon(Monom m, int maxS, int k)
{
	Monom rez;
	int *a = new int[k];
	int *b = new int[k];
	int *c = new int[k];
	int powa = Sv, powb = m.Sv;

	for (int i = 0; i < k; i++)
	{
		a[k - i - 1] = powa % maxS;
		powa = powa / maxS;

		b[k - i - 1] = powb % maxS;
		powb = powb / maxS;

		c[k - i - 1] = a[k - i - 1] + b[k - i - 1];

		if (c[k - i - 1] >= maxS)
		{
			return rez;
		}
	}

	rez.Sv = c[0];

	for (int i = 0; i < k; i++)
	{
		rez.Sv = rez.Sv * maxS + c[i];
	}

	rez.A = A * m.A;

	delete[]a;
	delete[]b;
	delete[]c;

	return rez;
}

std::string Monom::monomTostring(int maxSt, int n)
{
	int ost, chast = Sv;
	std::string res = "";
	for (int i = n - 1, j = 0; i > -1; i--, j++)
	{
		ost = chast % (maxSt);
		chast = chast / (maxSt);

		if (ost > 1) { res = "x" + std::to_string(i) + "^" + std::to_string(ost) + res; }
		if (ost > 0 && ost < 2) { res = "x" + std::to_string(i) + res; }
	}
	res = std::to_string(A) + res;

	return res;
}

//For_TEST_To_Console
int Monom::stringToSv(std::string st, int maxSt, int k)
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

int Monom::stringToA(std::string st, int maxSt, int k)
{
	int rez;
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

	return rez;
}
