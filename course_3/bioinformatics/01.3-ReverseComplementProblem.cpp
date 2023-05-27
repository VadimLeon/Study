#include <iostream>
#include <string.h>
#include <string>

#define MAXNUMBER 3

using namespace std;
string ReverseComplement(const string inputst);
int main()
{
  string inputstr;
  string outrevstr;

  cout << "Vvedi ishodnuyu stroku" << endl;
  cin >> inputstr;

  outrevstr = ReverseComplement(inputstr);

  cout << outrevstr << endl;

  return 0;
}

string ReverseComplement(const string inputst)
{
  const string sootvetstvie = "ACGT";
  string rez;
  const int lenstrin = inputst.length();
  char *res = new char[lenstrin];
  int i = lenstrin - 1, j = 0, k = 0, flag = 1;

  while(i > -1)
  {
    flag = 1;
    j = 0;

    while(flag)
    {
      if(inputst[i] == sootvetstvie[j])
      {
        res[k++] = sootvetstvie[MAXNUMBER - j];
      
        flag = 0;
      }

      j++;
    }

    i--;
  }

  rez = res;


  delete []res;
  return rez;
}
