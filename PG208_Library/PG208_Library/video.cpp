#include "StdAfx.h"
#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "Video.h"

using namespace std;


Video::Video()
{
	_director = "NA";
	_producer = "NA";
	_mainActor = "NA";
	_isDVD = "NA";
	_ageLimit = 0;
	_length = 0;
	_isDVD = 1;
	_chapters = 0;
}

Video::~Video()
{
}

string Video::getDirector()
{return _director;}

void Video::setDirector(string newDirector)
{_director = newDirector;}


string Video::getProducer()
{return _producer;}

void Video::setProducer(string newProducer)
{_producer = newProducer;}


string Video::getMainActor()
{return _mainActor;}

void Video::setMainActor(string newMainActor)
{_mainActor = newMainActor;}


string Video::getIsDVD()
{if(_isDVD)
return "DVD";
else
	return "VHS";}

void Video::setIsDVD(bool newIsDVD)
{_isDVD = newIsDVD;}

void Video::setIsDVD(string newIsDVD)
{if (newIsDVD == "DVD")
_isDVD = 1;
else if (newIsDVD == "VHS")
	_isDVD = 0;
else 
	cout << "error, please specify type DVD or VHS" << endl; 
}


int Video::getLength()
{return _length;}

void Video::setLength(int newLength)
{_length = newLength;}


int Video::getAgeLimit()
{return _ageLimit;}

void Video::setAgeLimit(int newAgeLimit)
{_ageLimit = newAgeLimit;}


int Video::getChapters()
{if (_isDVD)
return _chapters;
else
{	
	cout << "VHS do not have chapters..." << endl;
	return 0;
}
}

void Video::setChapters(int newChapters)
{if (_isDVD)
	_chapters = newChapters;
else
	popup("Error","VHS don't have chapter...");
}


void Video::getData()
{//for a terminal version... useless
	Article::getData();

	cout << "Director: " << getDirector() << endl;
	cout << "Producer: " << getProducer() << endl;
	cout << "Main Actor: " << getMainActor() << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Age Limit: " << getAgeLimit() << endl;
	cout << "Support Type: " << getIsDVD() << endl;
	if(_isDVD)
		cout << "Chapters: " << getChapters() << endl;

	cout << "----------------------------------------" << endl;
}


bool Video::load(int fileID)
{
	String ^ strIDFilePath;
	if(fileID < BASE_VHS_ID)
		strIDFilePath = FILEPATH_DVD + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else
		strIDFilePath = FILEPATH_VHS + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

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


bool	Video::save()
{
	String ^ strIDFilePath;
	if (_isDVD)	//DVD
		strIDFilePath = FILEPATH_DVD + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt
	else		//VHS
		strIDFilePath = FILEPATH_VHS + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	char* filePath = managedStringToChar(strIDFilePath);//convert to char*

	struct stat buffer;
	if(stat (filePath, &buffer))//If file doesn't exist
	{
		ofstream myfile(filePath);

		myfile << _title << endl;		//save title
		myfile << _releaseDate << endl;	//save release date
		myfile << _qtyOwned << endl;	//save the Cheerleader
		myfile << _qtyLent << endl;		//save the World
		//Save other stuff
		myfile << _director << endl;
		myfile << _producer << endl;
		myfile << _mainActor << endl;
		myfile << _length << endl;
		myfile << _ageLimit << endl;
		if(_isDVD)
			myfile << _chapters << endl;
		myfile.close();

		return true;//Save successful
	}
	else
		return false;//Save failed
}