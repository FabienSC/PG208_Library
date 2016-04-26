#ifndef ARTICLES_H
#define ARTICLES_H

#include <string>


class Article
{
public:
    Article();
    ~Article();

	void 		setID(int newID);								//1 to 1000 for books, 1001 to 2000 for CDs ...
    int 		getID();						    
	
	void 		setTitle(std::string newTitle);		
    std::string getTitle();						
    
	void 		setReleaseDate(int newReleaseDate);		
    int 		getReleaseDate();						
    
	void		setAvailability(bool newIsAvailable);			//manual set for initialisation only 
	void		setAvailability(std::string newIsAvailable);	
	std::string getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if in library, can't return...

	void 		getData();

	bool		loadFromFile(const char* fileName);
	bool		saveToFile(const char* fileName, Article myArticle);	
	bool		saveToFile(const char* fileName);

private:
    unsigned int _ID;
    std::string _title;
    bool _isAvailable;
    int _releaseDate;//YYYYMMDD
};

#endif // ARTICLES_H