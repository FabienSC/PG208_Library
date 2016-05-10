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
	void		addReview(std::string newReviewName);
	void		deleteReview(int reviewIndex);
	void		getReviewList();

    void 		getData();

private:
	std::string	_editor;
    vector<std::string> _reviewTitles;
	int			_reviewNum;
};
