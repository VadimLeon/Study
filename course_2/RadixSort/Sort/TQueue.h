#pragma once

#include "LinearSpk.h"

class TQueue: public LinearSpk
{
private:
	int count;
	TRecord *last;
public:
	TQueue();

	TQueue(const TQueue &tmp);

	~TQueue();

	TQueue & operator = (const TQueue & tmp);

	//методы

	void Add(int numb);

	int Del();

	int isEmpty();

	int getCount() { return count; }
};

