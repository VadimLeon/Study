#include "FormToSteak.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
	ArithmeticExprwssions::FormToSteak Form;
    Application::Run(%Form);
	return 0;
}