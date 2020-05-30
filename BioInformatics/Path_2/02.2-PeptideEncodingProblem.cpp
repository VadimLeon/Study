#include <iostream>
#include <string.h>
#include <iostream>
#include <string>

#define COUNTRNA 3

using namespace std;
string AminoAcidFromDNA(string inputstr);
string ReverseComplement(string inpustr);
string dnainrna(string inpstr);

int main()
{
	string stdna, findRNA;
	string tmp, temp, stout = "";

	cin >> stdna >> findRNA;

	int lendna = stdna.length(), lenrnastr = findRNA.length(), k;

	for (int i = 0; i < 1 + lendna - COUNTRNA * lenrnastr; i++)
	{
		k = 0;
		tmp = "";

		while (k < COUNTRNA * lenrnastr)
		{
			tmp = tmp + stdna[i];
			++i;
			++k;
		}

		temp = dnainrna(tmp);
		if (AminoAcidFromDNA(temp) == findRNA)
		{
			stout = stout + tmp + '\n';
		}
		else
		{
			temp = ReverseComplement(tmp);

			if (AminoAcidFromDNA(temp) == findRNA)
			{
				stout = stout + tmp + '\n';
			}
		}

		i = i - COUNTRNA * lenrnastr;
	}

	stout.erase(stout.length() - 1, 1);

	cout << stout << endl;
	return 0;
}

string AminoAcidFromDNA(string inputstr)
{
	string res = "", tmp;
	int j = 0;
	int lenstr = inputstr.length();

	for (int i = 0; i < lenstr - 3; i++)
	{
		tmp = "";

		while (j < lenstr)
		{
			tmp = tmp + inputstr[j];
			++j;

			if (j % 3 == 0)
				break;
		}

		if ((tmp == "AAA") || (tmp == "AAG"))
			res += "K";
		else if ((tmp == "AAC") || (tmp == "AAU"))
			res += "N";
		else if ((tmp == "ACA") || (tmp == "ACC") || (tmp == "ACG") || (tmp == "ACU"))
			res += "T";
		else if ((tmp == "AGA") || (tmp == "AGG") || (tmp == "CGA") || (tmp == "CGC") || (tmp == "CGG") || (tmp == "CGU"))
			res += "R";
		else if ((tmp == "AGC") || (tmp == "AGU") || (tmp == "UCA") || (tmp == "UCC") || (tmp == "UCG") || (tmp == "UCU"))
			res += "S";
		else if ((tmp == "AUA") || (tmp == "AUC") || (tmp == "AUU"))
			res += "I";
		else if ((tmp == "AUG"))
			res += "M";
		else if ((tmp == "CAA") || (tmp == "CAG"))
			res += "Q";
		else if ((tmp == "CAC") || (tmp == "CAU"))
			res += "H";
		else if ((tmp == "CCA") || (tmp == "CCC") || (tmp == "CCG") || (tmp == "CCU"))
			res += "P";
		else if ((tmp == "CUA") || (tmp == "CUC") || (tmp == "CUG") || (tmp == "CUU") || (tmp == "UUA") || (tmp == "UUG"))
			res += "L";
		else if ((tmp == "GAA") || (tmp == "GAG"))
			res += "E";
		else if ((tmp == "GAC") || (tmp == "GAU"))
			res += "D";
		else if ((tmp == "GCA") || (tmp == "GCC") || (tmp == "GCG") || (tmp == "GCU"))
			res += "A";
		else if ((tmp == "GGA") || (tmp == "GGC") || (tmp == "GGG") || (tmp == "GGU"))
			res += "G";
		else if ((tmp == "GUA") || (tmp == "GUC") || (tmp == "GUG") || (tmp == "GUU"))
			res += "V";
		else if ((tmp == "UAC") || (tmp == "UAU"))
			res += "Y";
		else if ((tmp == "UGC") || (tmp == "UGU"))
			res += "C";
		else if ((tmp == "UGG"))
			res += "W";
		else if ((tmp == "UUU") || (tmp == "UUC"))
			res += "F";
		else if ((tmp == "UAA") || (tmp == "UAG") || (tmp == "UGA"))
			break;
	}
	return res;
}

string ReverseComplement(string inputst)
{
	string res;
	int len = inputst.length(), i = len - 1, j = 0;

	while(i > -1) { res = res + inputst[i]; --i;}

	i = 0;
	while(i < len)
	{
				 if('A' == res[i]) { res[i] = 'U'; }
		else if('C' == res[i]) { res[i] = 'G'; }
		else if('G' == res[i]) { res[i] = 'C'; }
		else if('T' == res[i]) { res[i] = 'A'; }

		++i;
	}

	return res;
}

string dnainrna(string inpstr)
{
	int len = inpstr.length();

	for (int i = 0; i < len; ++i)
	{
		if ('T' == inpstr[i]) { inpstr[i] = 'U'; }
	}

	return inpstr;
}
