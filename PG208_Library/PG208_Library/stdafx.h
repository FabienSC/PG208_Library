// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once


using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;

#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "conversion.h"
#include "cipher.h"
#include "popups.h"
#include "Article.h"
#include "Book.h"
#include "Magazine.h"
#include "CD.h"
#include "Video.h"
#include "DigitalRes.h"
#include "Library.h"
#include <sys/stat.h>//for checking if a file exists


// TODO: reference additional headers your program requires here
#define BASE_MIN_ID		1000	//Min
#define BASE_BOOK_ID	1000	//1000~2999 reserved for books
#define BASE_MAGAZINE_ID		3000	//3000~3999 reserved for Magazines
#define BASE_CD_ID		4000	//4000~5999 reserved for CDs
#define BASE_DVD_ID		6000	//6000~6999 reserved for DVDs
#define BASE_VHS_ID		7000	//7000~7999 reserved for VHSs
#define BASE_DIGITAL_ID 8000	//8000~9999 reserved for Digital Resources
#define BASE_MAX_ID		10000	//Max

#define FILEPATH_USERS "Library/Users/"
#define FILEPATH_BOOK "Library/Articles/Books/"
#define FILEPATH_MAGAZINE "Library/Articles/Magazines/"
#define FILEPATH_CD "Library/Articles/CDs/"
#define FILEPATH_DVD "Library/Articles/DVDs/"
#define FILEPATH_VHS "Library/Articles/VHSs/"
#define FILEPATH_DIGITAL "Library/Articles/Digital_Resources/"


#include "FormNewUser.h"
#include "FormEditArticle.h"
#include "FormNewArticle.h"
#include "FormHomeAdmin.h"//must be last