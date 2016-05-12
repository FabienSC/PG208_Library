#pragma once

char *	managedStringToChar(String^);
char *	stringToChar(string);
char *	intToChar(int);

int		managedStringToInt(String^);
int		stringToInt(string);

String ^ intToManagedString(int);
String ^ charToManagedString(char*);

string  charToString(char*);

String ^ stringToManagedString(string);
string  managedStringToString(String ^);


void	AddLine( FileStream^ , String^ );
String^ readData(StreamReader^);