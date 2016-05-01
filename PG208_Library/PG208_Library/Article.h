#ifndef ARTICLES_H
#define ARTICLES_H
#include "StdAfx.h"


class Article
{
public:
    Article();
    ~Article();

	void 		setID(int newID);								//1 to 1000 for books, 1001 to 2000 for CDs ...
    int 		getID();						    
	
	void 		setTitle(char* newTitle);		
    char*		getTitle();						
    
	void 		setReleaseDate(int newReleaseDate);		
    int 		getReleaseDate();						
    
	void		setQtyOwned(int);			
	void		setAvailability(std::string newIsAvailable);	
	std::string getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if all in library, can't return...

	void 		getData();
	
	void		deleteFile();//delete file

//	bool		loadFromFile(const char* fileName);
	bool		saveToFile(const char* fileName, Article myArticle);	
	bool		saveToFile(const char* fileName);

	virtual bool	load(int fileID);//

protected:
    unsigned int _ID;
    char* _title;
    int _releaseDate;//YYYYMMDD
    int _qtyOwned;//quantity owned
    int _qtyLent;//quantity available
};

#endif // ARTICLES_H