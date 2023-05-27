#include "Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Sort::SortForm form;

	Application::Run(%form);
}