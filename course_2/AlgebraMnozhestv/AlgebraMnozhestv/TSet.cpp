#include "TSet.h"
#include "MProcedure.h"

using namespace std;
TSet::TSet(unsigned int n): power(n), bf(n)
{
}

TSet::TSet(std::string s, unsigned int sizE): power(sizE), bf(TBitField(sizE))
{
	int len = (s.length() + 4) / 2;
	int k = -1;
	int *Arr = new int[len];

	DivToString(k, s, Arr);

	for(int i = 0; i < k; i++)
	{
		add(Arr[i]);
	}

	delete []Arr;
	Arr = NULL;
}

TSet::TSet(const TSet &ts): power(ts.power), bf(ts.bf)
{
}

TSet::~TSet()
{
}

int TSet::getPower() const
{
	return power;
}

void TSet::add(unsigned int n)
{
	if((n > 0) && (n <= power))
	{
		bf.add(n);
	}
}

void TSet::remove(unsigned int n)
{
	if((n > 0) && (n <= power))
	{
		bf.remove(n);
	}
}

TSet &TSet::operator =(const TSet &ts)
{
	if(&ts != this)
	{
		power = ts.power;
	}
	bf = ts.bf;

	return (*this);
}

TSet TSet::operator +(TSet ts)
{
	TSet tmp;
	tmp.bf = bf + ts.bf;
	tmp.power = tmp.bf.getSizeU();

	return tmp;
}

TSet TSet::operator *(TSet ts)
{
	TSet tmp;
	tmp.bf = bf * ts.bf;
	tmp.power = tmp.bf.getSizeU();

	return tmp;
}

TSet TSet::operator -()
{
	TSet tmp(*this);
	tmp.bf = -tmp.bf;

	return tmp;
}

std::string TSet::getString()
{
	return (bf.getString());
};

