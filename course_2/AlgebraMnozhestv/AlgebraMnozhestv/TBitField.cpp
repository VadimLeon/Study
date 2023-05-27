#include "TBitField.h"


TBitField::TBitField(unsigned int _sizeU): sizeU(_sizeU)
{
	sizeMem = (sizeU / (sizeof(*mem) * 8)) + 1;
	mem = new int[sizeMem];

	for (unsigned int i = 0; i < sizeMem; i++)
	{
		mem[i] = 0;
	}
}

TBitField::TBitField(const TBitField &bt): sizeU(bt.sizeU), sizeMem(bt.sizeMem)
{
	mem = new int[sizeMem];

	for (unsigned int i = 0; i < sizeMem; i++)
	{
		mem[i] = bt.mem[i];
	}
}

TBitField::~TBitField()
{
	delete[] mem;
	mem = NULL;
}

const TBitField &TBitField::operator =(const TBitField &bt)
{
	if (&bt != this)
	{
		delete[] mem;
		mem = 0x0;

		sizeU = bt.sizeU;
		sizeMem = bt.sizeMem;
		mem = new int[sizeMem];

		for (unsigned int i = 0; i < sizeMem; i++)
		{
			mem[i] = bt.mem[i];
		}
	}
	return (*this);
}

void TBitField::add(unsigned int n)
{
	mem[getNumber(n)] |= (1 << getBit(n));
}

void TBitField::remove(unsigned int n)
{
	mem[getNumber(n)] &= ~(1 << getBit(n));
}

unsigned int TBitField::getSizeU()
{
	return sizeU;
};

TBitField TBitField::operator *(const TBitField &bt)
{
	TBitField tmp;

	if (sizeU == bt.sizeU)
	{
		tmp = *this;

		for (unsigned int i = 0; i < sizeMem; i++)
		{
			tmp.mem[i] &= bt.mem[i];
		}
	}
	return tmp;
}

TBitField TBitField::operator +(const TBitField &bt)
{
	TBitField tmp;

	if (sizeU == bt.sizeU)
	{
		tmp = *this;

		for (unsigned int i = 0; i < sizeMem; i++)
		{
			tmp.mem[i] |= bt.mem[i];
		}
	}
	return tmp;
}

TBitField TBitField::operator -()
{
	TBitField tmp(*this);

	for (unsigned int i = 0; i < sizeMem; i++)
	{
		tmp.mem[i] = ~mem[i];
	}
	return tmp;
}

std::string TBitField::getString()
{
	std::string tmp;
	unsigned int k;

	for (unsigned int i = 0; i < sizeMem; i++)
	{
		for (unsigned int j = 0; j < sizeof(*mem) * 8; j++)
		{
			if (mem[i] & (1 << j))
			{
				k = i * sizeof(*mem) * 8 + j + 1;
				if (k <= sizeU)
				{
					tmp = tmp + std::to_string(k) + " ";
				}
			}
		}
	}

	return tmp;
}

