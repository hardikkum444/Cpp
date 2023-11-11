#include <iostream>
using namespace std;


//virtual function is a member function of a base class which is redifined in
//derived class

//all of the below points are important

class nomad
{
    public:
    virtual void message()
    {
        cout<<"i am a nomad"<<endl;
    }

};

class nomad1 : public nomad
{
    public:
    void message()
    {
        cout<<"i am not a nomad"<<endl;
    }
};


int main()
{
    nomad *ptr;
    nomad1 toy;
    ptr = &toy;

    toy.message();

    ptr->message();

    nomad* har = new nomad1;

    har->message();

    nomad shy;
    shy.message();
    
}



