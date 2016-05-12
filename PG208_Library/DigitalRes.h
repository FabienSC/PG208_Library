#pragma once

#include "Article.h"


class DigitalRes //: public Article
{
public:
	DigitalRes(void);
	~DigitalRes(void);

    std::string getAuthor();
    void 		setAuthor(std::string newAuthor);

    std::string getFileType();
    void 		setFileType(std::string newFileType);

    std::string getFileName();
    void 		setFileName(std::string newFileName);

	std::string getURL();
    void 		setURL(std::string newURL);

	int 		getByteSize();
    void 		setByteSize(int newByteSize);
    
    void 		getData();
	bool		load(int);
	bool		save();

private:
    string		_author;
    string		_fileType;
    string		_fileName;//no need: use _title
    string		_URL;
    int 		_byteSize;
};

