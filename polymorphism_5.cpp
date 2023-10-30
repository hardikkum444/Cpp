//this is an important question and answer of function overloading using 
//inheritance and pointers, look through this because its not what it seems like

#include <iostream>
using namespace std;

class A
{
    public:
    virtual void show()
    {
        cout<<"base class called"<<endl;
    }
};

class B : public A
{
    public:
    void show()
    {
        cout<<"derived class called"<<endl;
    }
};

int main()
{
    A *bptr;
    A hardik;
    bptr =&hardik;
    
    bptr->show();
    
    B boy;
    bptr =&boy;
    
    bptr->show();
}


//by using virtual keyword whilst defining the function, 
//there is clear distinction between the two funcitons and the derived class show gets called 

//try using without the virtual function