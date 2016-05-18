#include "StdAfx.h"
#include "Magazine.h"


Magazine::Magazine(void)
{
	//	_isMagazine = 1;
	_editor = "NA";
	_reviewNum = 0;
	_reviewTitles = "";
}

Magazine::~Magazine(void)
{
}


String^ Magazine::getEditor()
{return _editor;}

void Magazine::setEditor(String^ newEditor)
{_editor = newEditor;}


int Magazine::getReviewNumber()
{
	_reviewNum = getNumberOfLines(_reviewTitles);
	return _reviewNum;
}

void Magazine::setReviews(String^ newReviews)
{_reviewTitles = newReviews;}

void Magazine::deleteReviews()
{_reviewTitles = "";}

String^ Magazine::getReviews()
{return _reviewTitles;}


/*void Magazine::getData()
{
Book::getData();

cout << "\nEditor: " << getEditor() << endl;
cout << "Number of reviews: " << getReviewNumber() << endl;

getReviewList();
}
*/


bool Magazine::load(int fileID)
{
	String ^ strIDFilePath;

	strIDFilePath = FILEPATH_MAGAZINE + fileID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt


	if(File::Exists( strIDFilePath ))
	{
		_ID = fileID;//Load ID

		StreamReader^ sr = File::OpenText( strIDFilePath );
		try
		{
			_title = readData(sr);
			_releaseDate = managedStringToInt(readData(sr));
			_quantity = managedStringToInt(readData(sr));
			_qtyLent = managedStringToInt(readData(sr));

			_author = readData(sr);
			_publisher = readData(sr);
			_synopsis = readData(sr);
			_pages = managedStringToInt(readData(sr));

			_editor = readData(sr);
			_reviewTitles = readData(sr);
			_reviewNum = managedStringToInt(readData(sr));
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


bool Magazine::save()
{
	popup("cool","mag save");
	String ^ strIDFilePath;

	strIDFilePath = FILEPATH_MAGAZINE + _ID + ".txt";//update filepath ex: Library/Articles/Books/1234.txt

	FileStream^ fs = File::Create( strIDFilePath );
	try
	{
		AddLine( fs, _title );								//save title
		AddLine( fs, intToManagedString(_releaseDate) );	//save release date
		AddLine( fs, intToManagedString(_quantity) );		//save the cheerleader
		AddLine( fs, intToManagedString(_qtyLent) );		//save the World
		AddLine( fs, _author );
		AddLine( fs, _publisher );
		AddLine( fs, _synopsis );
		AddLine( fs, intToManagedString(_pages) );
		AddLine( fs, _editor );
		AddLine( fs, _reviewTitles );
		AddLine( fs, intToManagedString(_reviewNum) );
	}
	finally//make sure to close file
	{
		if ( fs )
			delete (IDisposable^)fs;
	}

	return true;//Save successful
}