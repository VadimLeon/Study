#include "LinearSpk.h"


LinearSpk::LinearSpk()
{
	first = NULL;
}

LinearSpk::LinearSpk(const LinearSpk &tmp)
{
	if (tmp.first == NULL) 
		{
			first = tmp.first;
	}
	else
	{
		TRecord *cur = tmp.first;
		first = new TRecord(*cur);
		TRecord *newCur = tmp.first;
		while (cur->getNext() != NULL)
		{
			TRecord *word;
			word = new TRecord(*cur);
			newCur->setNext(word);
			newCur = word;
		}
	}
}

LinearSpk::~LinearSpk()
{
	delete first;
}

LinearSpk &LinearSpk::operator = (const LinearSpk &tmp)
{
	if (first != NULL)
		{
			delete first;
	}
	LinearSpk newList(tmp);
	first = newList.first;
	return *this;
}