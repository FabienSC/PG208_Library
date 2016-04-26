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
	_synopsis = "Nothing special about this book so far...";
}

paperCopy::~paperCopy()
{
}


string paperCopy::getAuthor()
{return _author;}

void paperCopy::setAuthor(string newAuthor)
{_author = newAuthor;}


string paperCopy::getPublisher()
{return _publisher;}

void paperCopy::setPublisher(string newPublisher)
{_publisher = newPublisher;}


int paperCopy::getPages()
{return _pages;}

void paperCopy::setPages(int newPages)
{_pages = newPages;}


string paperCopy::getIsMagazine()
{if (_isMagazine)
	return"Magazine";
else
	return"Book";
}

void paperCopy::setIsMagazine(bool newIsMagazine)
{_isMagazine = newIsMagazine;}

void paperCopy::setIsMagazine(string newIsMagazine)
{if (newIsMagazine == "Magazine")
	_isMagazine = 1;
else if (newIsMagazine == "Book")
	_isMagazine = 0;
else
	cout << "error, please specify type Magazine or Book" << endl;
}


string paperCopy::getSynopsis()
{return _synopsis;}

void paperCopy::setSynopsis(string newSynopsis)
{_synopsis = newSynopsis;}


void paperCopy::getData()
{
	Article::getData();
	
	cout << "Author: " << getAuthor() << endl;
	cout << "Publisher: " << getPublisher() << endl;
	cout << "Pages: " << getPages() << endl;
	cout << "Type: " << getIsMagazine() << endl;
		
	cout << "----------------------------------------" << endl;
}

