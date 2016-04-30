#include "StdAfx.h"

#include "Article.h"

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;


Article::Article()
{
	_ID = 0;//id not set
	_title = "NA";
	_isAvailable = 0;
	_releaseDate = 0;
}

Article::~Article()
{
}

int Article::getID()
{return _ID;}

void Article::setID(int newID)
{_ID = newID;}


char* Article::getTitle()
{return _title;}

void Article::setTitle(char* newTitle)
{_title = newTitle;}


int Article::getReleaseDate()
{return _releaseDate;}

void Article::setReleaseDate(int newReleaseDate)
{_releaseDate = newReleaseDate;}


string Article::getAvailability()
{if(_isAvailable)
return "Available";
else
	return "Unavailable";
}

void Article::setAvailability(bool newIsAvailable)
{_isAvailable = newIsAvailable;}

void Article::setAvailability(string newIsAvailable)
{if (newIsAvailable == "Available")
_isAvailable = 1;
else 
	_isAvailable = 0;
}

bool Article::borrowArticle()
{
	if (_isAvailable)
	{
		_isAvailable = 0;//article no longer available
		return 0;//ok
	}
	else//article isn't available
		return 1;//error, article isn't available
}

bool Article::returnArticle()
{
	if(_isAvailable)
		return 1;//how can you return what has never left?
	else
	{
		_isAvailable = 1;//article is now available
		return 0;//ok
	}
}


void Article::getData()
{
<<<<<<< HEAD
	cout << "--------------Info display ---------------" << endl;
	
=======
	cout << "--------------Info diplay ---------------" << endl;

>>>>>>> origin/master
	cout << "ID: " << getID() << endl;
	cout << "Title: " << getTitle() << endl;
	cout << "Release date: " << getReleaseDate() << endl;
	cout << "Availability: " << getAvailability() << endl;	

}


/*bool Article::loadFromFile(const char* fileName)
{
	int ID, releaseDate;
	bool isAvailable;
	string title;

	ifstream FILE(fileName, ios::in);
	if(FILE)
	{
		FILE >> ID >> title >> releaseDate >> isAvailable ;

		setID(ID);	
		setTitle(title);	
		setReleaseDate(releaseDate);			
		setAvailability(isAvailable);

		FILE.close();
		return true;
	}
	else
		cerr << "Failed to open file!" << endl;
	return false;
}*/


bool Article::saveToFile(const char* fileName, Article myArticle)
{
	ofstream FILE(fileName, ios::out);
	if(FILE)
	{
		FILE << myArticle.getID() << endl;
		FILE << myArticle.getTitle() << endl;
		FILE << myArticle.getReleaseDate() << endl;
		FILE << myArticle.getAvailability() << endl;

		return true;
	}
	else
		cerr << "Failed to open file!" << endl;
	return false;
}


bool Article::saveToFile(const char* fileName)
{
	int ID, releaseDate;
	bool isAvailable;
	string title;

	ofstream FILE(fileName, ios::out);
	if(FILE)
	{
		cout << "Desired ID ? (1 to 1000 for PaperCopies, 1001 to 2000 for videos, 2001 to 3000 for CDs)" << endl ;
		cin >> ID;
		if ( (ID<1) || (ID>3000) )
		{
			while( (ID<1) || (ID>3000))
			{
				cout << "Please type an available ID\n";
				cin >> ID;
			}
		}
		FILE << ID << endl;

		cout << "What is the title of your article?" << endl ;
		cin.ignore();
		getline(cin, title);
		FILE << title << endl;

		cout << "In what year was it released?" << endl ;
		cin >> releaseDate;
		if (releaseDate > 2016)
		{
			while(releaseDate > 2016);
			{
				cout << "Please type a possible release date\n";
				cin >> releaseDate;
			}
		}
		FILE << releaseDate << endl;

		cout << "Is your article available right now? (1:yes 0:no)" << endl ;
		cin >> isAvailable;
		FILE << isAvailable << endl;

		return true;
	}
	else
		cerr << "Failed to open file!" << endl;
	return false;
}


void Article::deleteFile()
{
	String ^ strFilepath;
	char* filepath;

	if((BASE_BOOK_ID <= _ID) && (_ID < BASE_CD_ID))	//Book IDs
		strFilepath = FILEPATH_BOOK + _ID + ".txt";
	else if((BASE_CD_ID <= _ID) && (_ID < 4000))	//CD IDs
		strFilepath = FILEPATH_CD + _ID + ".txt";

	filepath = (char*)Marshal::StringToHGlobalAnsi(strFilepath).ToPointer();//convert to char*

	struct stat buffer;
	if(stat (filepath, &buffer) == 0)//If File exists
		remove(filepath);//delete file
	else
		popup("Error","Filepath doesn't exist, blame Alex");
}

 bool	Article::load(int fileID)
{
	popup("Error", "The article::load() function should never be called");
	return false;
}