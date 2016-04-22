#pragma once

class Library
{
public:
	Library(void);
	int getNumberOfBooks();
	int getNumberOfCDs();

	void addBook();
	void removeBook();
	void addCD();
	void removeCD();

private:
	int _numberOfBooks;
	int _numberOfCDs;
	void saveData();
};

