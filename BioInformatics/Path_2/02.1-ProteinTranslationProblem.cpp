#include <iostream>
#include <string.h>

#define COUNTRNA 3
using namespace std;
string AminoAcidFromDNA(const string inpstr, const string* RNA, const char* AminoAcid);
int main()
{
	string PatternRNA[] = {"AAA", "AAC", "AAG", "AAU", "ACA", "ACC", "ACG", "ACU", "AGA", "AGC", "AGG", "AGU", "AUA", "AUC", "AUG", "AUU", "CAA", "CAC", "CAG", "CAU", "CCA", "CCC", "CCG", "CCU", "CGA", "CGC", "CGG", "CGU", "CUA", "CUC", "CUG", "CUU", "GAA", "GAC", "GAG", "GAU", "GCA", "GCC", "GCG", "GCU", "GGA", "GGC", "GGG", "GGU", "GUA", "GUC", "GUG", "GUU", "UAA", "UAC", "UAG", "UAU", "UCA", "UCC", "UCG", "UCU", "UGA", "UGC", "UGG", "UGU", "UUA", "UUC", "UUG", "UUU"};
	char AminoPiptidtr[] = {'K', 'N', 'K', 'N', 'T', 'T', 'T', 'T', 'R', 'S', 'R', 'S', 'I', 'I', 'M', 'I', 'Q', 'H', 'Q', 'H', 'P', 'P', 'P', 'P', 'R', 'R', 'R', 'R', 'L', 'L', 'L', 'L', 'E', 'D', 'E', 'D', 'A', 'A', 'A', 'A',
'G', 'G', 'G', 'G', 'V', 'V', 'V', 'V', '\0', 'Y', '\0', 'Y', 'S', 'S', 'S', 'S', '\0', 'C', 'W', 'C', 'L', 'F', 'L' ,'F'};
	string input, out;

	cin >> input;

	out = AminoAcidFromDNA(input, PatternRNA, AminoPiptidtr);

	cout << out << endl;

	return 0;
}

string AminoAcidFromDNA(const string inpstr, const string* DNA, const char* AminoAcid)
{
	int i = 0, j = 0, maxRNA, maxinp = inpstr.length() - 1, flag = 0;
	string translateRNAToAminoAcid, tmp;
	maxRNA = (int)(sizeof(DNA)/sizeof(DNA[0]));

	while(i < maxinp)
	{
		flag = 0;
		j = 0;
		tmp = inpstr.substr(i, COUNTRNA);

		while(j < maxRNA || !flag)
		{
			if(tmp == DNA[j])
			{
				translateRNAToAminoAcid = translateRNAToAminoAcid + AminoAcid[j];
				flag = 1;
			}

			j++;
		}

		i = i + COUNTRNA;
	}


  return translateRNAToAminoAcid;
}

