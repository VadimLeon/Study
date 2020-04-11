#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int mainTryst(array<String^>^ arg)
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  SolidVariable::MyForm form2;
  Application::Run(%form2);

  return 0;
}