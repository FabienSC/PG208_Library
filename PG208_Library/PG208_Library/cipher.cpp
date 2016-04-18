#include "StdAfx.h"
#include "cipher.h"


char* decrypt(char* filePassword,int sizePassword)
{
	for(int i = 0; i < sizePassword; i++)
	{
		filePassword[i] = filePassword[i]+1;
	}
	return filePassword;
}


char* encrypt(char* enteredPassword,int sizePassword)
{
	for(int i = 0; i < sizePassword; i++)
	{
		enteredPassword[i] = enteredPassword[i]-1;
	}
	return enteredPassword;
}
