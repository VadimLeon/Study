#include "Sort.h"

void strToMass(std::string arif, std::string ZnakRazdel, std::string *rezt, int &ki)
{
	std::string Stok = arif + " ";
	int Cn = Stok.length();
	int m = ZnakRazdel.length();
	ki = 0;

	for (int i = 0; i < Cn; i++)
	{
		int L = ZnakRazdel.find(Stok[i]);

		if ((L > m) || (L < 0))
		{ rezt[ki] = rezt[ki] + Stok[i]; }
		else
			if (Stok[i] == ZnakRazdel[0])
			{
				if (rezt[ki] != "")
				{ rezt[++ki] = ""; }
			}
			else
			{
				if (rezt[ki] != "") 
				{ ki++; }

				rezt[ki] = Stok[i];
				rezt[++ki] = "";
			}
	}
}

