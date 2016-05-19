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

	String^		getSummary();
    void 		setSummary(String^ newSummary);

	bool		load(int);
	virtual bool		save() new;


protected:
    String^		_author;
    String^		_publisher;
    String^		_synopsis;
    int 		_pages;
};
