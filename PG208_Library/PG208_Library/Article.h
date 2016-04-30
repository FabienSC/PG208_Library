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
	//void 		setTitle(std::string newTitle);	

    char*		getTitle();						
    
	void 		setReleaseDate(int newReleaseDate);		
    int 		getReleaseDate();						
    
	void		setAvailability(bool newIsAvailable);			//manual set for initialisation only 
	void		setAvailability(std::string newIsAvailable);	
	std::string getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if in library, can't return...

	void 		getData();
	
	void		deleteFile();//delete file

	//bool		loadFromFile(const char* fileName);
	bool		saveToFile(const char* fileName, Article myArticle);	
	bool		saveToFile(const char* fileName);

	virtual bool	load(int fileID);//

protected:
    unsigned int _ID;
    char* _title;
    bool _isAvailable;
    int _releaseDate;//YYYYMMDD
};

#endif // ARTICLES_H