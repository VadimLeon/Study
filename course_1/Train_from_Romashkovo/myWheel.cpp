#include "myWheel.h"
#include <Windows.h>

#pragma comment(lib, "Opengl32.lib")
#include <gl/GL.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args)
{    
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Test_OOP::myWheel Form;    
	Application::Run(%Form); 
	return 0;
}