#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "NumericRes.h"

using namespace std;

NumericRes::NumericRes(void)
{
	_author = "NA";
	_fileType = "NA";
	_fileName = "NA";
	_URL = "NA";
	_byteSize = 0;
}


NumericRes::~NumericRes(void)
{
}


string NumericRes::getAuthor()
{return _author;}

void NumericRes::setAuthor(string newAuthor)
{_author = newAuthor;}


string NumericRes::getFileType()
{return _fileType;}

void NumericRes::setFileType(string newFileType)
{_fileType = newFileType;}


string NumericRes::getFileName()
{return _fileName;}

void NumericRes::setFileName(string newFileName)
{_fileName = newFileName;}


string NumericRes::getURL()
{return _URL;}

void NumericRes::setURL(string newURL)
{_URL = newURL;}


int NumericRes::getByteSize()
{return _byteSize;}

void NumericRes::setByteSize(int newByteSize)
{_byteSize = newByteSize;}


void NumericRes::getData()
{
getGeneralData();

cout << "File author: " << getAuthor() << endl;
cout << "File type: " << getFileType() << endl;
cout << "File name: " << getFileName() << endl;
cout << "File URL: " << getURL() << endl;
cout << "File size: " << getByteSize() << "bytes " << endl;

cout << "----------------------------------------" << endl;
}