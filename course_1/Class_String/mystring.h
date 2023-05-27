#pragma once
#ifndef _MyString_H___
#define _MyString_H___

#include <iostream>

class mystring
{
private:
	unsigned int size;
	char *Ch;

public:
	mystring(unsigned int isize = 0);
	mystring(const mystring &);
	~mystring(void);
	mystring(const char *);

	unsigned int mylength();
	mystring copy(unsigned int, unsigned int);
	void past(mystring, unsigned int);
	int find(mystring);
	void del(unsigned int, unsigned int);

	const mystring& operator =(const mystring &);
	mystring operator + (const mystring &);
	mystring operator + (const char *);

	friend std::ostream& operator <<(std::ostream &os, const mystring &Str)
	{
		for (unsigned int i = 0; i < Str.size - 1; i++)
		{
			os << Str.Ch[i];
		}

		return os;
	};

	friend std::istream& operator >>(std::istream &is, mystring &Str)
	{	
		char mystr[256];

		is.getline(mystr, 256, '\n');
		Str = mystr;

		return is;
		is.ignore();
	};
};
#endif// _MyString_H___