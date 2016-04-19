#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "paperCopy.h"

using namespace std;

paperCopy::paperCopy()
{
    _author = "NA";
    _publisher = "NA";
    _pages = 0;
	_isMagazine = 0;
}

paperCopy::~paperCopy()
{
}


string paperCopy::getAuthor()
{return _author;}

void paperCopy::setAuthor(std::string newAuthor)
{_author = newAuthor;}


std::string paperCopy::getPublisher()
{return _publisher;}

void paperCopy::setPublisher(std::string newPublisher)
{_publisher = newPublisher;}


int paperCopy::getPages()
{return _pages;}

void paperCopy::setPages(int newPages)
{_pages = newPages;}


string paperCopy::getIsMagazine()
{if (_isMagazine)
	return"Magazine";
else
	return"Book";}

void paperCopy::setIsMagazine(bool newIsMagazine)
{_isMagazine = newIsMagazine;}


void paperCopy::getData()
{
	getGeneralData();
	
	cout << "Author: " << getAuthor() << endl;
	cout << "Publisher: " << getPublisher() << endl;
	cout << "Pages: " << getPages() << endl;
	cout << "Type: " << getIsMagazine() << endl;
		
	cout << "----------------------------------------" << endl;
}

