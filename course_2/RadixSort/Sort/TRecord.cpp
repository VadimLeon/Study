#include "TRecord.h"


TRecord::TRecord(int _inf)
{
	inf = _inf;
	next = NULL;
}

TRecord::TRecord(const TRecord &tmp)
{
	inf = tmp.inf;
	next = NULL;
}

TRecord::~TRecord()
{
	delete next;
}

TRecord & TRecord::operator = (const TRecord &tmp)
{
	inf = tmp.inf;
	return *this;
}