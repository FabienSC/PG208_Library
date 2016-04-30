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


bool	Book::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

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



bool	Book::save()
{
	String ^ strIDFilePath = FILEPATH_BOOK + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer))//If file doesn't exist
	{
		ofstream myfile(filePath);
		
		myfile << _title << endl;//save title
		myfile << _releaseDate << endl;//save release date
		myfile.close();

		return true;//Save successful
	}
	else
		return false;//Save failed
}