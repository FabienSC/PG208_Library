#pragma once
#include "Article.h"


ref class CD : public Article
{public:
    CD();
    ~CD();

    String^		getArtist();
    void 		setArtist(String^ newArtist);

    String^		getRecordCompany();
    void 		setRecordCompany(String^ newRecordCompany);

    String^		getMusicStyle();
    void 		setMusicStyle(String^ newMusicStyle);

    int 		getDuration();
    void 		setDuration(int newDuration);

    int 		getTracks();
    void 		setTracks(int newTracks);

   // void 		getData();
	
	bool		load(int fileID);
	virtual bool		save() new;
//title, artist, duration, record company, music style

private:
    String^		_artist;
    String^		_recordCompany;
    String^		_musicStyle;
    int 		_duration;//in seconds
	int			_tracks;
};
