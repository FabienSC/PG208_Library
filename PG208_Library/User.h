#pragma once
ref class User
{
public:
	User(void);
	User(String^);
	
	String^	getUsername();
	void	setUsername(String^);

	String^	getEncryptedPassword();
	void	setEncryptedPassword(String^);

	bool	borrowArticle(int);
	bool	returnArticle(int);
	bool	reserveArticle(int);
	bool	cancelReservation(int);

	int		getReservedArticle(int);//return Reserved article N's ID
	void	setReservedArticle(int, int);//set Reserved article N's ID

	bool	load(String^ username);
	bool	save();
	
private:
	String^ username;
	String^ encryptedPassword;
	array<Int32>^ borrowedArticles;//array of article IDs
	array<Int32>^ reservedArticles;//array of article IDs
};

