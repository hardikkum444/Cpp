//hybrid inhritance
//basically using multiple inheritances in one code

#include <iostream>
using namespace std;

class human
{
    public:
    void speak()
    {
        cout<<"human gibberish"<<endl;
    }
};

class physicist 
{
    public:
    void physics()
    {
        cout<<"i am a god damn physicist"<<endl;
    }
};

class obj1 : public human{

};

class obj2 : public physicist , public human{

};

int main()
{
    obj1 hardik;
    obj2 monke;

    cout<<"hardik says: "<<endl;
    hardik.speak();
    cout<<endl;

    cout<<"monke says: "<<endl;
    monke.physics();
    monke.speak();
}

// i used multiple and heirahichical inheritanec over here 