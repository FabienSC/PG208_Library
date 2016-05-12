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


/*void CD::getData()
{
	Article::getData();
	
	cout << "Artist: " << getArtist() << endl;
	cout << "Record Company: " << getRecordCompany() << endl;
	cout << "Music Style: " << getMusicStyle() << endl;
	cout << "Duration: " << getDuration() << endl;
	cout << "Number of tracks: " << getTracks() << endl;
		
	cout << "----------------------------------------" << endl;
}

bool	CD::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Library/Articles/CDs/3141.txt

	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer) == 0)//If file exists
	{
		_ID = fileID;//Load ID

		ifstream myfile;
		string line;

		myfile.open(filePath);//open file
		getline(myfile, line);//store first line into "line"

		_title = stringToChar(line);//Load Title
		return true;//Load successful
	}
	else
		return false;//Load failed
}


bool	CD::save()
{
	String ^ strIDFilePath = FILEPATH_CD + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer))//If file doesn't exist
	{
		ofstream myfile(filePath);
		
		myfile << _title << endl;		//save title
		myfile << _releaseDate << endl;	//save release date
		myfile << _qtyOwned << endl;	//save the Cheerleader
		myfile << _qtyLent << endl;		//save our souls
		//Save other stuff
		myfile << _artist << endl;
		myfile << _recordCompany << endl;
		myfile << _musicStyle << endl;
		myfile << _duration << endl;
		myfile << _tracks << endl;

		myfile.close();

		return true;//Save successful
	}
	else
		return false;//Save failed
}*/