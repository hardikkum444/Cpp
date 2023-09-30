#include <iostream>
#include <string>
using namespace std;

class binary
{
public:
	string b;
	void takebin(void);
	void checkbin(void);
	void scope(void);
};

void binary :: takebin(void){

	cout<<"please enter a binary number"<<endl;
	cin>>b;
}

void binary :: checkbin(void){

	for(int i=0; i< b.length(); i++){
		if(b.at(i)!='0' && b.at(i)!='1')
		{
			cout<<"please enter a valid binary number";
			exit(0);
		}
		
	}
}

void binary :: scope(void){

	for(int i=0; i< b.length(); i++){
		if(b.at(i)=='0'){
			b.at(i) ='1';
		}
		//i used another if statement instead of else , and that is what caused 
		// for 0 to become 1 and 1 to again become 0, therefore giving 0 as 
		//output for all thr numbers
		else{
			b.at(i)='0';
		}
	}
	cout<<b<<endl;
}

// void binary :: chk_bin(void)
// {
//     for (int i = 0; i < b.length(); i++)
//     {
//         if (b.at(i) != '0' && b.at(i) != '1')
//         {
//             cout << "Incorrect binary format" << endl;
//             exit(0);
//         }
//     }
// }


int main(){

	binary hardik;
	hardik.takebin();
	hardik.checkbin();
	hardik.scope();

	return 0;
}


/*i was getting an error in the code because, i added an else look, which 
literally exiited when checking the value of i=0 once, great*/


/*by default all the members of a class are private and hence 
can be accessed on when a scope resolution operator has been used*/

// nesting can also be doen if we call a function inside the def of 
// another function, then we dont have to call it again in the main function