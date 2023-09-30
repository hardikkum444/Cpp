#include <iostream>
using namespace std;


// Firstly we will make a very very basic program:

int sum(int a, int b);
void greet(void);

//this will also work void greet(nothing written here)

// see by using function prototyping here, we have declared the function first 
// then we have given the main function, and then after that, we have defined the
// sum function

int main(){
	int num1, num2;
	cout<<"please enter your first number"<<endl;
	cin>>num1;
	cout<<"please enter your second number"<<endl;
	cin>>num2;
	cout<<"the sum of your two numbers is:\n"<<sum(num1,num2)<<endl;
	greet();
	return 0;
}

int sum(int a, int b){
	int c = a+b;
	return c;
}

void greet(){
	cout<<"hello, hope youre having a wonderfull day! ";
}

/*Now in case of funciton prototyping we can declare the function before 
the main function and then, after the main function we can define the funciton*/

/*the syntax for function prototyping is:
type function-name (arguments);*/

/*
PARAMETERS AND ARGUMENTS 
it is very important to undersatnd the concept of parameters and ARGUMENTS

1. when you make the function, for ex: sum(int a, int b)
   here a and b are your parameters
2. when you use this function in the main function for ex: sum(5,6)
   this 5 and 6 is known as arguments

   they are also called formal parameters
*/


/*void functions
pass the function as void function name*/






