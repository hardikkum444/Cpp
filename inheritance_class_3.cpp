//aggregation, also used in destroying a node or deleting a node

#include <iostream>
using namespace std;

class employee
{
    public:
    employee()
    {
        cout<<"I am employee"<<endl;
    }
    ~employee()
    {
        cout<<"employee has been destroyed"<<endl;
    }
};

class company
{
    public:
    employee *emp;
    
    company(employee* emp)
    {
        this->emp = emp;
        cout<<"this is company"<<endl;
        cout<<this->emp<<endl;
    }
    
    ~company()
    {
        cout<<"company has been destroyed"<<endl;
    }
};

int main()
{
    employee *e1 = new employee;
    {
        company c1(e1);
    }
    
    delete e1;
}





