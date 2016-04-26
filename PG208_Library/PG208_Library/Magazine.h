#pragma once

#include <vector>
#include "book.h"

class Magazine:
	public Book
{
public:
	Magazine(void);
	~Magazine(void);
<<<<<<< HEAD
/*
	getEditor
	setEditor
=======

	std::string getEditor();
	void		setEditor(std::string newEditor);
>>>>>>> Origin/master

	int			getReviewNumber();
	void		setNextReview(std::string newReviewName); 
	void		setNextReview(std::string newReview, int newIndex); 
	void		delReview(int delIndex);
	void		getReviewList();

private:
<<<<<<< HEAD
	std::string _editor;
    vector std::string _reviewTitles
	int			_reviews;*/
=======
	std::string	_editor;
    std::string	_reviewList[10];
	int			_reviewNumber;
>>>>>>> Origin/master
};
