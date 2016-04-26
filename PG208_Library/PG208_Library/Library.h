#pragma once

class Library
{
public:
	Library(void);
	int getNumberOfAll();//returns the total number of articles
	int getNumberOfBooks();//returns the number of books
	int getNumberOfCDs();//returns the number of CDs

	void addBook();//increments the number of books
	void removeBook();//decrements the number of books
	void addCD();//increments the number of CDs
	void removeCD();//decrements the number of CDs

private:
	int _numberOfBooks;//number of separate books
	int _numberOfCDs;//number of separate CDs
	void saveData();//write data to file (Library/data.txt) useless?
};

