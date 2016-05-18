#include "StdAfx.h"
#include "Magazine.h"


Magazine::Magazine(void)
{
	//	_isMagazine = 1;
	_editor = "NA";
	_reviewNum;
	_reviewTitles = gcnew array< String^ >(REVIEW_LIMIT);
}

Magazine::~Magazine(void)
{
}


String^ Magazine::getEditor()
{return _editor;}

void Magazine::setEditor(String^ newEditor)
{_editor = newEditor;}


int Magazine::getReviewNumber()
{return _reviewNum;}

void Magazine::addReview(String^ newReviewName)
{
	if (_reviewNum < REVIEW_LIMIT)
	{
		_reviewTitles[_reviewNum] = newReviewName;
		_reviewNum++;
	}
	else
		popup("Error","There are enough reviews are enough, delete one first");
}

void Magazine::deleteReviews()
{
	if (_reviewNum == 0)
	{
		popup("Error","There are no reviews");
		return;
	}
	else
	{
		_reviewNum = 0;
		for (int i = 0 ; i < REVIEW_LIMIT ; i++)
			_reviewTitles[i] = "";
	}
}

String^ Magazine::getReview(int index)
{return _reviewTitles[index];}


/*void Magazine::getData()
{
Book::getData();

cout << "\nEditor: " << getEditor() << endl;
cout << "Number of reviews: " << getReviewNumber() << endl;

getReviewList();
}
*/


void Magazine::addReviews(String^ newReviews)
{

}
	
String^ Magazine::getReviews()
{
	String^ reviews = "";
	
	for (int i = 0 ; i < _reviewNum ; i++)
		reviews = reviews + _reviewTitles[i] + "\n";// \r";

	return reviews;
}


bool Magazine::load(int fileID)
{
	popup("Mag", "load");
	return true;
}


bool Magazine::save()
{
	popup("Mag", "save");
	return true;
}