#include "StdAfx.h"
#include "Video.h"


Video::Video()
{
	_director = "NA";
	_producer = "NA";
	_mainActor = "NA";
	_isDVD = "NA";
	_ageLimit = 0;
	_length = 0;
	_isDVD = true;
	_chapters = 0;
}

Video::~Video()
{
}

String^ Video::getDirector()
{return _director;}

void Video::setDirector(String^ newDirector)
{_director = newDirector;}


String^ Video::getProducer()
{return _producer;}

void Video::setProducer(String^ newProducer)
{_producer = newProducer;}


String^ Video::getMainActor()
{return _mainActor;}

void Video::setMainActor(String^ newMainActor)
{_mainActor = newMainActor;}


bool Video::getIsDVD()
{return _isDVD;}

void Video::setIsDVD(bool newIsDVD)
{_isDVD = newIsDVD;}

void Video::setIsDVD(String^ newIsDVD)
{if (newIsDVD == "DVD")
_isDVD = 1;
else if (newIsDVD == "VHS")
	_isDVD = 0;
else 
	cout << "error, please specify type DVD or VHS" << endl; 
}


int Video::getLength()
{return _length;}

void Video::setLength(int newLength)
{_length = newLength;}


int Video::getAgeLimit()
{return _ageLimit;}

void Video::setAgeLimit(int newAgeLimit)
{_ageLimit = newAgeLimit;}


int Video::getChapters()
{if (_isDVD)
return _chapters;
else
{	
	cout << "VHS do not have chapters..." << endl;
	return 0;
}
}

void Video::setChapters(int newChapters)
{if (_isDVD)
_chapters = newChapters;
else
	cout << "VHS do not have chapters..." << endl;
}


/*void Video::getData()
{
Article::getData();

cout << "Director: " << getDirector() << endl;
cout << "Producer: " << getProducer() << endl;
cout << "Main Actor: " << getMainActor() << endl;
cout << "Length: " << getLength() << endl;
cout << "Age Limit: " << getAgeLimit() << endl;
cout << "Support Type: " << getIsDVD() << endl;
if(_isDVD)
cout << "Chapters: " << getChapters() << endl;

cout << "----------------------------------------" << endl;
}*/


bool Video::load(int fileID)
{
	String ^ strIDFilePath;
	if(fileID < BASE_VHS_ID)
		strIDFilePath = FILEPATH_DVD + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else
	{
		strIDFilePath = FILEPATH_VHS + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
		_isDVD = false;
	}

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

			_director = readData(sr);
			_producer = readData(sr);
			_mainActor = readData(sr);
			_length = managedStringToInt(readData(sr));
			_ageLimit = managedStringToInt(readData(sr));
			if(_isDVD)
				_chapters = managedStringToInt(readData(sr));
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


bool	Video::save()
{
	String ^ strIDFilePath;
	if (_isDVD)	//DVD
		strIDFilePath = FILEPATH_DVD + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else		//VHS
		strIDFilePath = FILEPATH_VHS + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strIDFilePath );
	try
	{
		AddLine( fs, _title );								//save title
		AddLine( fs, intToManagedString(_releaseDate) );	//save release date
		AddLine( fs, intToManagedString(_qtyOwned) );		//save the cheerleader
		AddLine( fs, intToManagedString(_qtyLent) );		//save the World

		AddLine( fs, _director );
		AddLine( fs, _producer );
		AddLine( fs, _mainActor );
		AddLine( fs, intToManagedString(_length) );
		AddLine( fs, intToManagedString(_ageLimit) );

		if(_isDVD)
			AddLine( fs, intToManagedString(_chapters) );
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}