#include "StdAfx.h"

#include "Article.h"


Article::Article()
{
	_ID = 0;//id not set
	_title = "NA";
	_releaseDate = 20000101;//default release date = 1st Jan 2000

	_quantity = 0;
	_qtyLent = 0;

	//reset reservation list///////////////////////////
	_reservationList = gcnew array<String ^> (ARTICLE_RESERVE_LIMIT);
	for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++)
	{
		_reservationList[i] = "NA";
	}
	//////////////////////////////////////////////////

	bool	 _isReservable = 1;
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

bool Article::getAvailability()
{
	if(_quantity > 0)
	{
		if(_reservationList[_quantity - 1] == "NA")
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

bool Article::borrowArticle(String^ newUser)
{
	User^ borrower = gcnew User(newUser);
	int reservations = 0;
	int userReservePriority = -1;

	//check reservation list//////
	for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++)
	{
		if (_reservationList[i] != "NA") 
		{
			reservations++;
		}
		if (_reservationList[i] == borrower->getUsername())
		{
			userReservePriority = i;
		}
	}
	
	if(borrower->canBorrow(_ID))
	{
		if (userReservePriority == -1) // user has not reserved
		{
			if (reservations < _quantity)// enough articles to borrow one
			{	
				borrower->borrowArticle(_ID);
				_quantity --;
				_qtyLent ++;
				return 1;
			}
			else //more reservations than articles available
			{
				popup("Sorry", "The article is not available, accessing reservation list...");
				reserveArticle(borrower->getUsername());
				return 0;
			}
		}
		else // user has reserved
		{
			if ((userReservePriority + 1)< _quantity) // user has enough priority to borrow
			{
				borrower->borrowArticle(_ID);
				_quantity--;
				_qtyLent++;
				//shift reservation list
				for (int i = userReservePriority; i < ARTICLE_RESERVE_LIMIT - 1; i++) 
				{
					_reservationList[i] = _reservationList[i+1];
				}
				_reservationList[ARTICLE_RESERVE_LIMIT - 1] = "NA"; // empty last space in list
				return 1;
			}
			else // not enough articles for user to borrow
			{
				popup("Sorry", "You are on reservation list, but low priority. Please wait or kill those ahead of you...");
				return 0;
			}
		}
	}
	else
	{
		popup("EPIC FAIL", "You can't borrow this article! Sorry... Don't you already have it?");
		return 0;
	}
}

bool Article::returnArticle(String^ newUser)//later add char* username as parameter
{
	User^ borrower = gcnew User(newUser);
	
	if(borrower->canReturn(_ID))
	{
		borrower->returnArticle(_ID);
		_quantity++;
		_qtyLent--;
		return 1;
	}
	else
	{
		popup("EPIC FAIL", "You can't return an article you don't have!");
		return 0;
	}
}

bool Article::reserveArticle(String^  newUser)
{
	User^ reserver = gcnew User(newUser);
	int reservations = 0;

	if (_reservationList[5] != "NA") //check if reservable
	{
		_isReservable = 0;
	}

	if (_isReservable == 1)
	{
		if(reserver->canReserve(_ID)) 
		{
			for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++) //check reservation list
			{
				if (_reservationList[i] != "NA") 
				{
					reservations++;
				}
				if (_reservationList[i] == reserver->getUsername())
				{
					popup("EPIC FAIL", "You are already on reservation list!");
					return 0;
				}
			}

			if (_isReservable == 0) //list full
			{
				popup("EPIC FAIL", "Reservation list is full!");
				return 0;
			}
			else
			{
				_reservationList[reservations] = reserver->getUsername();
				reserver->reserveArticle(_ID);
				popup("WELL DONE", "You are now on reservation list! You can cancel reservation if needed.");
				return 1;
			}
		}
		else
		{
			popup("EPIC FAIL", "You can't reserve this article! Sorry...");
			return 0;
		}
	}
	else
	{
		popup("EPIC FAIL", "Article not available for reservation! Sorry...");
		return 0;
	}
}

bool Article::cancelReserveArticle(String^  newUser)
{
	User^ reserver = gcnew User(newUser);
	int userReservePriority = -1;
	
	if(reserver->canCancel(_ID))
	{
		reserver->cancelReservation(_ID);

		for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++) //check reservation list
		{
			if (_reservationList[i] == reserver->getUsername()) 
			{
				userReservePriority = i;
			}
		}

		for (int i = userReservePriority; i < ARTICLE_RESERVE_LIMIT - 1; i++) //update list
		{
			_reservationList[i] = _reservationList[i+1];
		}
		_reservationList[ARTICLE_RESERVE_LIMIT - 1] = "NA";
		_isReservable = 1;
		popup("SUCCESSFUL CANCEL", "You are smart and thoughtful, you did the right thing!");
		return 1;
	}
	else
	{
		popup("EPIC FAIL", "You are not even on the list...");
		return 0;
	}
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



void Article::setQtyOwned(int newQuantity)
{
	if(newQuantity >= _qtyLent) //can't own 2 books but have 3 borrowed
	_quantity = newQuantity;
}

int	Article::getQtyOwned()
{return _quantity;}