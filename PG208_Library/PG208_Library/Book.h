#ifndef Book_H
#define Book_H
#include "Article.h"


class Book : public Article
{
public:
    Book();
	~Book();

    std::string getAuthor();
    void 		setAuthor(std::string newAuthor);

    std::string getPublisher();
    void 		setPublisher(std::string newPublisher);

    int 		getPages();
    void 		setPages(int newPages);

	std::string getSynopsis();
    void 		setSynopsis(std::string newSynopsis);

	std::string		getIsMagazine();

    void 		getData();

//title, author, publisher, editor, number of pages

protected:
    std::string _author;
    std::string _publisher;
    int 		_pages;
	bool		_isMagazine;
    std::string _synopsis;
};

#endif // Book_H
