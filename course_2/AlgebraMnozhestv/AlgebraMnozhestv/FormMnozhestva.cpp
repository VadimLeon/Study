#include "FormMnozhestva.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AlgebraMnozhestv::FormMnozhestva Form;
    Application::Run(%Form);
	return 0;
}