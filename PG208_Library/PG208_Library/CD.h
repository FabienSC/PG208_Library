#pragma once
#include "article.h"
ref class CD :
public Article
{
public:
	CD(void);
};

/*
#ifndef CD_H
#define CD_H
#include "Article.h"


class CD : public Article
{public:
    CD();
    ~CD();

    std::string getArtist();
    void 		setArtist(std::string newArtist);

    std::string getRecordCompany();
    void 		setRecordCompany(std::string newRecordCompany);

    std::string getMusicStyle();
    void 		setMusicStyle(std::string newMusicStyle);

    int 		getDuration();
    void 		setDuration(int newDuration);
    
    void 		getData();

//title, artist, duration, record company, music style

private:
    std::string _artist;
    std::string _recordCompany;
    std::string _musicStyle;
    int 		_duration;//in seconds
};

#endif // CD_H

*/