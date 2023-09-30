#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){


	/*now we use this particular syntax, when we want to open a file and 
	continuously do work in it, after the work is done, we can then close 
	this file, like below: */

	ofstream out;
	out.open("samp1.txt");
	out<<"this is some random text\n";
	out<<"this is also some random text\n\n";
	out<<"my name is hardik and i like reading books";
	out.close();

	/*same can be done with ifstream*/

	// ifstream in;
	// in.open("samp1.txt");
	// string text1;
	// getline(in, text1);
	// cout<<text1;
	// in.close();

	// but now we are going to do this with the help of a while loop:

	ifstream in;
	string text;
	in.open("samp1.txt");
	while (in.eof()==0){
		getline(in, text);
		cout<<text<<endl;
	};
	//this is by far the best method to read or write in a file




	return 0;
}