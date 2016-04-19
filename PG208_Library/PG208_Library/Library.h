#pragma once

class Library
{
public:
	Library(void);
	int getNumberOfBooks();
	int getNumberOfCDs();

private:
	int _numberOfBooks;
	int _numberOfCDs;
};

