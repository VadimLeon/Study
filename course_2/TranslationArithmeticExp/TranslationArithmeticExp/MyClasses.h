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
	//Конструктор (+ по-умолчанию)
	Zapis<T>(std::string str = "", T _Value = (T)0);

	//Конструктор копирования
	Zapis<T>(const Zapis<T> &tmp);

	//Деструктор
	~Zapis<T>(void);

	//Операция присвоения
	Zapis<T>& operator =(const Zapis<T> &tmp);

	//Получить имя в записи
	std::string GetName(void) const;

	//Получить значение
	T GetValue(void) const;

	//Установить значение
	void SetValue(const T k);
};

	//Конструктор (+ по-умолчанию)
	template <class T>
	Zapis<T>::Zapis(std::string str, T _Value): Name(str), Value(_Value)
	{}

	//Конструктор копирования
	template <class T>
	Zapis<T>::Zapis(const Zapis<T> &tmp): Name(tmp.Name), Value(tmp.Value)	{}

	//Деструктор
	template <class T>
	Zapis<T>::~Zapis(void) {}

	//Операция присвоения
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

	//Получить имя в записи
	template <class T>
	std::string Zapis<T>::GetName(void) const
	{ return Name; }

	//Получить значение
	template <class T>
	T Zapis<T>::GetValue(void) const
	{ return Value; }

	//Установить значение
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
	//Констрктор (-|-  по-умолчанию)
	MySteak<Typ>(int _size = 20): size(_size), count(0)
	{
		mem = new Typ[size];
	}

	//Констрктор копирования
	MySteak<Typ>(const MySteak<Typ> &tmp): size(tmp.size), count(tmp.count)
	{
		mem = new Typ[size];
		/**///Некоторые классы не поддерживают операцию присваивания или присваивание по индексу "[]"
		for(int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}

	//Деструктор
	~MySteak<Typ>(void)
	{
		delete []mem;
		mem = nullptr;
	}

	//Операция присваивания
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
			/**///Некоторые классы не поддерживают операцию присваивания или присваивание по индексу "[]"
			for(int i = 0; i < size; i++)
			{
				mem[i] = tmp.mem[i];
			}
		}

		return *this;
	}

	//Взять элемент
	Typ top(void)
	{
		return mem[--count];
	}

	//Положить элемент
	void push(const Typ tmp)
	{
		mem[count++] = tmp;
	}

	//Посмотреть элемент
	Typ pop(void) const
	{
		if(count <= size && count > 0) { return mem[count - 1]; }
		else { throw -1; }
	}

	//Провека на пустоту
	//Если == 0, то стек пуст
	int isEmpty(void) const
	{
		return count;
	}

	//Провека на полноту
	//Если == 0, то стек полный
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
	//Констрктор (-|-  по-умолчанию)
	MTablice<T>(int _size = 0): size(_size), count(0)
	{
		mem = new Zapis<T>[size];
		Zapis<T> nol;
		/**///Класс запись не должен менять имя посредством "=", что будет после заполнения таблицей записью типа: ("", 0.0)
		for(int i = 0; i < size; i++)
		{
			mem[i] = nol;
		}
	}

	//Констрктор копирования
	MTablice<T>(const MTablice<T> &tmp): size(tmp.size), count(tmp.count)
	{
		mem = new Zapis<T>[size];
		/**///Класс запись не должен менять имя посредством "=", что будет после заполнения таблицей записью типа: ("", 0.0)
		for(int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}

	//Деструктор
	~MTablice<T>(void)
	{
		delete []mem;
		mem = nullptr;
	}

	//Операция присваивания
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
			/**///Класс запись не должен менять имя посредством "=", что будет после заполнения таблицей записью типа: ("", 0.0)
			for(int i = 0; i < size; i++)
			{
				mem[i] = tmp.mem[i];
			}
		}

		return *this;
	}

	//Взятие по индексу
	Zapis<T> operator[](const int index) const
	{
		Zapis<T> rez;

		if((index > -1) && (index < count))
		{
			rez = mem[index];
		}
		return rez;
	}

	//Добавить в таблицу запись
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

	//Удалить запись
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

	//Поиск по имени
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

	//Проверка на пустоту
	//Если 0 - то пуст
	int isEmpty(void) const
	{
		return count;
	}

	//Проверка на переполнение
	//Если 0 - то места нет(Полный)
	int isFull(void) const
	{
		return (size - count);
	}

	//Посмотреть количество записей
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

	//Обработка левой скобки "("
	void work_left(void)
	{
		operacia.push(Zapis<int>("(", 0));
	}

	//Обработка правой скобки ")"
	void work_right(void)
	{
		while((operacia.isEmpty()) && (operacia.pop().GetName() != "("))
		{
			poliz[count++] = operacia.top().GetName();
		}
		if("(" == operacia.pop().GetName()) { operacia.top(); }
	}

	//Обработка переменной 
	//(если строка это переменная или константа)
	void work_var(std::string st)
	{
		poliz[count++] = st;
		char SerNum = st[0];
		if((SerNum >= '0') && (SerNum <= '9'))
		{//Если цифра
			tab_var.add(st, stod(st));
		}
		else
		{//если не цифра
			tab_var.add(st, 0);
		}
	}

	//Обработка оператора
	//(если строка - это какой-либо знак из "+ - * / ^" )
	void work_operat(Zapis<int> tmp)
	{
		while((operacia.isEmpty()) && (operacia.pop().GetValue() >= tmp.GetValue()))
		{
			poliz[count++] = operacia.top().GetName(); 
		}

		operacia.push(tmp);
	}

	//Создани польско-инвёстной записи
	//ОПЗ - обратная польская запись
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

	//Создание таблици операций с их приоритетами
	void make_tab_operacia(void)
	{
		tab_operc = MTablice<int>(6);
		tab_operc.add("+", 1);
		tab_operc.add("-", 1);
		tab_operc.add("*", 2);
		tab_operc.add("/", 2);
		tab_operc.add("^", 3);
	}

	//Выгрузка стека для создания ОПЗ
	//когда в стеке остались только операции
	void end_work(void)
	{
		while(operacia.isEmpty())
		{
			if(operacia.pop().GetName() != "(") { poliz[count++] = operacia.top().GetName(); }
			else { operacia.top(); }
		}
	}

public:
	//Констрктор (-|-  по-умолчанию)
	Pol(std::string st = ""): arifm(st)
	{
		make_tab_operacia();
		make_poliz();
	}

	//Констрктор копирования
	Pol(const Pol &tmp): arifm(tmp.arifm), operacia(tmp.operacia), tab_var(tmp.tab_var)
	{
		make_tab_operacia();
		make_poliz();
	}

	//Деструктор
	~Pol(void)
	{
		delete []poliz;
		poliz = nullptr;
		delete []w;
		w = nullptr;
	}

	//Операция присваивания
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

		//tab_var = tmp.tab_var; ///make_poliz() - Сделает таблицу переменных
		return *this;
	}

	//Взятие по индексу
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

	//Посмотреть количество элементов
	int getCount(void) const
	{
		return count;
	}

	//Посмотреть ПОЛИЗ
	std::string getPoliz(void) const
	{
		std::string str = "";
		for(int i = 0; i < count; i++)
		{
			str = str + poliz[i] + " ";
		}
		return str;
	}

	//Посмотреть таблицу переменных
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
	//Констрктор (-|-  по-умолчанию)
	ArithmExp(std::string st = "")
	{
		p = Pol(st);
		s = MySteak<double>(20);
	}
	//Констрктор копирования
	ArithmExp(const ArithmExp &tmp): p(tmp.p), s(tmp.s)
	{	}
	//Деструктор
	~ArithmExp(void){}

	//Операция присваивания
	ArithmExp& operator =(const ArithmExp &tmp)
	{
		p = tmp.p;
		s = tmp.s;

		return *this;
	}
	//Взятие по индексу
	Zapis<double> operator [](const int k)
	{
		return (p.getTablVar()[k]);
	}

	//Посмотреть ПОЛИЗ
	std::string getPoliz(void) const
	{
		return p.getPoliz();
	}
	//Показать количество переменных
	int getVarNumber(void)
	{
		return p.getTablVar().getCount();
	}
	//Посчитать выражение
	double calculate(void)
	{
		const int sizePol = p.getCount();//Для цикла for(размер "Pol p")
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

	//Установить значение по параметрам "Zapis<double> temp"
	void setValue(Zapis<double> tmp)
	{
		//Zapis<double> Temp = (p.getTablVar().search(tmp.GetName()));

		if((p.getTablVar().search(tmp.GetName())).GetName() != "")
		{
			p.getTablVar().add(tmp.GetName(), tmp.GetValue());
		}
	}

	//Установить значение по параметрам "Name_" и "Value_"
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

