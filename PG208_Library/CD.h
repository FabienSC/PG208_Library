#pragma once
#include "Article.h"


class CD //: public Article//ref class CD?
{public:
    CD();
    ~CD();

    string		getArtist();
    void 		setArtist(std::string newArtist);

    string		getRecordCompany();
    void 		setRecordCompany(std::string newRecordCompany);

    string		getMusicStyle();
    void 		setMusicStyle(std::string newMusicStyle);

    int 		getDuration();
    void 		setDuration(int newDuration);

    int 		getTracks();
    void 		setTracks(int newTracks);

    void 		getData();
	
	bool		load(int fileID);
	bool		save();
//title, artist, duration, record company, music style

private:
    string		_artist;
    string		_recordCompany;
    string		_musicStyle;
    int 		_duration;//in seconds
	int			_tracks;
};
