//prime example of operator overloading 

#include <iostream>
using namespace std;

class ops
{
    public:
    int a;

    void operator+ (ops &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<value1-value2<<endl;
    }
};


int main()
{
    ops o1;
    ops o2;

    o1.a = 7;
    o2.a = 2;
     
    o1+o2;
}