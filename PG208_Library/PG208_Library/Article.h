#ifndef ARTICLES_H
#define ARTICLES_H
#include<string>


class Article
{
public:
    Article();
    ~Article();

    int 		getID();								//1 to 1000 for books, 1001 to 2000 for CDs ...
    void 		setID(int newID);
	
	void 		setTitle(std::string newTitle);		
    std::string getTitle();						
    
	void 		setReleaseDate(int newReleaseDate);		
    int 		getReleaseDate();						
    
	bool 		getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if in library, can't return...

	void 		getGeneralData();

private:
    unsigned int _ID;
    std::string _title;
    bool _isAvailable;
    int _releaseDate;//YYYYMMDD
};







#endif // ARTICLES_H
