#pragma once

//#include <vector>
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
	//void		addReview(std::string newReviewName);
	//void		deleteReview(int reviewIndex);
	std::string	getReviewList();
	void		setReviewList(std::string newReviewList);

    void 		getData();

private:
	std::string	_editor;
	std::string _reviewList;
    //vector<std::string> _reviewList;
	int			_reviewNum;
};
