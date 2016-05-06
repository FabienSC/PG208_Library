#pragma once

#include "Article.h"


class DigitalRes :
	public Article
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

private:
    std::string _author;
    std::string _fileType;
    std::string _fileName;//no need: use _title
    std::string _URL;
    int 		_byteSize;
};

