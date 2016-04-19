#pragma once
#ifndef video_H
#define video_H
#include "Article.h"


class video : public Article
{
public:
    video();
	~video();

    std::string getGenre();
    void 		setGenre(std::string newGenre);

    std::string getDirector();
    void 		setDirector(std::string newDirector);

    std::string getProducer();
    void 		setProducer(std::string newProducer);

    std::string getMainActor();
    void 		setMainActor(std::string newMainActor);

	std::string getSupport();
    void 		setSupport(std::string newSupport);


    int 		getLength();
    void 		setLength(int newLength);
    
	int 		getAgeLimit();
    void 		setAgeLimit(int newAgeLimit);
    
    void 		getData();

private:
    std::string _director;
    std::string _producer;
    std::string _mainActor;
    std::string _support;
    int 		_ageLimit;
    int 		_length;
};

#endif // video_H
