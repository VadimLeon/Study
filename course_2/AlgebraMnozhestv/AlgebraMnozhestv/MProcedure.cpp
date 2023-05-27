#include <stdio.h>
#include <string>
#include "MProcedure.h"

void DivToString(int &n, std::string st, int *MRes)
{
	n = 0;
	std::string my_st = st + " ";

	while (my_st.length() > 0)
	{
		int L = my_st.find(" ");

		if (L > 0)
		{
			MRes[n] = stoi(my_st.substr(0, L));
			n = n + 1;
		}
		my_st.erase(0, ++L);
	}
}

void DelErrorString(std::string &str, int Max)
{
	int len = (str.length() + 4) / 2;
	int n = 0;
	std::string my_st = str + " ";
	std::string *MRes = new std::string[len];

	while (my_st.length() > 0)
	{
		int L = my_st.find(" ");

		if (L > 0)
		{
			MRes[n++] = my_st.substr(0, L);
		}
		my_st.erase(0, ++L);
	}

	if ("" == my_st) my_st = " ";

	for(int i = 0; i < n; i++)
	{
		int x = stoi(MRes[i]);

		if((x > 0) && (x <= Max))
		{
			my_st = my_st + MRes[i] + " ";
		}
	}
	my_st.erase(my_st.length() - 1, 1);

	str = my_st;
	delete[] MRes;
}
