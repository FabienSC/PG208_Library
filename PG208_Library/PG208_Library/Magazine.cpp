#include "StdAfx.h"
#include "Magazine.h"


Magazine::Magazine(void)
{
//	_isMagazine = 1;
	_editor = "NA";
	_reviewNum;
}

Magazine::~Magazine(void)
{
}


string Magazine::getEditor()
{return _editor;}

void Magazine::setEditor(string newEditor)
{_editor = newEditor;}


int Magazine::getReviewNumber()
{return _reviewNum;}

void Magazine::addReview(string newReviewName)
{
	if (_reviewNum < 10)
	{
		_reviewNum++;
		_reviewTitles.push_back(newReviewName);
	}
	else
		popup("Error","10 reviews are enough, delete one first");
}

void Magazine::deleteReview(int reviewIndex)
{
	if (_reviewNum == 0)
		popup("Error","There are no reviews");	
	else
	{
		if (reviewIndex <= _reviewNum)
		{
			for (int i(reviewIndex - 1); i < (reviewIndex - 1); i++)
			{
				_reviewTitles[i] = _reviewTitles[i+1];
				_reviewTitles.pop_back(); 
				_reviewNum --;
			}
		}
		else
			popup("Error","Select an existing review");
	}
}

void Magazine::getReviewList()
{
	cout << "-------Reviews in this Magazine--------" << endl;
	for (int i(0); i < (_reviewNum - 1); i++)
		cout << "Review #" << i << ": " << _reviewTitles[i] << endl;
	cout << "----------------------------------------" << endl;
}


/*void Magazine::getData()
{
    Book::getData();
	
	cout << "\nEditor: " << getEditor() << endl;
	cout << "Number of reviews: " << getReviewNumber() << endl;

	getReviewList();
}
*/