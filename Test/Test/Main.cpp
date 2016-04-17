// my first program in C++

#include "stdafx.h"//Fabien's useless comment

using namespace std; //ALEX COMMENTS FOR ALL NIGGAS AVAILABLE AT THE AIRPORT BECAUSE it iS COOL!

int _tmain(int argc, _TCHAR* argv[])
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

	while(1)
		;
    return 0; 
}

/*
TODO

- one object is a certain amount of articles with the same properties (copies)
		-borrow and return change the amount of articles available
		-availability shows how many are left
		
- borrow / latest return dates

- user ID >> who borrowed it?
		
*/

