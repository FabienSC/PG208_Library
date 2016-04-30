#include "stdafx.h"
#include "conversion.h"

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