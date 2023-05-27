#pragma once
#ifndef __T_Set_Mnodg__
#define __T_Set_Mnodg__

#include "TBitField.h"
#include "MProcedure.h"

class TSet
{
	unsigned int power;
	TBitField bf;

public:
	TSet(unsigned int n = 0);
	TSet(std::string , unsigned  int = 0);
	TSet(const TSet &ts);
	~TSet();

	int getPower() const;
	void add(unsigned int n);
	void remove(unsigned int n);
	std::string getString();

	TSet &operator =(const TSet &ts);
	TSet operator +(TSet ts);
	TSet operator *(TSet ts);
	TSet operator -();
};

#endif