<<<<<<< HEAD
#include "stdafx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "Book.h"
=======
#include "StdAfx.h"
>>>>>>> Origin/master

using namespace std;

Book::Book()
{
<<<<<<< HEAD
	_author = "NA";
	_publisher = "NA";
	_pages = 0;
	_isMagazine = 0;
=======
    _author = "NA";
    _publisher = "NA";
    _pages = 0;
//	_isMagazine = 0;
>>>>>>> Origin/master
	_synopsis = "Nothing special about this book so far...";
}

Book::~Book()
{
}


string Book::getAuthor()
{return _author;}

void Book::setAuthor(string newAuthor)
{_author = newAuthor;}


string Book::getPublisher()
{return _publisher;}

void Book::setPublisher(string newPublisher)
{_publisher = newPublisher;}


int Book::getPages()
{return _pages;}

void Book::setPages(int newPages)
{_pages = newPages;}

/*
string Book::getIsMagazine()
{if (_isMagazine)
return"Magazine";
else
	return"Book";
}

void Book::setIsMagazine(bool newIsMagazine)
{_isMagazine = newIsMagazine;}

void Book::setIsMagazine(string newIsMagazine)
{if (newIsMagazine == "Magazine")
_isMagazine = 1;
else if (newIsMagazine == "Book")
	_isMagazine = 0;
else
	cout << "error, please specify type Magazine or Book" << endl;
}
*/

string Book::getSynopsis()
{return _synopsis;}

void Book::setSynopsis(string newSynopsis)
{_synopsis = newSynopsis;}


void Book::getData()
{
	Article::getData();

	cout << "Author: " << getAuthor() << endl;
	cout << "Publisher: " << getPublisher() << endl;
	cout << "Pages: " << getPages() << endl;
<<<<<<< HEAD
	cout << "Type: " << getIsMagazine() << endl;

=======
	//cout << "Type: " << getIsMagazine() << endl;
		
>>>>>>> Origin/master
	cout << "----------------------------------------" << endl;
}
