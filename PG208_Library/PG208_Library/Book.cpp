#include "stdafx.h"

#include "Book.h"

Book::Book()
{
	_author = "NA";
	_publisher = "NA";
	_synopsis = "NA";//thing special about this book so far...";//too big, causes a crash
	_pages = 0;
	_isMagazine = 0;
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
{
	if (newIsMagazine == "Magazine")
		_isMagazine = 1;
	else if (newIsMagazine == "Book")
		_isMagazine = 0;
	else
		cout << "error, please specify type Magazine or Book" << endl;
}


string Book::getSummary()
{return _synopsis;}

void Book::setSummary(string newSummary)
{_synopsis = newSummary;}


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
	String ^ strIDFilePath;
	if(fileID < BASE_MAGAZINE_ID)
		strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else
		strIDFilePath = FILEPATH_MAGAZINE + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer) == 0)//If file exists
	{
		_ID = fileID;//Load ID

		ifstream myfile;
		string line;

		myfile.open(filePath);//open file

		getline(myfile, line);//store first line into "line"
		_title = line;//Load Title
		
		getline(myfile, line);//store first line into "line"
		_releaseDate = stringToInt(line);//Load
		
		getline(myfile, line);//store first line into "line"
		_qtyOwned = stringToInt(line);//Load

		myfile.close();
		return true;//Load successful
	}
	else
		return false;//Load failed
}



bool	Book::save()
{
	String ^ strIDFilePath;
	if (_isMagazine)	//DVD
		strIDFilePath = FILEPATH_MAGAZINE + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else		//VHS
		strIDFilePath = FILEPATH_BOOK + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

		ofstream myfile(filePath);

		myfile << _title << endl;		//save title
		myfile << _releaseDate << endl;	//save release date
		myfile << _qtyOwned << endl;	//save the Cheerleader
		myfile << _qtyLent << endl;		//save the World
		//Save other stuff
		myfile << _author << endl;
		myfile << _publisher << endl;
		myfile << _synopsis << endl;
		myfile << _pages;

		myfile.close();

		return true;//Save successful
}