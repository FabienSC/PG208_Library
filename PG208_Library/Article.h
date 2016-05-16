#pragma once
#include "StdAfx.h"


ref class Article
{
public:
    Article();
    ~Article();

	void 		setID(int newID);								//1 to 1000 for books, 1001 to 2000 for CDs ...
    int 		getID();
	
	void 		setTitle(String^ newTitle);
    String^		getTitle();
    
	void 		setReleaseDate(int newReleaseDate);
    int 		getReleaseDate();
    
	void		setQtyOwned(int);
	int			getQtyOwned();

	String^		getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if all in library, can't return...
	
	void		reserveArticle(String^  newUsername);


		//	void 		getData();
	
	void		deleteFile();//delete file

//	bool		loadFromFile(const char* fileName);
//	bool		saveToFile(const char* fileName, Article myArticle);	
//	bool		saveToFile(const char* fileName);

	//virtual bool	load(int fileID);//

protected:
    int		 _ID;
    String ^ _title;
    int		 _releaseDate;//YYYYMMDD
    int		 _qtyOwned;//quantity owned
    int		 _qtyLent;//quantity available
	//String ^ _reservationList[3];				can't do it in array... ?
	String ^ _reservation1;
	String ^ _reservation2;
	String ^ _reservation3;
	bool	 _reservable;
	//??? add users reserved
};