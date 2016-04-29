#include "stdafx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "Book.h"

using namespace std;

Book::Book()
{
	_author = "NA";
	_publisher = "NA";
	_pages = 0;
	_isMagazine = 0;
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


string Book::getSynopsis()
{return _synopsis;}

void Book::setSynopsis(string newSynopsis)
{_synopsis = newSynopsis;}


string Book::getIsMagazine()
{if (_isMagazine)
	return " Magazine ";
else
	return " Book ";
}


void Book::getData()
{
	Article::getData();

	cout << "Author: " << getAuthor() << endl;
	cout << "Publisher: " << getPublisher() << endl;
	cout << "Pages: " << getPages() << endl;
	cout << "Type: " << getIsMagazine() << endl;

	cout << "----------------------------------------" << endl;
}
