#include <iostream>
using namespace std;

struct empoloyee
{
	string name;
	int reg_no;
	int salary;

};

int main(){

	struct empoloyee hardik;
	cout<<"please enter your name"<<endl;
	cin>>hardik.name;
	cout<<"please enter your id"<<endl;
	cin>>hardik.reg_no;
	cout<<"please enter your salary"<<endl;
	cin>>hardik.salary;
	cout<<"\n\n"<<endl;
	cout<<"===============================================\n\n";

	cout<<"please verify, by typing y or n, if the following data is correct"<<endl;
	cout<<hardik.name<<endl;
	cout<<hardik.reg_no<<endl;
	cout<<hardik.salary<<endl;

	int op;
	cin>>op;
	if(op == 1){
		cout<<"your details have been submitted!"<<endl;
	}
	else{
		cout<<"there was a problem with your details"<<endl;
	}

	return 0;
}


// you get the entire jist right, not too complex, similar to a class

/*an important point is that, instead of 'struct employee' you can 
place a small word or anotation after the closing of the struct before the 
main function, 

}; emp

and then in the main function you can just 
 emp hardik; and continue*/


/***** make sure to use typedef before struct empoloyee, technically before 
defining the function if you want to use the above advantage.*****/