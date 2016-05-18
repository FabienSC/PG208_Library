#pragma once

ref class Library
{
public:
	Library(void);
	int getNumberOfAll();//returns the total number of articles
	int getNumberOfBooks();//returns the number of books
	int getNumberOfMagazines();//returns the number of Magazines
	int getNumberOfCDs();//returns the number of CDs
	int getNumberOfDVDs();//returns the number of DVDs
	int getNumberOfVHSs();//returns the number of VHSs
	int getNumberOfDigitalResources();//returns the number of DigitalResources


private:
	int _numberOfBooks;//number of separate books
	int _numberOfMagazines;//number of separate CDs
	int _numberOfCDs;//number of separate CDs
	int _numberOfDVDs;//number of separate CDs
	int _numberOfVHSs;//number of separate books
	int _numberOfDigitalResources;//number of separate CDs
	void saveData();//write data to file (Library/data.txt) useless?
};

