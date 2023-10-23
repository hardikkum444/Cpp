#include <iostream>
using namespace std;

class example1
{
    const char* ptr;
    public:
    //default constructor
    example1()
    {
        //allocation of memory during runtime
        ptr = new char[8];
        ptr = "dynamic";
    }
    void show()
    {
        cout<<ptr<<endl;
    }
};

int main()
{
    example1 *ptr = new example1();
    ptr->show();
}