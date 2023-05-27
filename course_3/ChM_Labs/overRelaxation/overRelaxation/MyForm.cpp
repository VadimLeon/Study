#include "MyForm.h"

#include "SimpleIteration.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ arg)
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  overRelaxation::MyForm form;
  Application::Run(%form);

  return 0;
}
