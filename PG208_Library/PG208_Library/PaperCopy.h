#ifndef paperCopy_H
#define paperCopy_H
#include "Article.h"


class paperCopy : public Article
{
public:
    paperCopy();
	~paperCopy();

    std::string getAuthor();
    void 		setAuthor(std::string newAuthor);

    std::string getPublisher();
    void 		setPublisher(std::string newPublisher);

    int 		getPages();
    void 		setPages(int newPages);

    std::string getIsMagazine();
    void 		setIsMagazine(bool newIsMagazine);
	void 		setIsMagazine(std::string newIsMagazine);

	std::string getSynopsis();
    void 		setSynopsis(std::string newSynopsis);

    void 		getData();

//title, author, publisher, editor, number of pages

private:
    std::string _author;
    std::string _publisher;
    int 		_pages;
	bool		_isMagazine;
    std::string _synopsis;
};

#endif // paperCopy_H
