#include <iostream>
#include <string.h>

using namespace std;
int countOccurrencesOfPattern(const string inputString, const string strFind);
int main()
{
	string pattern, inpstr;
	int count = 0;

	cout << "Vvedi pattern poiska" << endl;
	cin >> pattern;

	cout << "Vvedi ishodnuyu stroku" << endl;
	cin >> inpstr;

	count = countOccurrencesOfPattern(inpstr, pattern);
      
	cout << count << endl;
    
	return 0;
}

int countOccurrencesOfPattern(const string inputString, const string strFind)
{
	string temp;
	int k = 0, i = 0;
	const int len = inputString.length();
	const int finelem = strFind.length();

	while(i < len - finelem + 1)
	{
		temp = inputString.substr(i, finelem);

		if(temp == strFind) {	++k;	}

		++i;
	}
    
    return k;
}
