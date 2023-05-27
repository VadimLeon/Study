#include "MyPolinom.h"
#include "Cirklist.h"


MyPolinom::MyPolinom(std::string st, int _maxSt, int _n) : maxSt(_maxSt), n(_n)
{
	cl = new Cirklist;
	std::string *W = new std::string[st.length() + 2];
	int k;

	MasSoZnak(st, W, k);
	for (int i = 0; i < k; i++)
	{
		cl->addMonom(stringToA(W[i], _maxSt, _n), stringToSv(W[i], _maxSt, _n));
	}

	delete[]W;
}

MyPolinom::MyPolinom(const MyPolinom & p) : maxSt(p.maxSt), n(p.n)
{
	cl = new Cirklist(*(p.cl));
}

MyPolinom::~MyPolinom(void) { delete cl; }

MyPolinom & MyPolinom::operator=(const MyPolinom & p)
{
	maxSt = p.maxSt;
	n = p.n;

	delete cl;

	cl = new Cirklist(*(p.cl));

	return *this;
}

MyPolinom MyPolinom::operator+(const MyPolinom & p)
{
	MyPolinom res;

	if (maxSt != p.maxSt || n != p.n)
	{
		return res;
	}

	res = *this;
	(*(res.cl)) = (*(res.cl)) + (*(p.cl));

	return res;
}

MyPolinom MyPolinom::operator-(const MyPolinom & p)
{
	MyPolinom res;

	if (maxSt != p.maxSt || n != p.n)
	{
		return res;
	}

	res = *this;
	(*(res.cl)) = (*(res.cl)) - (*(p.cl));

	return res;
}

MyPolinom MyPolinom::operator*(const MyPolinom & p)
{
	MyPolinom res;

	if (maxSt != p.maxSt || n != p.n)
	{
		return res;
	}

	res = *this;
	(*(res.cl)) = (*(res.cl)).mult((*(p.cl)), maxSt, n);

	return res;
}

MyPolinom MyPolinom::operator*(const int k)
{
	MyPolinom res = *this;

	(*(res.cl)) = ((*(res.cl)) * k);

	return res;
}

void MyPolinom::addMonom(std::string st, int _maxSt, int _n)
{
	cl->addMonom(stringToA(st, _maxSt, _n), stringToSv(st, _maxSt, _n));
}

std::string MyPolinom::PolToString()
{
	return (cl->CircToString(maxSt, n));
}
