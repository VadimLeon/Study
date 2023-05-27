#ifndef _T_My_VectoRR__
#define _T_My_VectoRR__

//#include "stdafx.h"
//#include "Exeption.h"

#define NegativeIndex() (-1)
#define BigIndex() (-3)
#define NotEqVector() (-2)

template <class TypeVect>
class TVector
{
	TypeVect *pVect;
	int sizev, startIndex;

public:
	// Конструктор по умолчанию
	TVector<TypeVect>(int size = 0, int start = 0):sizev(size), startIndex(start)
	{
		pVect = new TypeVect[sizev];

		TypeVect Noll(0);

		for(int i = 0; i < sizev ; i++)
		{
			pVect[i] = Noll;
		}
	}
	// Конструктор копирования
	TVector<TypeVect>(const TVector<TypeVect> &tmp):sizev(tmp.sizev), startIndex(tmp.startIndex)
	{
		pVect = new TypeVect[sizev];

		for(int i = 0; i < sizev; i++)
		{
			pVect[i] = tmp.pVect[i];
		}
	}
	// Деструктор
	~TVector<TypeVect>()
	{
		delete []pVect;
		pVect = nullptr;
	}

	// Получение размера вектора
	int getSize() const
	{
		return sizev;
	}
	// Получение начала вектора
	int getIndex() const
	{
		return startIndex;
	}

	// Перегрузка операции взятия по индексу
	TypeVect &operator [](const int pos)
	{
		const int k = pos - startIndex;
		TypeVect Noll(0);

		if(k < 0 - startIndex) {throw NegativeIndex();}
		else if(k >= sizev)    {throw BigIndex();}

		if(k < 0)              {return Noll;}

		return pVect[k];
	}
	// Перегрузка операции присваивания
	TVector<TypeVect> &operator =(const TVector<TypeVect> &tmp)
	{
		if(this != &tmp)
		{
			if(tmp.sizev != sizev)
			{
				if(sizev != 0)
				{
					delete []pVect;
				}

				sizev = tmp.sizev;
				pVect = new TypeVect[sizev];
			}
			startIndex = tmp.startIndex;

			for(int i = 0; i < sizev; i++)
			{
				pVect[i] = tmp.pVect[i];
			}
		}
		return *this;
	}
	// Перегрузка операции сложения матриц
	TVector<TypeVect> operator +(const TVector<TypeVect> &tmp)
	{
		TVector<TypeVect> Rez(TVector<TypeVect>(0));

		if(sizev == tmp.sizev)
		{
			Rez = TVector<TypeVect>(*this);

			for(int i = 0; i < sizev; i++)
			{
				Rez.pVect[i] = pVect[i] + tmp.pVect[i];
			}
		}
		else {throw NotEqVector();}

		return Rez;
	}
	// Перегрузка операции вычетания матриц
	TVector<TypeVect> operator -(const TVector<TypeVect> &tmp)
	{
		TVector<TypeVect> Rez(TVector<TypeVect>(0));

		if(sizev == tmp.sizev)
		{
			Rez = TVector<TypeVect>(*this);

			for(int i = 0; i < sizev; i++)
			{
				Rez.pVect[i] = pVect[i] - tmp.pVect[i];
			}
		}
		else { throw NotEqVector(); }

		return Rez;
	}
	// Перегрузка операции произведения матриц
	TypeVect operator *(const TVector<TypeVect> &tmp)
	{
		TypeVect Rez(0);

		if(sizev == tmp.sizev)
		{
			for(int i = 0; i < sizev; i++)
			{
				Rez = Rez + (pVect[i] * tmp.pVect[i]);
			}
		}
		else { throw NotEqVector(); }

		return Rez;
	}
};

#endif // _T_My_VectoRR__