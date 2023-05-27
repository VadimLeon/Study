#pragma once

#include "TRecord.h"

class LinearSpk
{
protected:
	TRecord *first;
public:
	LinearSpk();

	LinearSpk(const LinearSpk & tmp);

	~LinearSpk();

	LinearSpk & operator = (const LinearSpk & tmp);
};

