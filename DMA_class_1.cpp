#include <iostream>
using namespace std;

class sample
{
    public:
    sample()
    {
        cout<<"constructor has been called"<<endl;
    }
    ~sample()
    {
        cout<<"destructor has been called"<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter the number of objects"<<endl;
    cin>>n;
    
    sample* obj = new sample[n];
    delete []obj;
    return 0;
}