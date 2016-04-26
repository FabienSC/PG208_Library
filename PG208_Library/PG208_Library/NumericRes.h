#pragma once

#include "Article.h"


class NumericRes :
	public Article
{
public:
	NumericRes(void);
	~NumericRes(void);

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
    std::string _fileName;
    std::string _URL;
    int 		_byteSize;
};

