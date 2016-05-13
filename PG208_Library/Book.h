#pragma once
#include "Article.h"

////////////////////////////Make this an abstract class


ref class Book : public Article
{
public:
    Book();
	~Book();

    String^		getAuthor();
    void 		setAuthor(String^ newAuthor);

    String^		getPublisher();
    void 		setPublisher(String^ newPublisher);

    int 		getPages();
    void 		setPages(int newPages);

    String^		getIsMagazine();
    void 		setIsMagazine(bool);
	void 		setIsMagazine(String^ newIsMagazine);

	String^		getSummary();
    void 		setSummary(String^ newSummary);

//    void 		getData();

	bool		load(int);
	bool		save();

//title, author, publisher, editor, number of pages

private:
    String^		_author;
    String^		_publisher;
    String^		_synopsis;
    int 		_pages;
protected:
	bool		_isMagazine;
};
