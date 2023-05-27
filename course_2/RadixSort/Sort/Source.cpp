#include "Source.h"

int StringSeparation(string name, string *list) //разделение строки
{
	int k = 0;
	while (name.length() > 0)
	{
		int pos = name.find(" ");
		if (pos > 0) list[k++] = name.substr(0, pos);  //str.substr(pos,n) - возвращает n символов строки str начиная с позиции pos
		name.erase(0, pos + 1); //Процедура erase удаляет из строки последовательность символ заданной длины, начиная с указанной позиции.
	}
	return k;
}

string SystemToStd(String ^s)
{
	using namespace Runtime::InteropServices;
	const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	return string(ptr);
}

void radSortStep(int *array, int step, int qNumb, DataGridView^ table)
{
	TQueue queue[10];
	int n = 0;
	for (int i = 0; i < qNumb; i++)
	{
		int item = 0;
		int tmp = array[i];
		for (int j = 0; j < step; j++)
		{
			item = tmp % 10;
			tmp = tmp / 10;
		}
		queue[item].Add(array[i]);
		table[item, queue[item].getCount() - 1]->Value = array[i];
	}
	for (int i = 0; i < 10; i++)
	{
		while (queue[i].isEmpty() != 1)
		{
			array[n++] = queue[i].Del();
		}
	}
}

void clearTable(DataGridView^ table) //очистка таблицы
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			table[i, j]->Value = "";
		}
	}
}

string arrayToStr(int *array, int qArray)  //перевод массива в строку
{
	string str = "";
	for (int i = 0; i < qArray; i++)
	{
		str += to_string(array[i]);
		str += " ";
	}
	return str;
}