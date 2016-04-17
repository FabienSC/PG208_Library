#include "StdAfx.h"

#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "CD.h"

using namespace std;


CD::CD()
{
    _artist = "NA";
    _recordCompany = "NA";
    _musicStyle = "NA";
    _duration = -1;
}

CD::~CD()
{
}


std::string CD::getArtist()
{return _artist;}

void CD::setArtist(std::string newArtist)
{_artist = newArtist;}


std::string CD::getRecordCompany()
{return _recordCompany;}

void CD::setRecordCompany(std::string newRecordCompany)
{_recordCompany = newRecordCompany;}


std::string CD::getMusicStyle()
{return _musicStyle;}

void CD::setMusicStyle(std::string newMusicStyle)
{_musicStyle = newMusicStyle;}


int CD::getDuration()
{return _duration;}

void CD::setDuration(int newDuration)
{_duration = newDuration;}

void CD::getData()
{
	getGeneralData();
	
	cout << "Artist: " << getArtist() << endl;
	cout << "Record Company: " << getRecordCompany() << endl;
	cout << "Music Style: " << getMusicStyle() << endl;
	cout << "Duration: " << getDuration() << endl;
		
	cout << "----------------------------------------" << endl;
}