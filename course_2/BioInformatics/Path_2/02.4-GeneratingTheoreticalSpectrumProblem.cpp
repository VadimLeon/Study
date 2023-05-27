#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
unsigned int amonotoint(string inputstr);
unsigned int summiamin(string aminstr);

int main()
{
	string stramino, spektamin;

	cin >> stramino;

	int lenamino = stramino.length(), k, i;
	spektamin = stramino + stramino;
	vector<unsigned int> arres;

	arres.push_back(0);
	for(k = 1; k < lenamino; k++)
	{
		for(i = 0; i < lenamino; i++)
		{
			arres.push_back(summiamin(spektamin.substr(i, k)));
		}
	}
	arres.push_back(summiamin(stramino));

	sort(arres.begin(), arres.end());

	int lenresamin = arres.size();
	for(int m = 0; m < lenresamin; ++m)
	{
		cout << arres[m] << " ";
	}

	return 0;
}

unsigned int amonotoint(string stramino)
{
	unsigned int res = 0;

			 if(stramino == "G") { res = 57; }
	else if(stramino == "A") { res = 71; }
	else if(stramino == "S") { res = 87; }
	else if(stramino == "P") { res = 97; }
	else if(stramino == "V") { res = 99; }
	else if(stramino == "T") { res = 101; }
	else if(stramino == "C") { res = 103; }
	else if(stramino == "I") { res = 113; }
	else if(stramino == "L") { res = 113; }
	else if(stramino == "N") { res = 114; }
	else if(stramino == "D") { res = 115; }
	else if(stramino == "K") { res = 128; }
	else if(stramino == "Q") { res = 128; }
	else if(stramino == "E") { res = 129; }
	else if(stramino == "M") { res = 131; }
	else if(stramino == "H") { res = 137; }
	else if(stramino == "F") { res = 147; }
	else if(stramino == "R") { res = 156; }
	else if(stramino == "Y") { res = 163; }
	else if(stramino == "W") { res = 186; }

	return res;
}

unsigned int summiamin(string aminstr)
{
	unsigned int res = 0;
	int len = aminstr.length();
	
	for(int i = 0; i < len; ++i)
	{
		string tmp = "";
		tmp += aminstr[i];
		res += amonotoint(tmp);
	}
	return res;
}
