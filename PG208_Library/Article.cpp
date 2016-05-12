#include "StdAfx.h"

#include "Article.h"


Article::Article()
{
	_ID = 0;//id not set
	_title = "NA";
	_qtyLent = 0;
	_qtyOwned = 0;
	_releaseDate = 20000101;//default release date = 1st Jan 2000
}

Article::~Article()
{
}

int Article::getID()
{return _ID;}

void Article::setID(int newID)
{_ID = newID;}


String^ Article::getTitle()
{return _title;}

void Article::setTitle(String^ newTitle)
{_title = newTitle;}


int Article::getReleaseDate()
{return _releaseDate;}

void Article::setReleaseDate(int newReleaseDate)
{_releaseDate = newReleaseDate;}


String^ Article::getAvailability()
{
	if(_qtyOwned > _qtyLent)
		return "Available";
	else
		return "Unavailable";
}

bool Article::borrowArticle()//later add char* username as parameter
{
	if (_qtyOwned > _qtyLent)
	{
		_qtyLent++;//borrow/lend a book
		return 0;//ok
	}
	else//article isn't available
		return 1;//error, article isn't available
}

bool Article::returnArticle()//later add char* username as parameter
{
	if(_qtyLent > 0)
	{
		_qtyLent--;
		return 0;//ok
	}
	else
		return 1;//how can you return what has never left?
}


/*void Article::getData()
{
	cout << "--------------Info diplay ---------------" << endl;

	cout << "ID: " << getID() << endl;
	cout << "Title: " << getTitle() << endl;
	cout << "Release date: " << getReleaseDate() << endl;
	cout << "Availability: " << getAvailability() << endl;	

}*/


/*bool Article::loadFromFile(const char* fileName)
{
int ID, releaseDate;
bool isAvailable;
String^ title;

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


/*bool Article::saveToFile(const char* fileName, Article myArticle)
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
}*/


/*bool Article::saveToFile(const char* fileName)
{
	int ID, releaseDate;
	bool isAvailable;
	String^ title;

	ofstream FILE(fileName, ios::out);
	if(FILE)
	{
		cout << "Desired ID ? (1 to 2000 for PaperCopies, 2001 to 4000 for videos, 4001 to 5000 for CDs)" << endl ;
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

		cout << "Is this article available right now? (1:yes 0:no)" << endl ;
		cin >> isAvailable;
		FILE << isAvailable << endl;

		return true;
	}
	else
		cerr << "Failed to open file!" << endl;
	return false;
}*/


void Article::deleteFile()
{
	String ^ strFilepath;
	char* filepath;

	if((BASE_BOOK_ID <= _ID) && (_ID < BASE_MAGAZINE_ID))	//Book IDs
		strFilepath = FILEPATH_BOOK + _ID + ".txt";
	else if((BASE_MAGAZINE_ID <= _ID) && (_ID < BASE_CD_ID))
		strFilepath = FILEPATH_MAGAZINE + _ID + ".txt";
	else if((BASE_CD_ID <= _ID) && (_ID < BASE_DVD_ID))
		strFilepath = FILEPATH_CD + _ID + ".txt";
	else if((BASE_DVD_ID <= _ID) && (_ID < BASE_VHS_ID))
		strFilepath = FILEPATH_DVD + _ID + ".txt";
	else if((BASE_VHS_ID <= _ID) && (_ID < BASE_DIGITAL_ID))
		strFilepath = FILEPATH_VHS + _ID + ".txt";
	else if((BASE_DIGITAL_ID <= _ID) && (_ID < BASE_MAX_ID))
		strFilepath = FILEPATH_DIGITAL + _ID + ".txt";

	filepath = managedStringToChar(strFilepath);

	struct stat buffer;
	if(stat (filepath, &buffer) == 0)//If File exists
		remove(filepath);//delete file
	else
		popup("Error","Filepath doesn't exist");
}

/*bool	Article::load(int fileID)//delete?
{
	popup("Error", "The article::load() function should never be called");
	return false;
}*/

void Article::setQtyOwned(int newQtyOwned)
{
	if(newQtyOwned >= _qtyLent)//can't own 2 books but have 3 borrowed
		_qtyOwned = newQtyOwned;
}

int Article::getQtyOwned()
{
	return _qtyOwned;
}