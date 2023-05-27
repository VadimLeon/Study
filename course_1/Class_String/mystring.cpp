#include "stdafx.h"
#include "mystring.h"

mystring::mystring(unsigned int isize): size(isize + 1)
{
	Ch = new char[size];
	Ch[size - 1] = '\0';
}

mystring::mystring(const mystring &tmp): size(tmp.size)
{
	Ch = new char[size];
	for (unsigned int i = 0; i < size - 1; i++)
		Ch[i] = tmp.Ch[i];
	Ch[size - 1] = '\0';
}

mystring::~mystring(void)
{
	delete []Ch;
}

mystring::mystring(const char *str)
{
	size = strlen(str) + 1;
	Ch = new char[size];
	strcpy_s(Ch, strlen(str) + 1, str);
	Ch[size - 1] = '\0';
}

unsigned int mystring::mylength()
{
	return size - 1;
};

mystring mystring::copy(unsigned int start, unsigned int count)
{
	mystring res;

	if (count > 0)
	{
		if ((start >= 0) && (start <= size))
		{
			int realcount;

			if (count < (size - start))
			{
				realcount = count;
			}
			else
			{
				realcount = size - start - 1;
			}

			res = mystring(realcount);

			for (int i = 0; i < realcount; i++)
			{
				res.Ch[i] = Ch[start + i];
			}
		}
	}

	return res;
}

void mystring::past(mystring Tmp, unsigned int start)
{
	mystring res(size - 1 + Tmp.size);

	res = this->copy(0, start) + Tmp.copy(0, Tmp.size - 1) + this->copy(start, size - start);
	*this = res;
}

int mystring::find(mystring Tmp)
{
	int L = -1;

	for (unsigned int i = 0; ((i < size - Tmp.size + 1) && (L == -1)); i++)
	{
		unsigned int k = 0;
		for (unsigned int j = 0; j < Tmp.size - 1; j++)
		{
			if (Tmp.Ch[j] == Ch[i + j])
				k++;
		}
		if (k == Tmp.size - 1)
			L = i;
	}
	return L;
}

void mystring::del(unsigned int start, unsigned int count)
{
	unsigned int realcount;

	if (count > 0)
	{
		if ((start >= 0) && (start < size - 1))
		{
			if (count < (size - start))
			{
				realcount = count;
			}
			else
			{
				realcount =  size - 1 - start;
			}
		}
	}

	mystring res(realcount);

	res = this->copy(0, start) + this->copy(start + realcount, size - start - realcount);

	*this = res;
}

const mystring& mystring::operator =(const mystring &Tmp)
{
	if (&Tmp != this)
	{
		delete[] Ch;
		size = Tmp.size;
		Ch = new char[size];
		strcpy_s(Ch, size, Tmp.Ch);
		Ch[size - 1] = '\0';
	}

	return *this;
}

mystring mystring::operator +(const mystring &Tmp)
{
	mystring res(strlen(this -> Ch) + strlen(Tmp.Ch));
	unsigned int L = strlen(this -> Ch);

	for (unsigned int i = 0; i < L; i++)
	{
		res.Ch[i] = Ch[i];
	}
	for (unsigned int i = 0; i < Tmp.size; i++)
	{
		res.Ch[i + L] = Tmp.Ch[i];
	}

	return res;
};

mystring mystring::operator +(const char *str)
{
	mystring res(strlen(this -> Ch) + strlen(str));
	unsigned int L = strlen(this -> Ch);

	for (unsigned int i = 0; i < L; i++)
	{
		res.Ch[i] = Ch[i];
	}
	for (unsigned int i = 0; i < strlen(str); i++)
	{
		res.Ch[i + L] = str[i];
	}

	return res;
};