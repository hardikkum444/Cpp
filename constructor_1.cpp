// constructor is nothing but a membor function with the same name as the
// class, which gets executed wheber the class is mentioned or any other 
// function of the class is called in the main function, becasue the name 
// of the class and the constructor function is the same!


#include <iostream>
using namespace std;

class complex{

int a,b;
public:
	complex();//important to note here that we never define a 
	//constructor using like void constructor()
	void getcomplex();
};

complex :: complex(void){ //here also we don't declare a constructor
	// as void complex::complex(void), just complex::complex(void) 

	a = 10; //no need to write int a and int b because in that 
	// it takes different values of a and b.
	b = 9;
}

void complex :: getcomplex(void){

	cout<<"your complex number is: "<<a<<" + "<<b<<"i "<<endl;
}


int main(){

	complex c;
	c.getcomplex();

	return 0;
}

//it is important to keep the name of the class and the constructor 
//the same, otherwise it wont work as a constructor.

//here, complex(void) is a default constructor as it takes void 
//as an input or takes no parameter as an input.

/*
characterisitcs of constructor*/ 

//1) the constructor shoul dbe declared in the public section of 
//the class

//2)as soon as you declare a object of the class, the code of the
//constructor gets executed, i.e even if you write cout in your 
//code of the constructor, as soon as you create an obj complex obj
//the cout line will be rpinted when you run the code

//3)they cannnot return values and do not have return types

//4)we cannot refer to their address