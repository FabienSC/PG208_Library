#pragma once
#include "Article.h"

////////////////////////////Make this an abstract class


class Book : public Article
{
public:
    Book();
	~Book();

    string		getAuthor();
    void 		setAuthor(std::string newAuthor);

    string		getPublisher();
    void 		setPublisher(std::string newPublisher);

    int 		getPages();
    void 		setPages(int newPages);

    string		getIsMagazine();
    void 		setIsMagazine(bool);
	void 		setIsMagazine(std::string newIsMagazine);

	string		getSummary();
    void 		setSummary(string newSummary);

    void 		getData();

	bool		load(int);
	bool		save();

//title, author, publisher, editor, number of pages

private:
    string	_author;
    string	_publisher;
    string	_synopsis;
    int 	_pages;
protected:
	bool	_isMagazine;
};
