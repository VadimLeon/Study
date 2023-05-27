#pragma once

#include <string>
#include "Sort.h"

#ifndef _My_Zapis_For_Tablice__
#define _My_Zapis_For_Tablice__

template <class T>
class Zapis
{
	std::string Name;
	T Value;

public:
	//����������� (+ ��-���������)
	Zapis<T>(std::string str = "", T _Value = (T)0);

	//����������� �����������
	Zapis<T>(const Zapis<T> &tmp);

	//����������
	~Zapis<T>(void);

	//�������� ����������
	Zapis<T>& operator =(const Zapis<T> &tmp);

	//�������� ��� � ������
	std::string GetName(void) const;

	//�������� ��������
	T GetValue(void) const;

	//���������� ��������
	void SetValue(const T k);
};

	//����������� (+ ��-���������)
	template <class T>
	Zapis<T>::Zapis(std::string str, T _Value): Name(str), Value(_Value)
	{}

	//����������� �����������
	template <class T>
	Zapis<T>::Zapis(const Zapis<T> &tmp): Name(tmp.Name), Value(tmp.Value)	{}

	//����������
	template <class T>
	Zapis<T>::~Zapis(void) {}

	//�������� ����������
	template <class T>
	Zapis<T>& Zapis<T>::operator =(const Zapis<T> &tmp)
	{
		if(this != &tmp)
		{
			Name = tmp.Name;
			Value = tmp.Value;
		}
		return *this;
	}

	//�������� ��� � ������
	template <class T>
	std::string Zapis<T>::GetName(void) const
	{ return Name; }

	//�������� ��������
	template <class T>
	T Zapis<T>::GetValue(void) const
	{ return Value; }

	//���������� ��������
	template <class T>
	void Zapis<T>::SetValue(const T k) { Value = k; };

#endif //_My_Zapis_For_Tablice__



#ifndef __My__Steak__
#define __My__Steak__

template <class Typ>
class MySteak
{
	Typ *mem;
	int size, count;


public:
	//���������� (-|-  ��-���������)
	MySteak<Typ>(int _size = 20): size(_size), count(0)
	{
		mem = new Typ[size];
	}

	//���������� �����������
	MySteak<Typ>(const MySteak<Typ> &tmp): size(tmp.size), count(tmp.count)
	{
		mem = new Typ[size];
		/**///��������� ������ �� ������������ �������� ������������ ��� ������������ �� ������� "[]"
		for(int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}

	//����������
	~MySteak<Typ>(void)
	{
		delete []mem;
		mem = nullptr;
	}

	//�������� ������������
	MySteak<Typ>& operator =(const MySteak<Typ> &tmp)
	{
		if(this != &tmp)
		{
			if(size != tmp.size)
			{
				if(size != NULL) { delete []mem; }

				size = tmp.size;
				mem = new Typ[size];
			}

			count = tmp.count;
			/**///��������� ������ �� ������������ �������� ������������ ��� ������������ �� ������� "[]"
			for(int i = 0; i < size; i++)
			{
				mem[i] = tmp.mem[i];
			}
		}

		return *this;
	}

	//����� �������
	Typ top(void)
	{
		return mem[--count];
	}

	//�������� �������
	void push(const Typ tmp)
	{
		mem[count++] = tmp;
	}

	//���������� �������
	Typ pop(void) const
	{
		if(count <= size && count > 0) { return mem[count - 1]; }
		else { throw -1; }
	}

	//������� �� �������
	//���� == 0, �� ���� ����
	int isEmpty(void) const
	{
		return count;
	}

	//������� �� �������
	//���� == 0, �� ���� ������
	int isFull(void) const
	{
		return size - count;
	}
};
#endif //__My__Steak__



#ifndef __My_Tablice____
#define __My_Tablice____

template <class T>
class MTablice
{
	Zapis<T> *mem;
	int size, count;

public:
	//���������� (-|-  ��-���������)
	MTablice<T>(int _size = 0): size(_size), count(0)
	{
		mem = new Zapis<T>[size];
		Zapis<T> nol;
		/**///����� ������ �� ������ ������ ��� ����������� "=", ��� ����� ����� ���������� �������� ������� ����: ("", 0.0)
		for(int i = 0; i < size; i++)
		{
			mem[i] = nol;
		}
	}

	//���������� �����������
	MTablice<T>(const MTablice<T> &tmp): size(tmp.size), count(tmp.count)
	{
		mem = new Zapis<T>[size];
		/**///����� ������ �� ������ ������ ��� ����������� "=", ��� ����� ����� ���������� �������� ������� ����: ("", 0.0)
		for(int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}

	//����������
	~MTablice<T>(void)
	{
		delete []mem;
		mem = nullptr;
	}

	//�������� ������������
	MTablice<T>& operator =(const MTablice<T> &tmp)
	{
		if(this != &tmp)
		{
			if(size != tmp.size)
			{
				if(size != NULL) { delete []mem; }

				size = tmp.size;
				mem = new Zapis<T>[size];
			}

			count = tmp.count;
			/**///����� ������ �� ������ ������ ��� ����������� "=", ��� ����� ����� ���������� �������� ������� ����: ("", 0.0)
			for(int i = 0; i < size; i++)
			{
				mem[i] = tmp.mem[i];
			}
		}

		return *this;
	}

	//������ �� �������
	Zapis<T> operator[](const int index) const
	{
		Zapis<T> rez;

		if((index > -1) && (index < count))
		{
			rez = mem[index];
		}
		return rez;
	}

	//�������� � ������� ������
	void add(std::string Name, T Value)
	{
		int L = -1;

		for(int i = 0; i < count && -1 == L; i++)
		{
			if(Name == mem[i].GetName())
			{ L = i; }
		}

		if(-1 == L)
		{
			mem[count++] = Zapis<T>(Name, Value);
		}
		else
		{
			mem[L].SetValue(Value);
		}
	}

	//������� ������
	void del(std::string Name)
	{
		int L = -1;

		for(int i = 0; ((i < count) && (-1 == L)); i++)
		{
			if(Name == mem[i].GetName())
			{
				L = i;
				mem[i] = mem[--count];
			}
		}
	}

	//����� �� �����
	Zapis<T> search(std::string Name) const
	{
		Zapis<T> res;
		int L = -1;

		for(int i = 0; i < count && -1 == L; i++)
		{
			if(Name == mem[i].GetName())
			{
				L = i;
				res = mem[i];
			}
		}

		return res;
	}

	//�������� �� �������
	//���� 0 - �� ����
	int isEmpty(void) const
	{
		return count;
	}

	//�������� �� ������������
	//���� 0 - �� ����� ���(������)
	int isFull(void) const
	{
		return (size - count);
	}

	//���������� ���������� �������
	int getCount(void) const
	{
		return count;
	}
};
#endif //__My_Tablice____



#ifndef __POLIZ_across_Steak__
#define __POLIZ_across_Steak__

#include "MyClasses.h"

class Pol
{
	std::string arifm, *poliz, *w;
	int size, count;

	MySteak<Zapis<int> > operacia;
	MTablice<int> tab_operc;
	MTablice<double> tab_var;

	//��������� ����� ������ "("
	void work_left(void)
	{
		operacia.push(Zapis<int>("(", 0));
	}

	//��������� ������ ������ ")"
	void work_right(void)
	{
		while((operacia.isEmpty()) && (operacia.pop().GetName() != "("))
		{
			poliz[count++] = operacia.top().GetName();
		}
		if("(" == operacia.pop().GetName()) { operacia.top(); }
	}

	//��������� ���������� 
	//(���� ������ ��� ���������� ��� ���������)
	void work_var(std::string st)
	{
		poliz[count++] = st;
		char SerNum = st[0];
		if((SerNum >= '0') && (SerNum <= '9'))
		{//���� �����
			tab_var.add(st, stod(st));
		}
		else
		{//���� �� �����
			tab_var.add(st, 0);
		}
	}

	//��������� ���������
	//(���� ������ - ��� �����-���� ���� �� "+ - * / ^" )
	void work_operat(Zapis<int> tmp)
	{
		while((operacia.isEmpty()) && (operacia.pop().GetValue() >= tmp.GetValue()))
		{
			poliz[count++] = operacia.top().GetName(); 
		}

		operacia.push(tmp);
	}

	//������� �������-�������� ������
	//��� - �������� �������� ������
	void make_poliz(void)
	{
		const std::string razdelitel = " +-*/^()";
		const int maxMass = arifm.length() + 1;
		w = new std::string[maxMass];

		int k = 0;
		strToMass(arifm, razdelitel, w, k);

		size = k + 1;
		const int sizeTabVar = (int)(k / 2) + 1;

		poliz = new std::string[size];
		tab_var = MTablice<double>(sizeTabVar);

		count = 0;

		for(int i = 0; i < k; i++)
		{
			if("(" == w[i]) { work_left(); }
			else
			{
				if(")" == w[i]) { work_right(); }
				else
				{
					Zapis<int> tmp = tab_operc.search(w[i]);
					if("" == tmp.GetName()) { work_var(w[i]); }
					else { work_operat(tmp); }
				}
			}
		}
		end_work();
	}

	//�������� ������� �������� � �� ������������
	void make_tab_operacia(void)
	{
		tab_operc = MTablice<int>(6);
		tab_operc.add("+", 1);
		tab_operc.add("-", 1);
		tab_operc.add("*", 2);
		tab_operc.add("/", 2);
		tab_operc.add("^", 3);
	}

	//�������� ����� ��� �������� ���
	//����� � ����� �������� ������ ��������
	void end_work(void)
	{
		while(operacia.isEmpty())
		{
			if(operacia.pop().GetName() != "(") { poliz[count++] = operacia.top().GetName(); }
			else { operacia.top(); }
		}
	}

public:
	//���������� (-|-  ��-���������)
	Pol(std::string st = ""): arifm(st)
	{
		make_tab_operacia();
		make_poliz();
	}

	//���������� �����������
	Pol(const Pol &tmp): arifm(tmp.arifm), operacia(tmp.operacia), tab_var(tmp.tab_var)
	{
		make_tab_operacia();
		make_poliz();
	}

	//����������
	~Pol(void)
	{
		delete []poliz;
		poliz = nullptr;
		delete []w;
		w = nullptr;
	}

	//�������� ������������
	Pol& operator =(const Pol &tmp)
	{
		if(size != tmp.size)
		{
			if(size != NULL)
			{
				delete []poliz;
			}

			size = tmp.size;
			poliz = new std::string[size];
		}

		arifm = tmp.arifm;
		make_tab_operacia();
		//for(int i = 0; i < size; i++) { poliz[i] = tmp.poliz[i]; }
		make_poliz();

		//tab_var = tmp.tab_var; ///make_poliz() - ������� ������� ����������
		return *this;
	}

	//������ �� �������
	std::string operator [](const int k)
	{
		if(k > -1 && k < count)
		{
			return poliz[k];
		}
		else
		{
			return "";
		}
	}

	//���������� ���������� ���������
	int getCount(void) const
	{
		return count;
	}

	//���������� �����
	std::string getPoliz(void) const
	{
		std::string str = "";
		for(int i = 0; i < count; i++)
		{
			str = str + poliz[i] + " ";
		}
		return str;
	}

	//���������� ������� ����������
	MTablice<double>& getTablVar(void)
	{
		return tab_var;
	}
};
#endif //__POLIZ_across_Steak__



#ifndef __Arithmetic__Expressions____
#define __Arithmetic__Expressions____

class ArithmExp
{
	Pol p;
	MySteak<double> s;

public:
	//���������� (-|-  ��-���������)
	ArithmExp(std::string st = "")
	{
		p = Pol(st);
		s = MySteak<double>(20);
	}
	//���������� �����������
	ArithmExp(const ArithmExp &tmp): p(tmp.p), s(tmp.s)
	{	}
	//����������
	~ArithmExp(void){}

	//�������� ������������
	ArithmExp& operator =(const ArithmExp &tmp)
	{
		p = tmp.p;
		s = tmp.s;

		return *this;
	}
	//������ �� �������
	Zapis<double> operator [](const int k)
	{
		return (p.getTablVar()[k]);
	}

	//���������� �����
	std::string getPoliz(void) const
	{
		return p.getPoliz();
	}
	//�������� ���������� ����������
	int getVarNumber(void)
	{
		return p.getTablVar().getCount();
	}
	//��������� ���������
	double calculate(void)
	{
		const int sizePol = p.getCount();//��� ����� for(������ "Pol p")
		double left, right;

		for(int i = 0; i < sizePol; i++)
		{
			if("+" == p[i])
			{
				right = s.top();
				left = s.top();
				s.push(left + right);
			}
			else
			{
				if("-" == p[i])
				{
					right = s.top();
					left = s.top();
					s.push(left - right);
				}
				else
				{
					if("*" == p[i])
					{
						right = s.top();
						left = s.top();
						s.push(left * right);
					}
					else
					{
						if("/" == p[i])
						{
							right = s.top();
							left = s.top();
							s.push(left / right);
						}
						else
						{
							if("^" == p[i])
							{
								right = s.top();
								left = s.top();
								s.push(pow(left,right));
							}
							else
							{
								if(" " != p[i])
								{
									double num = ((p.getTablVar().search(p[i])).GetValue());
									s.push(num);
								}
							}
						}
					}
				}
			}
		}
		return s.top();
	}

	//���������� �������� �� ���������� "Zapis<double> temp"
	void setValue(Zapis<double> tmp)
	{
		//Zapis<double> Temp = (p.getTablVar().search(tmp.GetName()));

		if((p.getTablVar().search(tmp.GetName())).GetName() != "")
		{
			p.getTablVar().add(tmp.GetName(), tmp.GetValue());
		}
	}

	//���������� �������� �� ���������� "Name_" � "Value_"
	void setValue(std::string Name_, double Value_)
	{
		//Zapis<double> Temp = (p.getTablVar().search(tmp.GetName()));

		if((p.getTablVar().search(Name_)).GetName() != "")
		{
			p.getTablVar().add(Name_, Value_);
		}
	}
};

#endif //__Arithmetic__Expressions____

