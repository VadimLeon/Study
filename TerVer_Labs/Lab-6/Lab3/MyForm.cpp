#include"MyForm.h"
//#include <string.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(cli::array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3::MyForm form;
	Application::Run(%form);

	
}