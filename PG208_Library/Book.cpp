#include "stdafx.h"

#include "Book.h"

Book::Book()
{
	_author = "NA";
	_publisher = "NA";
	_synopsis = "NA";//"nothing special about this book so far...";//too big, causes a crash
	_pages = 0;
	_isMagazine = 0;
}

Book::~Book()
{
}


String^ Book::getAuthor()
{return _author;}

void Book::setAuthor(String^ newAuthor)
{_author = newAuthor;}


String^ Book::getPublisher()
{return _publisher;}

void Book::setPublisher(String^ newPublisher)
{_publisher = newPublisher;}


int Book::getPages()
{return _pages;}

void Book::setPages(int newPages)
{_pages = newPages;}


String^ Book::getIsMagazine()
{if (_isMagazine)
return"Magazine";
else
	return"Book";
}

void Book::setIsMagazine(bool newIsMagazine)
{_isMagazine = newIsMagazine;}

void Book::setIsMagazine(String^ newIsMagazine)
{
	if (newIsMagazine == "Magazine")
		_isMagazine = 1;
	else if (newIsMagazine == "Book")
		_isMagazine = 0;
	else
		cout << "error, please specify type Magazine or Book" << endl;
}


String^ Book::getSummary()
{return _publisher;}

void Book::setSummary(String^ newSummary)
{_synopsis = newSummary;}


/*void Book::getData()
{
Article::getData();

cout << "Author: " << getAuthor() << endl;
cout << "Publisher: " << getPublisher() << endl;
cout << "Pages: " << getPages() << endl;
cout << "Type: " << getIsMagazine() << endl;
if(!_isMagazine)
cout << "----------------------------------------" << endl;
}*/


bool Book::load(int fileID)
{

	String ^ strIDFilePath;
	if(fileID < BASE_MAGAZINE_ID)
		strIDFilePath = FILEPATH_BOOK + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else
		strIDFilePath = FILEPATH_MAGAZINE + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt


	if(File::Exists( strIDFilePath ))
	{
		_ID = fileID;//Load ID

		StreamReader^ sr = File::OpenText( strIDFilePath );
		try
		{
			_title = readData(sr);
			_releaseDate = managedStringToInt(readData(sr));
			_qtyOwned = managedStringToInt(readData(sr));
			_qtyLent = managedStringToInt(readData(sr));

			_author = readData(sr);
			_publisher = readData(sr);
			_synopsis = readData(sr);
			_pages = managedStringToInt(readData(sr));
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



bool	Book::save()
{
	String ^ strIDFilePath;
	if (_isMagazine)
		strIDFilePath = FILEPATH_MAGAZINE + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else
		strIDFilePath = FILEPATH_BOOK + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strIDFilePath );
	try
	{
		AddLine( fs, _title );								//save title
		AddLine( fs, intToManagedString(_releaseDate) );	//save release date
		AddLine( fs, intToManagedString(_qtyOwned) );		//save the cheerleader
		AddLine( fs, intToManagedString(_qtyLent) );		//save the World
		AddLine( fs, _author );
		AddLine( fs, _publisher );
		AddLine( fs, _synopsis );
		AddLine( fs, intToManagedString(_pages) );
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}


	return true;//Save successful
}

