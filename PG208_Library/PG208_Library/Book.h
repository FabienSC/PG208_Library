#pragma once
#include "article.h"
ref class Book :
public Article
{
public:
	Book(void);
};

/*
#ifndef BOOK_H
#define BOOK_H
#include "Article.h"


class Book : public Article
{
public:
    Book();

    std::string getAuthor();
    void 		setAuthor(std::string newAuthor);

    std::string getPublisher();
    void 		setPublisher(std::string newPublisher);

    int 		getPages();
    void 		setPages(int newPages);
    
    void 		getData();

//title, author, publisher, editor, number of pages

private:
    std::string _author;
    std::string _publisher;
    int 		_pages;
};

#endif // BOOK_H


*/
