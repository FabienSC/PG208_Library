#pragma once

#include "Article.h"


class Video //: public Article
{
public:
    Video();
	~Video();

    string		getGenre();
    void 		setGenre(std::string newGenre);

    string		getDirector();
    void 		setDirector(std::string newDirector);

    string		getProducer();
    void 		setProducer(std::string newProducer);

    string		getMainActor();
    void 		setMainActor(std::string newMainActor);

	string		getIsDVD();
    void 		setIsDVD(bool newIsDVD);
    void 		setIsDVD(std::string newIsDVD);

    int 		getLength();
    void 		setLength(int newLength);
    
	int 		getAgeLimit();
    void 		setAgeLimit(int newAgeLimit);
    
	int			getChapters();
    void 		setChapters(int newChapters);

    void 		getData();
	bool		load(int);
	bool		save();

private:
    string		_director;
    string		_producer;
    string		_mainActor;
    int 		_length;
    int 		_ageLimit;
    int			_chapters;
    bool		_isDVD;
};
