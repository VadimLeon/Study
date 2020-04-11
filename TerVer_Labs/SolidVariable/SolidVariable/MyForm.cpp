#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) 
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  SolidVariablek::MyForm form; 
  Application::Run(%form);
}
