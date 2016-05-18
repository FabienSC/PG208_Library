#include "stdafx.h"
#include "search.h"

bool searchArticle(Article^ myArticle, String^ searchString)
{
	int fileID = myArticle->getID();
	if(intToManagedString(fileID)->Contains(searchString))
		return true;
	else if(myArticle->getTitle()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getReleaseDate())->Contains(searchString))
		return true;

	return false;
}

bool searchBook(Book^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	
	if(searchArticle(myArticle, searchString))
		return true;
	else if(myArticle->getAuthor()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getPublisher()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getPages())->Contains(searchString))
		return true;
	else if(myArticle->getSummary()->ToLower()->Contains(searchString))
		return true;
	else
		return false;
}

bool searchMagazine(Magazine^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	if(searchArticle(myArticle, searchString))
		return true;
	else if(searchBook(myArticle, searchString))
		return true;
	else if(myArticle->getEditor()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getReviews()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getReviewNumber())->Contains(searchString))
		return true;
	else
		return false;
}

bool searchCD(CD^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	
	if(searchArticle(myArticle, searchString))
		return true;
	else if(myArticle->getArtist()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getRecordCompany()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getMusicStyle()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getTracks())->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getDuration())->Contains(searchString))
		return true;
	else
		return false;
}

bool searchDVD(Video^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	
	if(searchArticle(myArticle, searchString))
		return true;
	else if(searchVHS(myArticle, searchString))
		return true;
	else if(intToManagedString(myArticle->getChapters())->Contains(searchString))
		return true;
	else
		return false;
}

bool searchVHS(Video^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	
	if(searchArticle(myArticle, searchString))
		return true;
	else if(myArticle->getDirector()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getProducer()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getMainActor()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getLength())->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getAgeLimit())->Contains(searchString))
		return true;
	else
		return false;
}


bool searchDigitalRes(DigitalRes^ myArticle, String^ searchStr)
{
	String^ searchString = searchStr->ToLower();
	
	if(searchArticle(myArticle, searchString))
		return true;
	else if(myArticle->getAuthor()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getFileType()->ToLower()->Contains(searchString))
		return true;
	else if(myArticle->getURL()->ToLower()->Contains(searchString))
		return true;
	else if(intToManagedString(myArticle->getByteSize())->Contains(searchString))
		return true;
	else
		return false;
}