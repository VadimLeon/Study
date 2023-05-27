#pragma once
#ifndef _Complex_H_
#define _Complex_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void StrtoMas(string &St, string *W, int &k);
class complex
{
private:
	int Re;
	int Im;
	float modul;
	float makemod()
	{
		return (sqrtf(Re * Re + Im * Im));
	}

public:
	complex(int iRe = 0, int iIm = 0)
	{
		Re = iRe;
		Im = iIm;
		modul = makemod();
	}

	complex(complex &Tmp)
	{
		Re = Tmp.Re;
		Im = Tmp.Im;
		modul = Tmp.modul;
	}

	~complex()
	{
	}

	int getRe()
	{
		return Re;
	}

	int getIm()
	{
		return Im;
	}

	float getmod()
	{
		return modul;
	}

	void setRe(int R)
	{
		Re = R;
		makemod();
	}

	void setIm(int I)
	{
		Im = I;
		makemod();
	}

	complex &operator =(complex Tmp)
	{
		Re = Tmp.Re;
		Im = Tmp.Im;

		return (*this);
	}

	complex operator +(complex Tmp)
	{
		complex C;

		C.Re = Re + Tmp.Re;
		C.Im = Im + Tmp.Im;

		return C;
	}

	complex operator -(complex Tmp)
	{
		complex C;

		C.Re = Re - Tmp.Re;
		C.Im = Im - Tmp.Im;

		return C;
	}

	complex operator *(complex Tmp)
	{
		complex C;

		C.Re = (Re * Tmp.Re) - (Im * Tmp.Im);
		C.Im = (Re * Tmp.Im) + (Im * Tmp.Re);

		return C;
	}

	complex operator *(int Tmp)
	{
		complex C;

		C.Re = Re * Tmp;
		C.Im = Im * Tmp;

		return C;
	}

	complex operator /(complex Tmp)
	{
		complex C, B;
		if (Tmp.Im != 0)
		{
			if (Tmp.Im < 0)
			{
				C.Re = (Re * Tmp.Re) - (Im * abs(Tmp.Im));
				C.Im = (Re * abs(Tmp.Im)) + (Im * Tmp.Re);
				B.Re = (Tmp.Re * Tmp.Re) + (Tmp.Im * Tmp.Im);
				B.Im = 0;
			}
			else
			{
				C.Re = (Re * Tmp.Re) + (Im * (0 - Tmp.Im));
				C.Im = (Re * (0 - Tmp.Im)) + (Im * Tmp.Re);
				B.Re = (Tmp.Re * Tmp.Re) + (Tmp.Im * Tmp.Im);
				B.Im = 0;
			}

			C.Re = C.Re / B.Re;
			C.Im = C.Im / B.Re;
		}

		return C;
	}

	friend istream &operator >>(istream &is, complex &Tmp)
	{
		string St;
		getline(is, St);
		string W[3];
		int k;
		StrtoMas(St, W, k);

		for(int i = 0; i <= k; i++)
		{
			if (W[i].find("i") != -1)
			{
				int L = W[i].find("i");
				W[i].erase(L, 1);

				if (W[i] != "")
				{
					if (W[i] == "+" || W[i] == "-")
					{
						W[i] = W[i] + "1";
					}
				}
				else
				{
					W[i] = "1";
				}

				Tmp.Im = stoi(W[i]);
			}
			else
			{
				Tmp.Re = stoi(W[i]);
			}
		}
		return is;
	};

	friend ostream &operator <<(ostream &os, const complex &Tmp)
	{
		stringstream ssR;
		stringstream ssI;
		string str;
		string Stk = "";

		if (Tmp.Re != 0)
		{
			ssR << Tmp.Re;
			ssR >> str;
			Stk = str + " ";
			str = "";
		}

		if (Tmp.Im != 0)
		{
			if (Tmp.Im > 0)
			{
				if (Stk != "")
				{
					ssI << abs(Tmp.Im);
					ssI >> str;
					Stk = Stk + "+ i";
				}
				else
				{
					ssI << abs(Tmp.Im);
					ssI >> str;
					Stk = Stk + "i";
				}
			}
			else
			{
				ssI << abs(Tmp.Im);
				ssI >> str;
				Stk = Stk + "- i";
			}

			if (str != "1")
			{
				Stk = Stk + str;
			}
		}

		if (Stk == "")
		{
			Stk = "0";
		}

		os << Stk;

		return os;
	};

};
#endif//_Complex_H_