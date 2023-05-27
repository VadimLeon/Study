#ifndef _T_My_MatriX__
#define _T_My_MatriX__

#include "TVector.h"

template <class TMx> class TMatrix
{
	TVector<TVector<TMx> > matr;
	int sizeM;

public:
	TMatrix<TMx>(int siz = 0): sizeM(siz)	// Конструктор по умолчанию
	{
		matr = TVector<TVector<TMx> >(sizeM);

		for(int i = 0; i < sizeM; i++)
		{
			matr[i] = TVector<TMx>(sizeM - i, i);
		}
	}

	TMatrix<TMx>(const TMatrix<TMx> &tmp): sizeM(tmp.sizeM)	// Конструктор копирования
	{
		matr = TVector<TVector<TMx> >(sizeM);

		for(int i = 0; i < sizeM; i++)
		{
			matr[i] = ((TVector<TVector<TMx> >)tmp.matr)[i];
		}
	}

	~TMatrix<TMx>(){}// Деструктор

	int getSize() const// Получение размера матрицы
	{
		return sizeM;
	}

	TVector<TMx> &operator[](const int k)// Перегрузка операции взятия по индексу
	{
		if((k > -1) && (k < sizeM))
		{
			return matr[k];
		}
	}

	TMatrix<TMx> &operator =(const TMatrix<TMx> &tmp)// Перегрузка операции присваивания
	{
		if(sizeM != tmp.sizeM)
		{
			sizeM = tmp.sizeM;
			matr = TVector<TVector<TMx> >(sizeM);
		}
		for(int i = 0; i < sizeM; i++)
		{
			matr[i] = ((TVector<TVector<TMx> >)tmp.matr)[i];
		}

		return *this;
	}

	TMatrix<TMx> operator +(const TMatrix<TMx> &tmp)// Перегрузка операции сложения матриц
	{
		TMatrix<TMx> res(tmp.getSize());
		if(sizeM == tmp.sizeM)
		{
			for(int i = 0; i < sizeM; i++)
			{
				for(int j = i; j < sizeM; j++)
				{
					res.matr[i][j] = matr[i][j] + ((TVector<TVector<TMx> >)tmp.matr)[i][j];
				}
			}
		}
		return res;
	}

	TMatrix<TMx> operator -(TMatrix<TMx> tmp)// Перегрузка операции вычетания матриц
	{
		{
			TMatrix<TMx> res(tmp.getSize());
			if(sizeM == tmp.sizeM)
			{
				for(int i = 0; i < sizeM; i++)
				{
					for(int j = i; j < sizeM; j++)
					{
						res.matr[i][j] = matr[i][j] - ((TVector<TVector<TMx> >)tmp.matr)[i][j];
					}
				}
			}
			return res;
		}
	}

	TMatrix<TMx> operator *(const TMatrix<TMx> &tmp)// Перегрузка операции произведения матриц
	{
		TMatrix<TMx> res;
		if(sizeM == tmp.sizeM)
		{
			res = TMatrix<TMx>(sizeM);
		}

		for(int i = 0; i < sizeM; i++)
		{
			for(int j = 0; j < sizeM; j++)
			{
				TMx c = 0;

				for(int k = 0; k <= j; k++)
				{
						c = c + ( (matr[i][k]) * (((TVector<TVector<TMx> >)tmp.matr)[k][j]) );
					res.matr[i][j] = c;
				}
			}
		}
		return res;
	}
};

#endif // _T_My_MatriX__