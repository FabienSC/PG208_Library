#include "stdafx.h"
#include "conversion.h"

#include <exception>

char * managedStringToChar(String^ inputString)
{
	return (char*)Marshal::StringToHGlobalAnsi(inputString).ToPointer();
}


char * stringToChar(string inputString)
{
	char * outputChar = new char;
	strcpy(outputChar, (char*)inputString.c_str());
	return outputChar;
}


char * intToChar(int inputInt)
{
	String^ conversionString = "" + inputInt;
	return (char*)Marshal::StringToHGlobalAnsi(conversionString).ToPointer();
}


int	stringToInt(string inputString)
{
	return stoi(inputString, nullptr, 10);
}


int managedStringToInt(String^ inputString)
{
	int outputInt;
	try
	{
		outputInt = System::Convert::ToInt32(inputString);
	}
	catch (FormatException ^)//if string is not a number
	{
		popup("Epic Fail","numbers only please");
		return 0;
	}
	return outputInt;
}

String ^ intToManagedString(int inputInt)
{
	return "" + inputInt;
}

String ^ charToManagedString(char* inputChar)
{
	return gcnew String(inputChar);
}

string charToString(char* inputChar)
{
	string s(inputChar);
	return s;
}


String ^ stringToManagedString(string inputString)
{
	return charToManagedString(stringToChar(inputString));
}


string  managedStringToString(String ^ inputString)
{
	string ooo = charToString(managedStringToChar(inputString));
	return ooo;
}

char *	managedStringToChar(String^);
char *	stringToChar(string);
char *	intToChar(int);

int		managedStringToInt(String^);
int		stringToInt(string);

String ^ intToManagedString(int);
String ^ charToManagedString(char*);

string  charToString(char*);