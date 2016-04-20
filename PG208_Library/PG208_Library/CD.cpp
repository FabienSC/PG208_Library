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


string CD::getArtist()
{return _artist;}

void CD::setArtist(string newArtist)
{_artist = newArtist;}


string CD::getRecordCompany()
{return _recordCompany;}

void CD::setRecordCompany(string newRecordCompany)
{_recordCompany = newRecordCompany;}


string CD::getMusicStyle()
{return _musicStyle;}

void CD::setMusicStyle(string newMusicStyle)
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