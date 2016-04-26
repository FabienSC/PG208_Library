#pragma once

#include <vector>
#include "book.h"

class Magazine:
	public Book
{
public:
	Magazine(void);
	~Magazine(void);

	std::string getEditor();
	void		setEditor(std::string newEditor);

	int			getReviewNumber();
	void		setNextReview(std::string newReviewName); 
	void		setNextReview(std::string newReview, int newIndex); 
	void		delReview(int delIndex);
	void		getReviewList();

private:
	std::string	_editor;
    std::string	_reviewList[10];
	int			_reviewNumber;
};
