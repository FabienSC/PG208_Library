#include "StdAfx.h"
#include "Magazine.h"
#include <string.h>


Magazine::Magazine(void)
{
	_isMagazine = 1;
	_editor = "NA";
	_reviewNum;
	_reviewList = "NA"; 
}

Magazine::~Magazine(void)
{
}


string Magazine::getEditor()
{return _editor;}

void Magazine::setEditor(string newEditor)
{_editor = newEditor;}


int Magazine::getReviewNumber()
{
	int tmp(0);
	int sausage(0);
	sausage = _reviewList.size();
	char* zbleh = stringToChar (_reviewList);
	while (tmp < sausage)
	{
	tmp ++;
		if (zbleh[tmp] == '\n')
		{
			_reviewNum ++;	
		}
	}
	return _reviewNum;
}

/*
void Magazine::addReview(string newReviewName)
{
if (_reviewNum < 10)
{
_reviewNum++;
_reviewList.push_back(newReviewName);
}
else
popup("Error","10 reviews are enough, delete one first");
}
*/

/*
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
_reviewList[i] = _reviewList[i+1];
_reviewList.pop_back(); 
_reviewNum --;
}
}
else
popup("Error","Select an existing review");
}
}
*/

string Magazine::getReviewList()
{
	string dataList = "-------Reviews in this Magazine--------\n\n" + _reviewList;//make one big string
	return dataList;
}

void Magazine::setReviewList(std::string newReviewList)
{_reviewList = newReviewList;}




void Magazine::getData()
{//for a terminal version... useless
	Book::getData();

	cout << "\nEditor: " << getEditor() << endl;
	cout << "Number of reviews: " << getReviewNumber() << endl;
	cout << "------List of reviews--------" << endl;
	cout << _reviewList << endl;
}
