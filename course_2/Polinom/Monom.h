#pragma once
//#ifndef _My-Monom__For__Polinom-my___
//#define _My-Monom__For__Polinom-my___
#include <string>
#include <string.h>

#define MAXSTEPEN 10
#define MAXPEREMEN 5

class Monom
{
	int A, Sv;
	Monom *Next;

public:
	Monom(int _A = 0, int _Sv = -1);
	Monom(std::string st, int maxSv = MAXSTEPEN, int n = MAXPEREMEN);
	Monom(const Monom &M);
	~Monom(void);

	Monom& operator =(const Monom &M);
	void setA(int _A);
	void setSv(int _Sv);
	void setNext(Monom *_Next);
	int getA(void) const;
	int getSv(void) const;
	Monom *getNext();
	Monom mulMon(Monom m, int maxS, int k);
	std::string monomTostring(int maxSv = MAXSTEPEN, int n = MAXPEREMEN);

	//For_TEST_To_Console
	int stringToA(std::string st, int maxSv, int k);
	int stringToSv(std::string st, int maxSv, int k);
};

//#endif // _My-Monom__For__Polinom-my___