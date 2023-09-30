#include <iostream>
#include <fstream>

/*
The usefull classes for working with files in c++ are:
1. fstreambase 
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/* In order to work with files in c++, you will have to open it,
there are two ways to open a file 

1. using a constructor 
2. using the member function open() to the class
*/
  
using namespace std;

int main(){


	//opening file using constructor and writing in it
	string name = "Hardik Kumawat";
	string name1;
	// ofstream out("sample1.txt"); 
	// out<<name;

	//opening file using constructor and reading from it
	//however this will only read the first word of the file
	//that's why we will need to use the getline function
	
	ifstream in("samp.txt");
	// in>>name1;
	// cout<<name1<<endl;
/*	Now in the above case, the program only prints the first word and nothing 
	else.
	To make it read everything, we use the getline function, it reads the entire
	sentence, but only 1 line, so you have to use it again and again for how many
	ever lines you want to read from the file.
*/

	getline(in, name1);
	getline(in, name1);
	
	cout<<name1;

	return 0;
}