//this program is to see the order of destruction and construction
#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base has been constructed"<<endl;
    }
    virtual ~base()
    {
        cout<<"base has been destructed"<<endl;
    }
};

class derived1 : public base
{
    public:
    derived1()
    {
        cout<<"derived1 has been constructed"<<endl;
    }
    ~derived1()
    {
        cout<<"derived1 has been destructed"<<endl;
    }
};

class derived2 : public base 
{
    public:
    derived2()
    {
        cout<<"derived2 has been constrcuted"<<endl;
    }
    ~derived2()
    {
        cout<<"derived2 has been destrcuted"<<endl;
    }
};


int main()
{
    base* har = new derived1;
    base* hard = new derived2;
    
    cout<<endl<<endl<<endl;
    
    delete har;
    delete hard;
}


