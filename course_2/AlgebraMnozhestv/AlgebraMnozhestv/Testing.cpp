//#include "stdafx.h"
//#include "targetver.h"
#include "TBitField.h"
//#include <iostream>

int main_test()
{
	TBitField A(17), B(A), E;
	TBitField C(35);

	for(int i = 0; i < 1; i++)
	{
		TBitField D(7);
		C = D;
		D = E;
	}
	E = B;
	return 0;
}
