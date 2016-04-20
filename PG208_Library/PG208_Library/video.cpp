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

std::string video::getDirector()
{return _director;}

void video::setDirector(std::string newDirector)
{_director = newDirector;}


std::string video::getProducer()
{return _producer;}

void video::setProducer(std::string newProducer)
{_producer = newProducer;}


std::string video::getMainActor()
{return _mainActor;}

void video::setMainActor(std::string newMainActor)
{_mainActor = newMainActor;}


std::string video::getIsDVD()
{if(_isDVD)
	return "DVD";
else
	return "VHS";}

void video::setIsDVD(bool newIsDVD)
{_isDVD = newIsDVD;}


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
	cout << "IsDVD: " << getIsDVD() << endl;

	cout << "----------------------------------------" << endl;
}