//hierarchical inheritance 
//1 parent base class, multiple child classes

#include <iostream>
using namespace std;

class human
{
    public:
    void speak()
    {
        cout<<"hello, ma names jEfF!"<<endl;
    }
};

class human1 : public human
{

};

class human2 : public human
{

};

int main()
{
    human1 hardik;
    human2 boy;

    hardik.speak();
    boy.speak();
}

//this is a very basic example
//this can expand like a famlity tree of multiple parent classes and
//multiple child classes inheriting from those parent classes

//it literally a family tree