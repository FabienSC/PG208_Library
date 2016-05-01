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
	return managedStringToChar(conversionString);
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