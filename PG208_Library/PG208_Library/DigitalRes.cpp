#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "DigitalRes.h"

using namespace std;

DigitalRes::DigitalRes(void)
{
	_author = "NA";
	_fileType = "NA";
	_fileName = "NA";
	_URL = "NA";
	_byteSize = 0;
}


DigitalRes::~DigitalRes(void)
{
}


string DigitalRes::getAuthor()
{return _author;}

void DigitalRes::setAuthor(string newAuthor)
{_author = newAuthor;}


string DigitalRes::getFileType()
{return _fileType;}

void DigitalRes::setFileType(string newFileType)
{_fileType = newFileType;}


string DigitalRes::getFileName()
{return _fileName;}

void DigitalRes::setFileName(string newFileName)
{_fileName = newFileName;}


string DigitalRes::getURL()
{return _URL;}

void DigitalRes::setURL(string newURL)
{_URL = newURL;}


int DigitalRes::getByteSize()
{return _byteSize;}

void DigitalRes::setByteSize(int newByteSize)
{_byteSize = newByteSize;}


/*void DigitalRes::getData()
{
Article::getData();

cout << "File author: " << getAuthor() << endl;
cout << "File type: " << getFileType() << endl;
cout << "File name: " << getFileName() << endl;
cout << "File URL: " << getURL() << endl;
cout << "File size: " << getByteSize() << "bytes " << endl;

cout << "----------------------------------------" << endl;
}*/


/*bool DigitalRes::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_DIGITAL + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer) == 0)//If file exists
	{
		_ID = fileID;//Load ID

		ifstream myfile;
		string line;

		myfile.open(filePath);//open file
		getline(myfile, line);//store first line into "line"

		_title = stringToChar(line);//Load Title
		return true;//Load successful
	}
	else
		return false;//Load failed
}


bool DigitalRes::save()
{
	String ^ strIDFilePath = FILEPATH_DIGITAL + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer))//If file doesn't exist
	{
		ofstream myfile(filePath);
		
		myfile << _title << endl;		//save title
		myfile << _releaseDate << endl;	//save release date
		myfile << _qtyOwned << endl;	//save the Cheerleader
		myfile << _qtyLent << endl;		//save the World
		//Save other stuff
		myfile << _author << endl;
		myfile << _fileType << endl;
		myfile << _URL << endl;
		myfile << _byteSize << endl;
		myfile.close();

		return true;//Save successful
	}
	else
		return false;//Save failed
}*/