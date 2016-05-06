#pragma once

#include "Article.h"


class Video : public Article
{
public:
    Video();
	~Video();

    std::string getGenre();
    void 		setGenre(std::string newGenre);

    std::string getDirector();
    void 		setDirector(std::string newDirector);

    std::string getProducer();
    void 		setProducer(std::string newProducer);

    std::string getMainActor();
    void 		setMainActor(std::string newMainActor);

	std::string getIsDVD();
    void 		setIsDVD(bool newIsDVD);
    void 		setIsDVD(std::string newIsDVD);

    int 		getLength();
    void 		setLength(int newLength);
    
	int 		getAgeLimit();
    void 		setAgeLimit(int newAgeLimit);
    
	int			getChapters();
    void 		setChapters(int newChapters);

    void 		getData();
	bool		save();

private:
    std::string _director;
    std::string _producer;
    std::string _mainActor;
    bool		_isDVD;
    int 		_ageLimit;
    int 		_length;
    int			_chapters;
};
