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
	//	_fileName = "NA";
	_URL = "NA";
	_byteSize = 0;
}


DigitalRes::~DigitalRes(void)
{
}


String^ DigitalRes::getAuthor()
{return _author;}

void DigitalRes::setAuthor(String^ newAuthor)
{_author = newAuthor;}


String^ DigitalRes::getFileType()
{return _fileType;}

void DigitalRes::setFileType(String^ newFileType)
{_fileType = newFileType;}

/*
String^ DigitalRes::getFileName()
{return _fileName;}

void DigitalRes::setFileName(String^ newFileName)
{_fileName = newFileName;}
*/

String^ DigitalRes::getURL()
{return _URL;}

void DigitalRes::setURL(String^ newURL)
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


bool DigitalRes::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_DIGITAL + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	if(File::Exists( strIDFilePath ))
	{
		_ID = fileID;//Load ID

		StreamReader^ sr = File::OpenText( strIDFilePath );
		try
		{
			_title = readData(sr);
			_releaseDate = managedStringToInt(readData(sr));
			_quantity = managedStringToInt(readData(sr));
			_qtyLent = managedStringToInt(readData(sr));

			_author = readData(sr);
			_fileType = readData(sr);
			_URL = readData(sr);
			_byteSize = managedStringToInt(readData(sr));
		}
		finally//make sure to close file
		{
			if ( sr )
				delete (IDisposable^)sr;
		}

		return true;//Load successful
	}
	else
		return false;//Load failed
}



bool DigitalRes::save()
{
	String ^ strIDFilePath = FILEPATH_DIGITAL + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strIDFilePath );
	try
	{
		AddLine( fs, _title );								//save title
		AddLine( fs, intToManagedString(_releaseDate) );	//save release date
		AddLine( fs, intToManagedString(_quantity) );		//save the cheerleader
		AddLine( fs, intToManagedString(_qtyLent) );		//save the World
		AddLine( fs, _author );
		AddLine( fs, _fileType );
		AddLine( fs, _URL );
		AddLine( fs, intToManagedString(_byteSize) );
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}

