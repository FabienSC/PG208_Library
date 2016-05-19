#pragma once
#include "StdAfx.h"


ref class Article
{
public:
    Article();
    ~Article();

	void 		setID(int);								//1 to 1000 for books, 1001 to 2000 for CDs ...
    int 		getID();
	
	void 		setTitle(String^);
    String^		getTitle();
    
	void 		setReleaseDate(int);
    int 		getReleaseDate();
    
	void		setQtyOwned(int);
	int			getQtyOwned();

	bool		getAvailability();

    bool 		borrowArticle(String^);						// if already borrowed, can't borrow it...
    bool 		returnArticle(String^);						// if all in library, can't return...
	bool 		reserveArticle(String^);					// if need to reserve...
	bool		cancelReserveArticle(String^);

	
	void		deleteFile();//delete file

	virtual bool	save();//
	bool		canBorrow(String^);

protected:
    int		 _ID;
    String ^ _title;
    int		 _releaseDate;//YYYYMMDD
	int		 _quantity;//quantity on hand
	int		 _qtyLent;
	array<String ^> ^ _reservationList;
	bool	 _isReservable;
};