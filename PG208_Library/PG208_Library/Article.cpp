#include "StdAfx.h"
#include "Article.h"


Article::Article(void)
{
}

/*
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

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

std::string Article::getTitle()
{return _title;}

int Article::getReleaseDate()
{return _releaseDate;}

bool Article::getAvailability()
{return _isAvailable;}


void Article::setID(int newID)
{_ID = newID;}

void Article::setTitle(std::string newTitle)
{_title = newTitle;}

void Article::setReleaseDate(int newReleaseDate)
{_releaseDate = newReleaseDate;}

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

	


*/