#include "Cirklist.h"
#include <iostream>


Cirklist::Cirklist() { head = new Monom; }

Cirklist::Cirklist(const Cirklist &op)
{
	head = new Monom();
	Monom *Last = head;
	Monom *cur = op.head->getNext();

	while (cur != op.head)
	{
		Monom *tmp = new Monom(*cur);

		tmp->setNext(head);
		Last->setNext(tmp);
		Last = tmp;
		cur = cur->getNext();
	}
}

Cirklist::~Cirklist()
{
	Monom *cur = head->getNext();

	while (cur != head)
	{
		head->setNext(cur->getNext());
		cur->setNext(nullptr);
		delete cur;

		cur = head->getNext();
	}

	head->setNext(nullptr);
	delete head;
}

Cirklist& Cirklist::operator=(const Cirklist &op)
{
	Monom *Last = head->getNext();

	head->setNext(nullptr);
	delete Last;
	Last = nullptr;

	head = new Monom();
	Last = head;
	Monom *cur = op.head->getNext();

	while (cur != op.head)
	{
		Monom *tmp = new Monom(*cur);

		tmp->setNext(head);
		Last->setNext(tmp);
		Last = tmp;
		cur = cur->getNext();
	}

	return *this;
}

Cirklist Cirklist::operator+(const Cirklist &op)
{
	Cirklist rez(*this);
	Monom *cur = op.head->getNext();

	while (cur != op.head)
	{
		rez.addMonom(cur->getA(), cur->getSv());
		cur = cur->getNext();
	}

	return rez;
}

Cirklist Cirklist::operator-(Cirklist op)
{
	Cirklist rez((*this) + (op * (-1)));
	return rez;
}

Cirklist Cirklist::mult(Cirklist clis, int maxS, int k)
{
	Cirklist rez;
	Monom *cur = head->getNext();

	while (cur != head)
	{
		Monom *current = clis.head->getNext();

		while (current != clis.head)
		{
			Monom M(*cur), Mm(*current);
			M = M.mulMon(Mm, maxS, k);

			rez.addMonom(M.getA(), M.getSv());
			current = current->getNext();
		}

		cur = cur->getNext();
	}

	return rez;
}

Cirklist Cirklist::operator*(const int k)
{
	if (0 == k)
	{
		return (Cirklist());
	}

	Cirklist rez(*this);
	Monom *cur = rez.head->getNext();

	while (cur != rez.head)
	{
		cur->setA((cur->getA()) * k);
		cur = cur->getNext();
	}

	return rez;
}

void Cirklist::addMonom(int _A, int _Sv)
{
	Monom *m = new Monom(_A, _Sv);
	Monom *cur = head->getNext(), *prev = head;

	while (_Sv < cur->getSv())
	{
		prev = cur;
		cur = cur->getNext();
	}

	if (cur->getSv() == _Sv)
	{
		int nA = cur->getA() + _A;

		if (nA != 0)
		{
			cur->setA(nA);
		}
		else
		{
			if (_Sv != (-1))
			{
				prev->setNext(cur->getNext());
				cur->setNext(nullptr);
				delete cur;
			}
		}
	}
	else
	{
		prev->setNext(m);
		m->setNext(cur);
	}
}

std::string Cirklist::CircToString(int maxSt, int n)
{
	std::string rez = "";
	Monom *cur = head->getNext();

	while (cur != head)
	{
		std::string tmp = cur->monomTostring(maxSt, n);

		if ('-' == tmp[0]) { rez = rez + " " + tmp; }
		else
		{
			rez = rez + (" + " + tmp);
		}
		cur = cur->getNext();
	}

	if ("" == rez) { rez = "0"; }

	return rez;
}
