#include "stdafx.h"
#include "string"

void StrtoMas(std::string &St, std::string *W, int &k)
{
	const std::string Zn = " +-";

	int Cn = St.length();
	int m = Zn.length();
	k = 0;

	for (int i = 0; i < Cn; i++)
	{
		int L = Zn.find(St[i]);

		if ((L > m) || (L < 0))
		{
			W[k] = W[k] + St[i];
		}
		else
		{
			if (St[i] == Zn[0])
			{
				if (W[k] != "")
				{
					if ((W[k] != "+") && (W[k] != "-"))
						W[++k] = "";
				}
			}
			else
			{
				if (W[k] != "")
					k++;

				W[k] = St[i];
			}
		}
	}
};