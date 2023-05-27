#include "stdafx.h"

int MenuF(string *NamePunct, int Np);
int Summa(int *Arr, int N);
void Minimum(int *A, int N, int &Min, int &L);
void MasMid(string *Name, int N, string *Best, int &k);
int LinPos(string *Name, string Ctrl, int N);
int BinarPos(string *Name, string Ctrl, int N);
void BestMass(string *Name, string *Sp, int N, int &k);
void MassReit(string *Name, string *Sp, int *Reit, int N, int &k);
void MasHarSum(string *Name, string *Sp, int *SumM, int N, int &k, int *Ch);
void MasToSlova(string &T, string *W, int &k);
void MasSoZnak(string &St, string Znak, string *W, int &k);
void OneIsMas(int &m, int N, string Last, string *Line, string *Tk);