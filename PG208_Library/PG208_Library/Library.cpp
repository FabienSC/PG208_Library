#include "stdafx.h"
#include "Library.h"

using namespace std;
using namespace System::Runtime::InteropServices;
using namespace System;

Library::Library(void)//go through all folders to count the number of articles (More accurate than just reading the data file)
{
	//reset variables
	_numberOfBooks		= 0;
	_numberOfMagazines	= 0;
	_numberOfCDs		= 0;
	_numberOfDVDs		= 0;
	_numberOfVHSs		= 0;
	_numberOfDigitalResources = 0;

	//temporary variables
	String ^ strIDFilePath;
	char *filePath;
	struct stat buffer;

	for(int fileID = BASE_BOOK_ID; fileID < BASE_MAGAZINE_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfBooks++;
	}

	for(int fileID = BASE_MAGAZINE_ID; fileID < BASE_CD_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_MAGAZINE + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfMagazines++;
	}

	for(int fileID = BASE_CD_ID; fileID < BASE_DVD_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfCDs++;//file is valid => count it as a book
	}

	for(int fileID = BASE_DVD_ID; fileID < BASE_VHS_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_DVD + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfDVDs++;//file is valid => count it as a book
	}
	
	for(int fileID = BASE_VHS_ID; fileID < BASE_DIGITAL_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_VHS + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfVHSs++;//file is valid => count it as a book
	}
	
	for(int fileID = BASE_DIGITAL_ID; fileID < BASE_MAX_ID; fileID++)//update file ID
	{
		strIDFilePath = FILEPATH_DIGITAL + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		filePath = managedStringToChar(strIDFilePath);//convert to char*

		if(stat (filePath, &buffer) == 0)//If file exists
			_numberOfDigitalResources++;//file is valid => count it as a book
	}

	saveData();//save data to data.txt needed? jst for reference?
}

int Library::getNumberOfAll()
{	return (_numberOfBooks + _numberOfCDs + _numberOfMagazines);}

int Library::getNumberOfBooks()
{	return _numberOfBooks;}

int Library::getNumberOfMagazines()
{	return _numberOfMagazines;}

int Library::getNumberOfCDs()
{	return _numberOfCDs;}

int Library::getNumberOfDVDs()
{	return _numberOfDVDs;}

int Library::getNumberOfVHSs()
{	return _numberOfVHSs;}

int Library::getNumberOfDigitalResources()
{	return _numberOfDigitalResources;}

/*void Library::addBook()
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
*/

void Library::saveData()//Write data to file. useless?
{
	ofstream myfile;
	myfile.open("Library/Data.txt");
	myfile << _numberOfBooks;
	myfile << "\n";
	myfile << _numberOfCDs;
	myfile.close();
}