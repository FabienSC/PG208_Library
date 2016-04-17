#include <iostream>
#include <string>
#include <assert.h>
#include <fstream>

#include "Article.h"
#include "Book.h"
#include "CD.h"

/*
TODO

- one object is a certain amount of articles with the same properties (copies)
		-borrow and return change the amount of articles available
		-availability shows how many are left
		
- borrow / latest return dates

- user ID >> who borrowed it?
		
*/

using namespace std;

int main(int argc, char *argv[])
{
    Book myArt;
    
    myArt.setID(5);
    cout << myArt.getID() << endl;
    
    //check if it twerks
    myArt.getData();

	myArt.setAuthor("Fabien Santos Cessac");
	myArt.setID(15);
	myArt.setPages(558);
	myArt.setPublisher("Alexander Huggonson");
	myArt.setReleaseDate(2025);
	myArt.setTitle("Falling into the Don");
    
    myArt.getData();

    return 0; 
}
