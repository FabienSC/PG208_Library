#pragma once
#include "book.h"

ref class Magazine:public Book
{
public:
	Magazine(void);
	~Magazine(void);

	String^		getEditor();
	void		setEditor(String^ newEditor);

	int			getReviewNumber();	//returns the number of reviews stored
	void		addReview(String^);	//add a review to the list
	void		addReviews(String^);//add a list of reviews
	void		deleteReviews();	//delete all reviews
	String^		getReview(int);		//returns review number X
	String^		getReviews();		//returns all reviews in a string

    //void 		getData();
	
	bool		load(int);
	bool		save();

private:
	String^			_editor;		//editor
    array<String^>^ _reviewTitles;	//titles of reviews
	int				_reviewNum;		//number of reviews
};
