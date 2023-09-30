/*say if we wanted to take input from a user and add it to our text file, then 
we'd have to do this*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream hout("samp.txt");
	string name;
	cout<<"What is your name?"<<endl;
	cin>>name;
	hout<<name;

	/*right here, we have created a pipeline from input directly to the file 
	using hout
*/
	//now to close the pipeline, we use the close command to close it
	hout.close();


	ifstream hin("samp.txt");
	string name1;
	getline(hin, name1);
	cout<<"Your name is "<<name1;
	hin.close();

	// same thing has now been done in case of instream

	return 0;




}