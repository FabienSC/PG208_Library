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


String^ CD::getArtist()
{return _artist;}

void CD::setArtist(String^ newArtist)
{_artist = newArtist;}


String^ CD::getRecordCompany()
{return _recordCompany;}

void CD::setRecordCompany(String^ newRecordCompany)
{_recordCompany = newRecordCompany;}


String^ CD::getMusicStyle()
{return _musicStyle;}

void CD::setMusicStyle(String^ newMusicStyle)
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
}*/

bool	CD::load(int fileID)
{
	String ^ strIDFilePath = FILEPATH_CD + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	if(File::Exists( strIDFilePath ))
	{
		_ID = fileID;//Load ID

		StreamReader^ sr = File::OpenText( strIDFilePath );
		try
		{
			_title = readData(sr);
			_releaseDate = managedStringToInt(readData(sr));
			_quantity = managedStringToInt(readData(sr));
			_qtyLent = managedStringToInt(readData(sr));

			_artist = readData(sr);
			_recordCompany = readData(sr);
			_musicStyle = readData(sr);
			_duration = managedStringToInt(readData(sr));
			_tracks = managedStringToInt(readData(sr));

			for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++)
			{
				_reservationList[i] = readData(sr);
			}
		}
		finally//make sure to close file
		{
			if ( sr )
				delete (IDisposable^)sr;
		}

		return true;//Load successful
	}
	else
		return false;//Load failed
}


bool CD::save()
{
	String ^ strIDFilePath = FILEPATH_CD + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strIDFilePath );
	try
	{
		AddLine( fs, _title );								//save title
		AddLine( fs, intToManagedString(_releaseDate) );	//save release date
		AddLine( fs, intToManagedString(_quantity) );		//save the cheerleader
		AddLine( fs, intToManagedString(_qtyLent) );		//save the World
		AddLine( fs, _artist );
		AddLine( fs, _recordCompany );
		AddLine( fs, _musicStyle );
		AddLine( fs, intToManagedString(_duration) );
		AddLine( fs, intToManagedString(_tracks) );
		for (int i = 0; i < ARTICLE_RESERVE_LIMIT; i++)
		{
			AddLine( fs, _reservationList[i] );
		}
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}