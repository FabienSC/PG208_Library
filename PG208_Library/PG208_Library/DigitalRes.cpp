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


void DigitalRes::getData()
{
Article::getData();

cout << "File author: " << getAuthor() << endl;
cout << "File type: " << getFileType() << endl;
cout << "File name: " << getFileName() << endl;
cout << "File URL: " << getURL() << endl;
cout << "File size: " << getByteSize() << "bytes " << endl;

cout << "----------------------------------------" << endl;
}