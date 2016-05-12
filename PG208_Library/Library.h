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

/*	void addBook();//increments the number of books
	void removeBook();//decrements the number of books
	void addCD();//increments the number of CDs
	void removeCD();//decrements the number of CDs*/

private:
	int _numberOfBooks;//number of separate books
	int _numberOfMagazines;//number of separate CDs
	int _numberOfCDs;//number of separate CDs
	int _numberOfDVDs;//number of separate CDs
	int _numberOfVHSs;//number of separate books
	int _numberOfDigitalResources;//number of separate CDs
	void saveData();//write data to file (Library/data.txt) useless?
};

