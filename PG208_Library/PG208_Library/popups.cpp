#include "StdAfx.h"
#include "popups.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace std;

void popup(char* title, char* message)
{
	String^ strMessage = gcnew String(message);// ^ specifies a tracking handle
	String^ strTitle = gcnew String(title); // String is a managed class
	MessageBox::Show(strMessage, strTitle, MessageBoxButtons::OK);
}

void popup(char* title, int message)
{
	popup(title, intToChar(message));
}

void popup(char* title, string message)
{
	popup(title, stringToChar(message));
}

void popup(char* title, String ^ message)
{
	popup(title, managedStringToChar(message));
}