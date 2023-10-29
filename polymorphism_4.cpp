//run-time polymorphism 
//aparantly this is very easy

//some rules to be followed
//1) name of the functions need to be the same 
//2) no parameter difference should be there
//3) can only be done through inheritance

#include <iostream>
using namespace std;

class parent
{
    public:
    void print()
    {
        cout<<"parent print called"<<endl;
    }
};

class child1 : public parent
{
    public:
    void print()
    {
        cout<<"child1 print called"<<endl;
    }
};

class child2 : public parent
{
    public:
    void print()
    {
        cout<<"child2 print called"<<endl;
    }
};


int main()
{
    child1 obj1;
    child2 obj2;

    obj1.print();
    obj2.print();
}





