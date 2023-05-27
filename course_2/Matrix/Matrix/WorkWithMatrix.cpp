#include "WorkWithMatrix.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int _tmain(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
	Matrix::WorkWithMatrix Form;
    Application::Run(%Form);
	return 0;
}