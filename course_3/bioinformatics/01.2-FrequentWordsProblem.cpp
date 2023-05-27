#include <iostream>
#include <string.h>

using namespace std;
string searchFrequentFordsLengthK(const string inpstr, const int countelements);
int main()
{
  int k;
  string inpstr, res;

  cout << "Vvedi ishodnuyu stroku" << endl;
  cin >> inpstr;

  cout << "Vvedi chislo" << endl;
  cin >> k;

  const int len = (int)(inpstr.length() / 2);

  res = searchFrequentFordsLengthK(inpstr, k);

  cout << res << endl;

  return 0;
}

string searchFrequentFordsLengthK(const string inpstr, const int countelements)
{
  const int leninpst = inpstr.length() - countelements + 1;
  int i = 1, j = 0, k = 0, flag = 0, *imas;
  string tmp = inpstr.substr(0, countelements), *stmas, outdata;

  imas = new int[leninpst - 1];
  stmas = new string[leninpst - 1];

  stmas[k] = tmp;
  imas[k++] = 1;

  while(i < leninpst)
  {
    tmp = inpstr.substr(i, countelements);
    j = 0;
    flag = 0;

    while(j < k && flag == 0)
    {
      if(tmp == stmas[j])
      {
        imas[j] = imas[j] + 1;
        flag = 1;
      }

      j++;
    }

    if(!flag)
    {
      stmas[k] = tmp;
      imas[k++] = 1;
    }


    i++;
  }

  i = 1;
  flag = imas[0];
  while(i < k)
  {
    if(flag < imas[i]) { flag = imas[i]; }

    i++;
  }

  i = 0;
  while(i < k)
  {
    if(flag == imas[i]) { outdata = stmas[i] + " " + outdata; }

    i++;
  }
  outdata.erase(outdata.length() - 1, 1);

  delete []imas;
  delete []stmas;

  return outdata;
}
