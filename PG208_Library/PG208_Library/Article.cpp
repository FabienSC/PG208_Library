#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>
#include <cstdlib>

#include "Article.h"

using namespace std;


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


string Article::getTitle()
{return _title;}

void Article::setTitle(string newTitle)
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


void Article::getGeneralData()
{
	cout << "--------------Info diplay ---------------" << endl;
	
	cout << "ID: " << getID() << endl;
	cout << "Title: " << getTitle() << endl;
	cout << "Release date: " << getReleaseDate() << endl;
	cout << "Availability: " << getAvailability() << endl;	
	
}


bool Article::loadFromFile(const char* fileName)
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
}


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


/*-----------------------------------------------------------------------
-----------------------------------------------------------------------
-----------------------------------------------------------------------
-----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <assert.h>
#include <ctime> // srand
#include <cstdlib> //
#include <fstream>
#include <sstream>
#include "personne.h"

using namespace std;


void Personne::display_pInfoExt()
{

    std::ostringstream oss ;
    oss << get_pBirthYear();
    // recuperer une chaine de caracteres
    string date = oss.str();

    cout << "==> ";


    cout << "[";
    if ((2016 - get_pBirthYear() >= 0) and (2016 - get_pBirthYear() < 12))
        cout << "CHILD ";
    else if ((2016 - get_pBirthYear() >= 12) and (2016 - get_pBirthYear() < 18))
        cout << "ADOLESCENT ";
    else if ((2016 - get_pBirthYear() >= 18) and (2016 - get_pBirthYear() < 65))
         cout << "ACTIVE ";
    else
         cout << "RETIRED ";
     cout << ": ";

    cout << get_pFirstName().substr(0, 1) << "." << get_pName() << "-" << date.substr(2, 4) ;
    cout << "] ";

    display_pInfo();
}



bool Personne::saveToFile(const char* filename)
{
        string info;
        int age;

        ofstream FILE(filename, ios::out);
        if(FILE)
        {
            cout << "Gender? (Male : M || Female : F)" << endl ;
            cin >> info;
            if ( (info != "M") and (info != "m") and (info != "F") and (info != "f") )
            {
                do
                {
                    cout << "Please indicate an actual gender (Male : M || Female : F)\n";
                    cin >> info;
                }
				while( (info != "M") and (info != "m") and (info != "F") and (info != "f"));
            }
            FILE << info << endl;

            cout << "First name?" << endl ;
            cin >> info;
            FILE << info << endl;

            cout << "Surname?" << endl ;
            cin >> info;
            FILE << info << endl;

            cout << "Birthdate?" << endl ;
            cin >> age;
            FILE << age << endl;

            cout << "Are you married? (Yes : Y || No : N)" << endl ;
            cin >> info;
            if ( (info != "Y") and (info != "y") and (info != "N") and (info != "n") )
            {
                do
                    {
                    cout << "Please indicated whether || not you are married? (Yes : Y || No : N)\n";
                    cin >> info;
                    }while( (info != "Y") and (info != "y") and (info != "N") and (info != "n") );
            }
            FILE << info << endl;

            return true;
        }
        else
            cerr << "Failed to open file!" << endl;
        return false;
}


*/