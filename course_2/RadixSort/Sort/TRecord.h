#pragma once

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class TRecord
{
private:
	int inf;
	TRecord *next;
public:
	TRecord(int _inf = 0);

	TRecord(const TRecord & tmp);

	~TRecord();

	TRecord & operator = (const TRecord &tmp);

	//методы

	int getInf() { return inf; }

	void setInf(int _inf) { inf = _inf; }

	TRecord* getNext() { return next; }

	void setNext(TRecord* _next) { next = _next; }
};

