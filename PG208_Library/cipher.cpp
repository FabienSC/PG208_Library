#include "stdafx.h"
#include "cipher.h"


char* encrypt(char* cipherKey,char* cipherText)//encrypts the password using a vignere cipher
{
	int sizeKey = strlen(cipherKey);
	int sizeText = strlen(cipherText);

	int j = 0;

	for(int i = 0; i < sizeText; i++)
	{
		int tmpInt = cipherText[i] + cipherKey[j] - 32;
		j++;
		if(j == sizeKey)
			j = 0;

		if(tmpInt > 126)
			tmpInt -= 95;//loop back to bottom
		else if(tmpInt < 32)
			tmpInt += 95;//loop back to top

		cipherText[i] = tmpInt;
	}
	return cipherText;
}


char* decrypt(char* cipherKey,char* cipherText)//decrypts the password using a vignere cipher
{
	int sizeKey = strlen(cipherKey);
	int sizeText = strlen(cipherText);

	int j = 0;

	for(int i = 0; i < sizeText; i++)
	{
		int tmpInt = cipherText[i] - cipherKey[j] + 32;
		j++;
		if(j == sizeKey)
			j = 0;

		if(tmpInt > 126)
			tmpInt -= 95;//loop back to bottom
		else if(tmpInt < 32)
			tmpInt += 95;//loop back to top

		cipherText[i] = tmpInt;
	}
	return cipherText;
}