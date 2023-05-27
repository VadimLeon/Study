#pragma once
#ifndef _T_Bit_Feld__
#define _T_Bit_Feld__

#include <string>

class TBitField
{
	unsigned int sizeU;
	int *mem;
	unsigned int sizeMem;

	int getBit(int k)
	{
		return ((int)((k - 1) % (sizeof(*mem) * 8)));
	}

	int getNumber(int k)
	{
		return ((int)((k - 1) / (sizeof(*mem) * 8)));
	}

public:
	TBitField(unsigned int _sizeU = 0);
	TBitField(const TBitField &);
	~TBitField();

	const TBitField &operator =(const TBitField &);
	TBitField operator *(const TBitField &);
	TBitField operator +(const TBitField &);
	TBitField operator -();

	void add(unsigned int);
	void remove(unsigned int);
	std::string getString();
	unsigned int TBitField::getSizeU();
};

#endif