#include <iostream>
#include <string>
#include "MyPolinom.h"


int main(void)
{
	system("color F0");
	setlocale(LC_ALL, "RUS");

	///Test MyMonom
	{
		std::cout << "Test MyMonom\n\r" << std::endl;
		////
		int n, max;
		std::string st = "";
		////
		std::cout << "����� ����� ���������� � ������������ ��������" << std::endl;
		std::cin >> n;
		std::cin >> max;
		////
		std::cout << "����� �����:\t" << std::endl;
		std::cin >> st;
		////
		Monom A(st, max, n);
		Monom C, T;
		C = A;
		{
			Monom B(A);
			////
			std::cout << "\n\r���������� ������ � = " << A.getA() << std::endl;
			std::cout << "������ ������ � = " << A.getSv() << std::endl;
			std::cout << "\n\r���������� ������ B = " << B.getA() << std::endl;
			std::cout << "������ ������ � = " << B.getSv() << std::endl;
			std::cout << "\n\r���������� ������ C = " << C.getA() << std::endl;
			std::cout << "������ ������ C = " << C.getSv() << std::endl;
			std::cout << "M���� A:\t" << A.monomTostring(max, n) << std::endl;
			std::cout << "M���� B:\t" << B.monomTostring(max, n) << std::endl;
			std::cout << "M���� C:\t" << C.monomTostring(max, n) << std::endl;
		}
		std::cout << "\n\r���� \"Monom <--> string\"" << std::endl;
		do
		{
			Monom T;
			////
			std::cout << "����� ����� T:\t" << std::endl;
			std::cin >> st;
			////
			T = Monom(st);
			////
			std::cout << "\n\r���������� ������ T = " << T.getA() << std::endl;
			std::cout << "������ ������ T = " << T.getSv() << std::endl;
			std::cout << "M���� T:\t" << T.monomTostring() << std::endl;
		} while (st != "0");
	}

	///Test CircList
	{
		std::cout << "\n\r\nTest CirclList\n\r" << std::endl;
		////
		Cirklist A, C;
		Monom t1("-3x0^9x2^3"), t3(-15, 130), t2(-9, 2035), t4("12x1^3x2^4x3");
		////
		A.addMonom(t1.getA(), t1.getSv());
		A.addMonom(t2.getA(), t2.getSv());
		std::cout << "A:\t" << A.CircToString(10, 4) << std::endl;
		////
		{
			Cirklist B(A);
			////
			std::cout << "B:\t" << B.CircToString(10, 4) << std::endl;
		}
		////
		C = A;
		std::cout << "C:\t" << C.CircToString(10, 4) << std::endl;
		C.addMonom(t3.getA(), t3.getSv());
		////
		Cirklist B;
		B = A + C;
		std::cout << "\n\rB = A + C + (-15x1x2^3)\n\rB:\t" << B.CircToString(10, 4) << std::endl;
		////
		A = C - B;
		std::cout << "\n\rA = C - B\n\rA:\t" << A.CircToString(10, 4) << std::endl;
		////
		////
		Cirklist D, R;
		D.addMonom(t4.getA(), t4.getSv());
		D.addMonom(t2.getA(), t2.getSv());
		D = D * 10;
		std::cout << "\n\rD * 10 =\t" << D.CircToString(10, 4) << std::endl;
		////
		Cirklist E;
		R = D;
		std::cout << "\n\rR = D:\t" << R.CircToString(10, 4) << std::endl;
		////
		E.addMonom(t1.getA(), t1.getSv());
		E.addMonom(t3.getA(), t3.getSv());
		std::cout << "E:\t" << E.CircToString(10, 4) << std::endl;
		std::cout << "D:\t" << D.CircToString(10, 4) << std::endl;
		R = E.mult(D, 10, 4);
		std::cout << "\n\rR = E * D:\t" << R.CircToString(10, 4) << std::endl;
		////
	}

	///Test Polinom
	{
		std::cout << "Test Polinom\n\r\n" << std::endl;
		////
		MyPolinom A;
		std::cout << "������� �:\t" << A.PolToString() << std::endl;
		////
		MyPolinom B("-3x0^8x1 -7x2^4x3^5 +6x0x1^2x2^3x3^2 +12x2^3x3^3 -85", 10, 5);
		std::cout << "������� B:\t" << B.PolToString() << std::endl;
		////
		{
			MyPolinom C(B);
			std::cout << "������� C(B):\t" << C.PolToString() << std::endl;
			////
			A = C;
		}
		std::cout << "������� �=C:\t" << A.PolToString() << std::endl;
		////
		////
		char err;
		////
		std::string ste = "94x0^5x1^3x3";
		A.addMonom(ste, 10, 5);
		std::cout << "������� � + (94x0^5x1^3x3):\t" << A.PolToString() << std::endl;
		////
		std::cout << "������ ������� (y/n)?  ";
		std::cin >> err;
		////
		while (err != 'n')
		{
			std::string strr = "";
			int MAXst, N;
			////
			std::cout << "����� ���������� ���������� � ������������ �������:  ";
			std::cin >> N >> MAXst;
			////
			std::cout << "\n\r����� ������� D:  ";
			std::cin.ignore();
			getline(std::cin, strr);
			////
			MyPolinom D(strr, MAXst, N);
			MyPolinom Res;
			////
			strr = "";
			std::cin.ignore();
			std::cout << "����� ������� E:  ";
			getline(std::cin, strr);
			////
			MyPolinom E(strr, MAXst, N);
			////
			std::cout << "\n\r������� D:  " << D.PolToString() << std::endl;
			std::cout << "������� E:  " << E.PolToString() << std::endl;
			////
			Res = D + E;
			std::cout << "\n\r������� D + E:  " << Res.PolToString() << std::endl;
			////
			Res = D - E;
			std::cout << "������� D - E:  " << Res.PolToString() << std::endl;
			////
			Res = D * E;
			std::cout << "������� D * E:  " << Res.PolToString() << std::endl;
			////
			////
			std::cout << "������ ������� (y/n)?  ";
			std::cin >> err;
		}
	}



	system("pause");
	return 0;
}