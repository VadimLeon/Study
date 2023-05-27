#include "Polinom.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


int mainFORM(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Polinom::Polinom Form;
	Application::Run(%Form);
	return 0;
}