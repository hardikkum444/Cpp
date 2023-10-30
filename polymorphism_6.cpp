//important thing about ptr and static and dynamic MA and inheritance in polymorphism

#include <iostream>
using namespace std;

class base
{
    public:
    void print()
    {
    cout<<"this is the base class"<<endl;
    }
        
};

class child : public base
{
    public:
    void print()
    {
        cout<<"this is the child class"<<endl;
    }
};

int main()
{
    base* man = new child; //this is the same thing as:
    
    base* ptr;
    child man1;
    ptr = &man1;
    ptr->print();
    man->print();
}