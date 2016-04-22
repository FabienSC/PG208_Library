#include "stdafx.h"
#include "Library.h"

using namespace std;
using namespace System::Runtime::InteropServices;
using namespace System;

Library::Library(void)
{
	//reset variables
	_numberOfBooks = 0;
	_numberOfCDs = 0;

	//temporary variables
	String ^ strIDFilePath;
	char *filePath;
	ifstream myfile;
	string line;

	for(int fileID = BASE_BOOK_ID; fileID < BASE_CD_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Articles/Books/1234.txt
		filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
		myfile.open(filePath);//open file
		if(getline(myfile, line))//get 1st line and check if line exists
			_numberOfBooks++;//file is valid => count it as a book
		myfile.close();//close file so it can be opened again with a new path
	}

	for(int fileID = BASE_CD_ID; fileID < 4000; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Articles/CDs/3210.txt
		filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert string
		myfile.open(filePath);//open file
		if(getline(myfile, line))//get 1st line and check if line exists
			_numberOfCDs++;//file is valid => count it as a book
		myfile.close();//close file so it can be opened again with a new path
	}

	saveData();//save data to data.txt needed? jst for reference?
}

int Library::getNumberOfBooks()
{
	return _numberOfBooks;
}

int Library::getNumberOfCDs()
{
	return _numberOfCDs;
}

void Library::addBook()
{
	_numberOfBooks++;//add book
	saveData();//save changes & rewrite other data
}

void Library::removeBook()
{
	_numberOfBooks--;//remove book
	saveData();//save changes & rewrite other data
}

void Library::addCD()
{
	_numberOfCDs++;//add book
	saveData();//save changes & rewrite other data
}

void Library::removeCD()
{
	_numberOfCDs--;//remove book
	saveData();//save changes & rewrite other data
}


void Library::saveData()//Write data to file
{
	ofstream myfile;
	myfile.open("Library/Data.txt");
	myfile << _numberOfBooks;
	myfile << "\n";
	myfile << _numberOfCDs;
	myfile.close();
}