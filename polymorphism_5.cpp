//this is an important question and answer of function overloading using 
//inheritance and pointers, look through this because its not what it seems like

#include <iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"base class called"<<endl;
    }
};

class B : public A
{
    public:
    void show()
    {
        cout<<"base class called"<<endl;
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
    