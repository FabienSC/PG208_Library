#pragma once

#include "Article.h"


ref class Video : public Article
{
public:
    Video();
	~Video();

    String^		getDirector();
    void 		setDirector(String^ newDirector);

    String^		getProducer();
    void 		setProducer(String^ newProducer);

    String^		getMainActor();
    void 		setMainActor(String^ newMainActor);

	bool		getIsDVD();
    void 		setIsDVD(bool newIsDVD);
    void 		setIsDVD(String^ newIsDVD);

    int 		getLength();
    void 		setLength(int newLength);
    
	int 		getAgeLimit();
    void 		setAgeLimit(int newAgeLimit);
    
	int			getChapters();
    void 		setChapters(int newChapters);

	bool		load(int);
	virtual bool		save() new;

private:
    String^		_director;
    String^		_producer;
    String^		_mainActor;
    int 		_length;
    int 		_ageLimit;
    int			_chapters;
    bool		_isDVD;
};
