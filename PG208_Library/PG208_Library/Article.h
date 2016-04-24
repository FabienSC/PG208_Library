#ifndef ARTICLES_H
#define ARTICLES_H

#include <string>


class Article
{
public:
    Article();
    ~Article();

	void 		setID(int newID);								//1 to 1000 for books, 1001 to 2000 for CDs ...
    int 		getID();						    
	
	void 		setTitle(std::string newTitle);		
    std::string getTitle();						
    
	void 		setReleaseDate(int newReleaseDate);		
    int 		getReleaseDate();						
    
	void		setAvailability(bool newIsAvailable);			//manual set for initialisation only 
	void		setAvailability(std::string newIsAvailable);	
	std::string getAvailability();
    bool 		borrowArticle();						// if already borrowed, can't borrow it...
    bool 		returnArticle();						// if in library, can't return...

	void 		getGeneralData();

	bool		loadFromFile(const char* fileName);
	bool		saveToFile(const char* fileName, Article myArticle);	
	bool		saveToFile(const char* fileName);

private:
    unsigned int _ID;
    std::string _title;
    bool _isAvailable;
    int _releaseDate;//YYYYMMDD
};

#endif // ARTICLES_H


/*-----------------------------------------------
-----------------------------------------------
-----------------------------------------------
-----------------------------------------------
-----------------------------------------------

#ifndef PERSONNE_H
#define PERSONNE_H

class Personne
{
    public :

        Personne(); 
        Personne(std::string gender, std::string firstName, std::string name, int birthYear, std::string status);

        ~Personne(); //destructeur

        std::string  get_pGender() const;
        std::string  get_pFirstName() const;
        std::string  get_pName() const;
        int          get_pBirthYear() const;
        std::string  get_pStatus() const;

        void         set_pGender(std::string gender);
        void         set_pFirstName(std::string firstName);
        void         set_pName(std::string name);
        void         set_pBirthYear(int birthYear);
        void         set_pStatus(std::string status);

        void         display_pInfo();
        void         display_pInfoExt();

        bool         loadFromFile(const char* filename);
        bool         saveToFile(const char* filename);

    private :

        std::string  pGender;
        std::string  pFirstName;
        std::string  pName;
        int          pBirthYear;
        std::string  pStatus;

        std::string  filename;

};



#endif
*/