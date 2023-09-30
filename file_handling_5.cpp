/*Binary files in c++*/
// in this part of file handling we will learn how to make binary files
// you know, the ones with the wierd characters, we will store and increase the size of
// the file, using this type of file handling.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	int p;

	// fstream myfile("test.bin",ios::binary);
	// myfile.write((char *)&p,sizeof(p));

	//with the above code, you'll notice that, the size of the binary .bin file 
	//has become 4 bytes, which is the size of the int data type.


	//now to read from the file, we basically use the same syntax, except use in and 
	//read instead of out and write.

	fstream myfile("test.bin",ios::binary);
	myfile.read((char *)&p,sizeof(p));
	cout<<p;

	return 0;
}