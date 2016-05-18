#pragma once

#include "Article.h"


ref class DigitalRes : public Article
{
public:
	DigitalRes(void);
	~DigitalRes(void);

    String^		getAuthor();
    void 		setAuthor(String^ newAuthor);

    String^		getFileType();
    void 		setFileType(String^ newFileType);

//    String^		getFileName();
//    void 		setFileName(String^ newFileName);

	String^		getURL();
    void 		setURL(String^ newURL);

	int 		getByteSize();
    void 		setByteSize(int newByteSize);
    
//    void 		getData();
	bool		load(int);
	virtual bool		save() new;

private:
    String^		_author;
    String^		_fileType;
//    String^		_fileName;//no need: use _title
    String^		_URL;
    int 		_byteSize;
};

