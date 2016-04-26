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
    _duration = 0;
	_tracks = 0;
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


int CD::getTracks()
{return _tracks;}

void CD::setTracks(int newTracks)
{_tracks = newTracks;}


void CD::getData()
{
	Article::getData();
	
	cout << "Artist: " << getArtist() << endl;
	cout << "Record Company: " << getRecordCompany() << endl;
	cout << "Music Style: " << getMusicStyle() << endl;
	cout << "Duration: " << getDuration() << endl;
	cout << "Number of tracks: " << getTracks() << endl;
		
	cout << "----------------------------------------" << endl;
}