#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
#include <string>
#include "TQueue.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int StringSeparation(string name, string *list);

string SystemToStd(String ^s);

void radSortStep(int *array, int step, int qNumb, DataGridView^ table);

void clearTable(DataGridView^ table);

string arrayToStr(int *array, int qArray);