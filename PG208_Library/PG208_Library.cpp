// PG208_Library.cpp : main project file.

#include "stdafx.h"
#include "FormLogOn.h"

using namespace PG208_Library;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew FormLogOn());
	return 0;
}
