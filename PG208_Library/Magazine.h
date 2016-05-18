#pragma once
#include "book.h"

ref class Magazine:public Book
{
public:
	Magazine(void);
	~Magazine(void);

	String^		getEditor();
	void		setEditor(String^ newEditor);

	int			getReviewNumber();	//updates and returns the number of reviews stored
	void		setReviews(String^);//add a list of reviews
	void		deleteReviews();	//delete all reviews
	String^		getReviews();		//returns all reviews in a string

    //void 		getData();
	
	bool		load(int);
	virtual bool	save() new;

private:
	String^		_editor;		//editor
    String^		_reviewTitles;	//titles of reviews
	int			_reviewNum;		//number of reviews
};
