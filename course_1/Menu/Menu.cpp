// MenuTest.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "string"
#include "conio.h"
#include "windows.h"

using namespace std;
#include "Procedur.h"
///		������� ������� ���������
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	const string Zn = " ,.!?:;";
	const string Last = ".!?";
	int Sum, N, *Arr, *A;
	int L, Min;
	int k;
	string *Name, NamePunkt[12], *Best, T;
	string Ctrl;
	string *Sp;
	int *Ch;
	int *Reit, m;
	int *SumM = 0, Np = 12;
	string St, *W;
	string *Line, *Tk;
	string PuN = "������ �����:\t";
	int answer;

	NamePunkt[0] = "����� �����                         ";
	NamePunkt[1] = "����� ��������                      ";
	NamePunkt[2] = "����� �� ���������� ���������       ";
	NamePunkt[3] = "�������� ����� ���������            ";
	NamePunkt[4] = "�������� ����� ���������            ";
	NamePunkt[5] = "������ ��� ����������               ";
	NamePunkt[6] = "������ � ���������                  ";
	NamePunkt[7] = "������ � �������� ���������������   ";
	NamePunkt[8] = "������� ������ �� �����             ";
	NamePunkt[9] = "������� ������ �� ����� �� �������  ";
	NamePunkt[10] = "������� ������� ����� �� �����������";
	NamePunkt[11] = "�����                               ";


	do
	{
		answer = MenuF(NamePunkt, Np);
		switch (answer)
		{
		case 0:
			{
				cout << PuN << NamePunkt[0] << endl << endl;
				//	1 - Fanction
				N = 0;
				do
				{
					cout << "����� ���������� ���������" << endl;
					cin >> N;
				}
				while (N <= 0);
				Arr = new int[N];
				cout << "\n����� ������" << endl;
				for (int i = 0; i < N; i++)
					cin >> Arr[i];
				//	����� ������� ������������ N �����
				Sum = Summa(Arr, N);
				//	1 - Fanction �����
				cout << "\n����� = " << Sum << endl;
				system("pause");
				break;
			}

		case 1:
			{
				cout << PuN << NamePunkt[1] << endl << endl;
				//	2 - Procedure
				N = 0;
				do
				{
					cout << "����� ���������� ���������" << endl;
					cin >> N;
				}
				while (N <= 0);
				A = new int[N];
				cout << "\n����� ��������" << endl;
				for (int i = 0; i < N; i++)
					cin >> A[i];
				//	����� ��������� ������ ������������ ��������
				Minimum(A, N, Min, L);
				//	2 - Procedure �����
				cout << "\n����������� ������� = " << Min << endl;
				cout << "��� � " << ++L << endl;
				system("pause");
				break;
			}

		case 2:
			{
				cout << PuN << NamePunkt[2] << endl << endl;
				// 3 - Procedure
				N = 0;
				do
				{
					cout << "����� ���������� ������" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N];
				Best = new string[N];
				cout << "\n����� ������" << endl;
				for (int i = 0; i < N; i++)
					cin >> Name[i];
				//	����� ��������� ��� ������� ������ 6 ��������
				MasMid(Name, N, Best, k);
				//	3 - Procedure �����
				cout << "\n������ ������ 6 ��������" << endl;
				for (int i = 0; i < k; i++)
					cout << Best[i] << endl;
				system("pause");
				break;
			}

		case 3:
			{
				cout << PuN << NamePunkt[3] << endl << endl;
				// 4 - Fanction
				N = 0;
				do
				{
					cout << "����� ���������� ������" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N];
				cout << "\n����� ������" << endl;
				for (int i = 0; i < N; i++)
					cin >> Name[i];
				cout << "\n����� ������� ��������" << endl;
				cin >> Ctrl;
				//	����� ������� ��������� ������ �������� � ������� ������ �������� ��������
				L = LinPos(Name, Ctrl, N);
				//	4 - Fanction �����
				cout << "\n����� �������� = " << L << endl;
				system("pause");
				break;
			}

		case 4:
			{
				cout << PuN << NamePunkt[4] << endl << endl;
				//	5 - Fanction 
				N = 0;
				do
				{
					cout << "����� ���������� ������" << endl;
					cin >> N;
				}
				while (N <= 0);
				Name = new string[N + 2];
				cout << "\n����� ������������� ������" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];
				cout << "\n����� ������� ��������" << endl;
				cin >> Ctrl;
				//	����� ������� ��������� ������ � ������� ������ ������ ��������
				L = BinarPos(Name, Ctrl, N);
				//	5 - Fanction �����
				cout << "\n����� �������� = " << L << endl;
				system("pause");
				break;
			}

		case 5:
			{
				cout << PuN << NamePunkt[5] << endl << endl;
				//	6 - Procedure
				N = 0;
				do
				{
					cout << "����� ����� ������" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				Ch = new int[10];
				cout << "\n����� ��������" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];

				Sp = new string[2 * N];
				//	����� ��������� ������� ��� ����������
				BestMass(Name, Sp, N, k);
				//	6 - Procedure �����
				cout << "\n������ ��� ����������:" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << endl;
				system("pause");
				break;
			}

		case 6:
			{
				cout << PuN << NamePunkt[6] << endl << endl;
				//	7 - Procedure
				N = 0;
				do
				{
					cout << "����� ����� ������" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				cout << "\n����� ��������" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i];
				Sp = new string[2 * N];
				Reit = new int[20];
				//	����� ��������� ������� � ���������
				MassReit(Name, Sp, Reit, N, k);
				//	7 - Procedure �����
				cout << "\n������ ��� ���������� � ����������" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << "\t\t" << Reit[i] << endl;
				system("pause");
				break;
			}

		case 7:
			{
				cout << PuN << NamePunkt[7] << endl << endl;
				//	8 - Procedure
				N = 0;
				do
				{
					cout << "����� ����� ������" << endl;
					cin >> N;
				}
				while(N <= 0);
				Name = new string[N];
				Ch = new int[N];
				cout << "\n����� �������� � � ��������������" << endl;
				for(int i = 0; i < N; i++)
					cin >> Name[i] >> Ch[i];
				Sp = new string[N];
				SumM = new int[N];
				//	����� ��������� ��������� ��������������
				MasHarSum(Name, Sp, SumM, N, k, Ch);
				//	8 - Procedure �����
				cout << "\n������ ��� ���������� � ���������������" << endl;
				for(int i = 0; i < k; i++)
					cout << Sp[i] << "\t\t" << SumM[i] << endl;
				system("pause");
				break;
			}

		case 8:
			{
				cout << PuN << NamePunkt[8] << endl << endl;
				//	9 - Procedure
				cout << "����� ������" << endl;
				getline(cin, St);
				T = St + " ";
				W = new string[St.length() / 2 + 2];
				//	����� ��������� ������� ������ �� �����
				MasToSlova(T, W, k);
				//	9 - Procedure �����
				cout << "\n����� ������:" << endl;
				for(int i = 0; i < k; i++)
					cout << W[i] << endl;
				system("pause");
				break;
			}

		case 9:
			{
				cout << PuN << NamePunkt[9] << endl << endl;
				//	10 - Procedure
				cout << "����� ������" << endl;
				getline(cin, St);
				St = St + " ";
				W = new string[St.length() / 2];
				//	����� ��������� ������� ������ �� ����� �� ������
				MasSoZnak(St, Zn, W, k);
				//	10 - Procedure �����
				cout << "\n����� ������" << endl;
				for (int i = 0; i < k; i++)
					cout << W[i] << endl;
				system("pause");
				break;
			}

		case 10:
			{
				cout << PuN << NamePunkt[10] << endl << endl;
				N = 0;
				do
				{
					cout << "����� ����� ����� � ������" << endl;
					cin >> N;
				}
				while(N <= 0);

				Tk = new string[N];
				Line = new string[3 * N];
				cin.ignore();
				cout << "\n����� �������� �����" << endl;
				for(int i = 0; i < N; i++)
					getline(cin, Tk[i]);
				//	����� ��������� ������� ������� ����� �� �����������
				OneIsMas(m, N, Last, Line, Tk);
				//	11 - Procedure �����
				cout << "\n����� �����" << endl;
				for (int i = 0; i < m; i++)
					cout << Line[i] << endl;
				system("pause");
				break;
			}

		default:
			{
				cout << "��������� ���������.\n" << endl;
				return 0;
			}
		}
	}
	while(11 != answer);
	system("pause");
	return 0;
}