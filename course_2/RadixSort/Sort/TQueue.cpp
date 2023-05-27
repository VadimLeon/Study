#include "TQueue.h"


TQueue::TQueue() :LinearSpk()
{
	count = 0;
	last = NULL;
}

TQueue::TQueue(const TQueue &tmp)
{
	first = NULL;
	last = NULL;
	count = 0;
	TRecord *cur = tmp.first;
	while (cur != NULL)
	{
		this->Add(cur->getInf());
		cur = cur->getNext();
	}
}

TQueue::~TQueue()
{

}

TQueue & TQueue::operator = (const TQueue &tmp)
{
	if (count != 0) delete first;
	first = NULL;
	last = NULL;
	count = 0;
	TRecord *cur = tmp.first;
	while (cur != NULL)
	{
		this->Add(cur->getInf());
		cur = cur->getNext();
	}
	return *this;
}

//методы

void TQueue::Add(int numb)
{
	TRecord *tmp = new TRecord(numb);
	if (count == 0)
	{
		first = tmp;
		last = tmp;
		count = 1;
	}
	else
	{
		last->setNext(tmp);
		last = tmp;
		count++;
	}
}

int TQueue::Del()
{
	if (first == NULL) return 0;
	else
	{
		TRecord *tmp = first;
		first = first->getNext();
		tmp->setNext(NULL);
		int numb = tmp->getInf();
		delete tmp;
		count--;
		if (count == 0) last = NULL;
		return numb;
	}
}

int TQueue::isEmpty()
{
	if (count > 0) return 0;
	else return 1;
}