#pragma once
#include "book.h"
class Periodical :
	public Book
{
public:
	Periodical(void);
	~Periodical(void);
	std::string getEditor();
	void		setEditor(std::string newEditor);

	int			getReviewNumber();
	void		setNewReview(std::string newReviewName);						//adds new review at the end of magazine
	//void		setNewReview(std::string newReviewName, int newReviewIndex);	//adds new review at index within existing reviews
	void		delReview(int delReviewIndex);
	void		getReviewList();

protected:
	std::string _editor;
    std::string _reviewTitles[10];
	int			_reviews;
};

