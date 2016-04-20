#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "video.h"

using namespace std;


video::video()
{
    _director = "NA";
    _producer = "NA";
    _mainActor = "NA";
    _isDVD = "NA";
    _ageLimit = 0;
    _length = 0;
	_isDVD = 1;
}

video::~video()
{
}

string video::getDirector()
{return _director;}

void video::setDirector(string newDirector)
{_director = newDirector;}


string video::getProducer()
{return _producer;}

void video::setProducer(string newProducer)
{_producer = newProducer;}


string video::getMainActor()
{return _mainActor;}

void video::setMainActor(string newMainActor)
{_mainActor = newMainActor;}


string video::getIsDVD()
{if(_isDVD)
	return "DVD";
else
	return "VHS";}

void video::setIsDVD(bool newIsDVD)
{_isDVD = newIsDVD;}

void video::setIsDVD(string newIsDVD)
{if (newIsDVD == "DVD")
	_isDVD = 1;
else if (newIsDVD == "VHS")
	_isDVD = 0;
else 
	cout << "error, please specify type DVD or VHS" << endl; 
}




int video::getLength()
{return _length;}

void video::setLength(int newLength)
{_length = newLength;}


int video::getAgeLimit()
{return _ageLimit;}

void video::setAgeLimit(int newAgeLimit)
{_ageLimit = newAgeLimit;}


void video::getData()
{
	getGeneralData();
	
	cout << "Director: " << getDirector() << endl;
	cout << "Producer: " << getProducer() << endl;
	cout << "Main Actor: " << getMainActor() << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Age Limit: " << getAgeLimit() << endl;
	cout << "Support Type: " << getIsDVD() << endl;

	cout << "----------------------------------------" << endl;
}