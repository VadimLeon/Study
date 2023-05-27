#include <iostream>

using namespace std;
unsigned long long int SubpeptidesCount(int numb);
int main()
{
    int count;
    
    cin >> count;
    cout << SubpeptidesCount(count);
    
    return 0;
}

unsigned long long int SubpeptidesCount(int numb)
{
	return ( numb * (numb - 1) );
}
