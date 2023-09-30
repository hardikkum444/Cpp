// constructor overloading 
// in constructor overloading, we basicaly create different types of constructors
// for different purposes for eg:


// #include <iostream>
// using namespace std;

// class complex
// {
// 	int a,b;
// 	public:
// 		complex(int, int);

// 	void getcomplex(void){
// 		cout<<a<<" + "<<b<<"i"<<endl;
// 	}
// };

// complex :: complex(int x, int y){
// 	a=x;
// 	b=y;
// }

// complex :: complex(int x){
// 	a=x;
// 	b=0;
// }

// complex :: complex(){
// 	a=0;
// 	b=0;
// }


// int main(){

// 	complex h(2,3);
// 	h.getcomplex();

// 	complex s(1);
// 	s.getcomplex();

// 	complex hardik();
// 	hardik.getcomplex();

// 	return 0;

// }



#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){                 //we have not called the function outside of the class again to define it, that is the secret which we have done, it is important to note this!
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}











