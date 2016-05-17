#include "StdAfx.h"
#include "User.h"


User::User(void)
{
	borrowedArticles = gcnew array< int >(BORROW_LIMIT);//0 isn't allowed => no article borrowed/reserved
	reservedArticles = gcnew array< int >(BORROW_LIMIT);
	isAdmin = false;
	for (int i = 0 ; i < BORROW_LIMIT ; i++)
	{
		borrowedArticles[i] = 0;
		reservedArticles[i] = 0;
	}
	username = "";
	encryptedPassword = "";
}

User::User(String^ enteredUsername)//load data from this user
{
	borrowedArticles = gcnew array< Int32 >(BORROW_LIMIT);//0 isn't allowed => no article borrowed/reserved
	reservedArticles = gcnew array< Int32 >(BORROW_LIMIT);
	isAdmin = false;
	for (int i = 0 ; i < BORROW_LIMIT ; i++)
	{
		borrowedArticles[i] = 0;
		reservedArticles[i] = 0;
	}
	username = "";
	encryptedPassword = "";
	load(enteredUsername);
}



	bool	User::getAdminStatus()
	{return isAdmin;}


	void	User::setAdminStatus(bool newAdminStatus)
	{isAdmin = newAdminStatus;}


bool User::canBorrow(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is already borrowed
	{
		if(borrowedArticles[i] == articleID)//article is already borrowed
		{
			popup("Epic Fail","Article is already borrowed, please return it first");
			return false;//can't
		}
	}

	for(int i = 0; i < BORROW_LIMIT; i++)//loop a second time to look for free space
	{
		if(borrowedArticles[i] == 0)//the article can be borrowed
			return true;//can
	}
	return false;//can't
}

bool User::borrowArticle(int articleID)
{
	int borrowedIndex = 0;
	for(int i = 0; i < BORROW_LIMIT; i++)//double check
	{
		if(borrowedArticles[i] == articleID)//article is already borrowed
		{
			popup("Error","Article is already borrowed, please return it first");
			return false;//failed
		}
	}

	for(int i = 0; i < BORROW_LIMIT; i++)//loop a second time to look for free space
	{
		if(borrowedArticles[i] == 0)//the article can be borrowed
		{
			borrowedArticles[i] = articleID;//store article in borrowed list
			for(int j = 0; j < RESERVE_LIMIT; j++)//go through list and remove article if it was reserved
			{
				if(reservedArticles[j] == articleID)//article was reserved
					reservedArticles[j] = 0;//un-reserve article
			}
			return true;//successful
		}
	}
	return false;//failed
}

bool User::canReturn(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is actually borrowed
	{
		if(borrowedArticles[i] == articleID)//article is already borrowed
			return true;//can
	}
	return false;//can't
}

bool User::returnArticle(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is actually borrowed
	{
		if(borrowedArticles[i] == articleID)//article is already borrowed
		{
			borrowedArticles[i] = 0;//article isn't borrowed anymore
			return true;//success
		}
	}
	popup("Error","Article is not borrowed, please borrow it first");
	return false;//failed
}

bool User::canReserve(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is already borrowed/reserved
	{
		if((borrowedArticles[i] == articleID)||(reservedArticles[i] == articleID))//article is already borrowed/reserved
		{
			popup("Epic Fail", "Article is already borrowed/reserved.");
			return false;//can't
		}
	}

	return true;
}

bool User::reserveArticle(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//double check
	{
		if((borrowedArticles[i] == articleID)||(reservedArticles[i] == articleID))//article is already borrowed/reserved
		{
			popup("Error", "Article is already borrowed/reserved.");
			return false;//failed
		}
	}

	for(int i = 0; i < BORROW_LIMIT; i++)//loop again to reserve article
	{
		if(reservedArticles[i] == 0)//free space
		{
			reservedArticles[i] = articleID;
			return true;//success
		}
	}
			popup("Error", "Can't reserve anymore articles.");
	return false;//failed
}

bool User::canCancel(int articleID)
{
	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is already reserved
	{
		if(reservedArticles[i] == articleID)//article is already reserved
			return true;
	}


	popup("Epic fail", "Article is not already reserved.");
	return false;
}


bool User::cancelReservation(int articleID)
{

	for(int i = 0; i < BORROW_LIMIT; i++)//loop once to check if article is already reserved
	{
		if(reservedArticles[i] == articleID)//article is already reserved
		{
			reservedArticles[i] = 0;//un-reserve
			return true;
		}
	}

	popup("Error", "Article is not already reserved.");
	return false;
}


String^	User::getUsername()
{return username;}

void User::setUsername(String^ enteredUsername)
{username = enteredUsername;}


String^	User::getEncryptedPassword()
{return encryptedPassword;}

void	User::setEncryptedPassword(String^ enteredEncryptedPassword)
{encryptedPassword = enteredEncryptedPassword;}


bool	User::load(String^ enteredUsername)
{
	String ^ strFilePath;
	strFilePath = FILEPATH_USERS + enteredUsername + ".txt";//update filepath ex: Library/Articles/Books/1234.txt


	if(File::Exists( strFilePath ))
	{
		username = enteredUsername;

		StreamReader^ sr = File::OpenText( strFilePath );
		try
		{

			encryptedPassword = readData(sr);
			isAdmin = managedStringToInt(readData(sr));

			for(int i = 0; i < BORROW_LIMIT; i++)
			{
				borrowedArticles[i] = managedStringToInt(readData(sr));
			}
			for(int i = 0; i < BORROW_LIMIT; i++)
			{
				reservedArticles[i] = managedStringToInt(readData(sr));
			}
		}
		finally//make sure to close file
		{
			if ( sr )
				delete (IDisposable^)sr;
		}

		return true;//Load successful
	}
	else
		return false;//Load failed
}

bool	User::save()
{
	String ^ strFilePath;
	strFilePath = FILEPATH_USERS + username + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strFilePath );
	try
	{
		AddLine( fs, encryptedPassword );
		AddLine( fs, intToManagedString(isAdmin) );

		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			AddLine( fs, intToManagedString(borrowedArticles[i] ));
		}
		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			AddLine( fs, intToManagedString(reservedArticles[i]) );
		}
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}