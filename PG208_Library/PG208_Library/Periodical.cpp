#include "StdAfx.h"

#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "Periodical.h"

using namespace std;

Periodical::Periodical(void)
{
		int i = 0;
	_isMagazine = 1;
	_reviews = 0;
	while(i<10)
	{
		_reviewTitles[i] = " ";
		i++;
	}

}


Periodical::~Periodical(void)
{
}

string Periodical::getEditor()
{return _editor;}



void Periodical::setEditor(string newEditor)
{_editor = newEditor;}

int	Periodical::getReviewNumber()
{return _reviews;}

void Periodical::setNewReview(string newReviewName)						//adds new review at the end of magazine
{
	if(_reviews >= 10)
		cout << "This Magazine already has 10 reviews, that's enough! You must delete some if you want new ones" << endl;
	else 
	{
		_reviewTitles[_reviews] = newReviewName;
		_reviews++;
	}
}

/*void Periodical::setNewReview(std::string newReviewName, int newReviewIndex)	//adds new review at index within existing reviews
{
int cpt(0);

if(_reviews >= 10)
cout << "This Magazine already has 10 reviews, that's enough! You must delete some if you want new ones" << endl;
else
{
if(newReviewIndex > 10 || newReviewIndex < 1)
cout << "Please enter review index between 1 and 10" << endl;
else 
{

_reviewTitles[newReviewIndex - 1] = newReviewName;
}
}
*/

void Periodical::delReview(int delReviewIndex)
{
	int cpt(delReviewIndex - 1);
	if(delReviewIndex > 10 || delReviewIndex < 1)
		cout << "Please enter review index between 1 and 10" << endl;
	else
	{
		while(cpt < 10)
		{
			_reviewTitles[cpt] = _reviewTitles[cpt+1];
			cpt++;
		}
	}
}

void Periodical::getReviewList()
{
	int cpt(1);
	while (cpt <= 10)
	{
		cout << cpt << _reviewTitles[cpt-1] << endl;
	}
}

