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

	bool	canBorrow(int);//true if user can borrow that article
	bool	canReturn(int);
	bool	canReserve(int);
	bool	canCancel(int);

	bool	borrowArticle(int);//adds article to borrowed list
	bool	returnArticle(int);
	bool	reserveArticle(int);
	bool	cancelReservation(int);

	bool	load(String^ username);
	bool	save();
	
private:
	String^ username;
	String^ encryptedPassword;
	array<int>^ borrowedArticles;//array of article IDs
	array<int>^ reservedArticles;//array of article IDs
};

