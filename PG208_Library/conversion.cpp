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
	//return (char*)inputString.c_str();//doesn't work
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
	return charToManagedString(stringToChar(inputString.c_str()));
}


string  managedStringToString(String ^ inputString)
{
	string ooo = charToString(managedStringToChar(inputString));
	return ooo;
}


void AddLine( FileStream^ fs, String^ value )
{
	array<Byte>^info = (gcnew UTF8Encoding( true ))->GetBytes( value + "\n" + "###\n" );//mark the start of each piece of data with a "###"line 
	fs->Write( info, 0, info->Length );
}

String^ readData(StreamReader^ sr)
{
	String^ returnString = "";
	String^ readString = sr->ReadLine();
	bool multiLine = false;
	while(readString != "###")
	{
		if(multiLine)
			returnString = returnString + "\n";//add '\n's before each extra line
		else
			multiLine = true;//String has at least one line

		returnString = returnString + readString;//append read String^

		readString = sr->ReadLine();
	}
	return returnString;
}