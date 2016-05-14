#include "StdAfx.h"
#include "User.h"


User::User(void)
{
	borrowedArticles = gcnew array< Int32 >(BORROW_LIMIT);//0 isn't allowed => no article borrowed/reserved
	reservedArticles = gcnew array< Int32 >(BORROW_LIMIT);
	for (int i = 0 ; i < BORROW_LIMIT ; i++)
      {
		  borrowedArticles[i] = 0;
		  reservedArticles[i] = 0;
	}
	username = "";
	encryptedPassword = "";
}

User::User(String^ enteredUsername)
{
	borrowedArticles = gcnew array< Int32 >(BORROW_LIMIT);//0 isn't allowed => no article borrowed/reserved
	reservedArticles = gcnew array< Int32 >(BORROW_LIMIT);
	for (int i = 0 ; i < BORROW_LIMIT ; i++)
      {
		  borrowedArticles[i] = 0;
		  reservedArticles[i] = 0;
	}
	username = "";
	encryptedPassword = "";
	load(enteredUsername);
}


int		User::getBorrowedArticle(int i)
{return borrowedArticles[i];}

void	User::setBorrowedArticle(int i, int j)
{borrowedArticles[i] = j;}

int		User::getReservedArticle(int i)
{return reservedArticles[i];}

void	User::setReservedArticle(int i, int j)
{reservedArticles[i] = j;}


String^	User::getUsername()
{return username;}

void	User::setUsername(String^ enteredUsername)
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
		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			setBorrowedArticle(i,managedStringToInt(readData(sr)));
		}
		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			setReservedArticle(i,managedStringToInt(readData(sr)));
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
		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			AddLine( fs, intToManagedString(getBorrowedArticle(i) ));
		}
		for(int i = 0; i < BORROW_LIMIT; i++)
		{
			AddLine( fs, intToManagedString(getReservedArticle(i)) );
		}
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}