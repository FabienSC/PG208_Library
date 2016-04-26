#pragma once
#include "Article.h"


class CD : public Article//ref class CD?
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
