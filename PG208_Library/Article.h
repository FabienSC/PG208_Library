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

	bool		getAvailability();

    bool 		borrowArticle(String^ newUser);						// if already borrowed, can't borrow it...
    bool 		returnArticle(String^ newUser);						// if all in library, can't return...
	bool 		reserveArticle(String^ newUser);					// if need to reserve...
	bool		cancelReserveArticle(String^  newUsername);

	//	void 		getData();
	
	void		deleteFile();//delete file


//	bool		loadFromFile(const char* fileName);
//	bool		saveToFile(const char* fileName, Article myArticle);	
//	bool		saveToFile(const char* fileName);

	virtual bool	save();//

protected:
    int		 _ID;
    String ^ _title;
    int		 _releaseDate;//YYYYMMDD
  //  int		 _quantity;//quantity owned
  //  int		 _qtyLent;//quantity available
	int		 _quantity;
	int		 _qtyLent;
	array<String ^> ^ _reservationList;
	bool	 _isReservable;
};