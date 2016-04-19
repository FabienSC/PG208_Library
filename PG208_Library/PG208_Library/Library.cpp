#include "StdAfx.h"
#include "Library.h"

	using namespace std;

Library::Library(void)
{
	ifstream myfile;
	myfile.open("Library/Data.txt");
	string line;
	getline( myfile, line );
	_numberOfBooks = stoi(line);
	getline( myfile, line );
	_numberOfCDs = stoi(line);
	myfile.close();
}

int Library::getNumberOfBooks()
{
	return _numberOfBooks;
}

int Library::getNumberOfCDs()
{
	return _numberOfCDs;
}