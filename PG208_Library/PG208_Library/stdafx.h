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
#include "video.h"
#include "NumericRes.h"
#include "Library.h"
#include <sys/stat.h>//for checking if a file exists


// TODO: reference additional headers your program requires here
#define BASE_BOOK_ID 1000//1000~3000 reserved for books
#define BASE_CD_ID 3000
#define FILEPATH_USERS "Library/Users/"
#define FILEPATH_BOOK "Library/Articles/Books/"
#define FILEPATH_CD "Library/Articles/CDs/"


#include "FormNewUser.h"
#include "FormEditArticle.h"
#include "FormNewArticle.h"
#include "FormHomeAdmin.h"//must be last