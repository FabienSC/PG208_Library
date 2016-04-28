#include "stdafx.h"

#include "Book.h"

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
	cout << "Type: " << getIsMagazine() << endl;

	cout << "----------------------------------------" << endl;
}


bool	Book::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	char* filePath = (char*)Marshal::StringToHGlobalAnsi(strIDFilePath).ToPointer();//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer) == 0)//If file exists
	{
		_ID = fileID;//Load ID

		ifstream myfile;
		string line;

		myfile.open(filePath);//open file
		getline(myfile, line);//store first line into "line"

		_title = (char*)line.c_str();//Load Title
		return true;//Load successful
	}
	else
		return false;//Load failed
}