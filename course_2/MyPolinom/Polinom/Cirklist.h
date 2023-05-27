#pragma once
//#ifndef _My-CircList__For__Polinom-my___

#include "Monom.h"

//#define _My-CircList__For__Polinom-my___

class Cirklist
{
	Monom *head;

public:
	Cirklist(void);
	Cirklist(const Cirklist &op);
	~Cirklist(void);

	Cirklist& operator=(const Cirklist &op);
	Cirklist operator+(const Cirklist &op);
	Cirklist operator-(Cirklist op);
	Cirklist mult(Cirklist clis, int maxS, int k);
	Cirklist operator*(int k);

	void addMonom(int _A = 0, int _Sv = -1);
	std::string CircToString(int maxSt, int n);
};

//#endif //_My-CircList__For__Polinom-my___