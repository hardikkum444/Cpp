// #include <iostream>
// using namespace std;

// class base 
// {
//     public:
//     base()
//     {
//         cout<<"Constructing base"<<endl;
//     }
//     ~base()
//     {
//         cout<<"destrucitng base"<<endl;
//     }
// };


// class derived1:public base
// {
//     public:
//     derived1()
//     {
//         cout<<"contructing derived"<<endl;
//     }
//     ~derived1()
//     {
//         cout<<"destructing derived"<<endl;
//     }
    

// };


// int main()
// {
//     base* b = new derived1;
//     delete b;
//     return 0;
// }

//now using virtual class


#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"constructing base"<<endl;
    }
    virtual ~base()
    {
        cout<<"destrucing base"<<endl;
    }
};

class derived1 : public base{
    public:
    derived1(){
        cout<<"construcing derived"<<endl;
    }

    ~derived1()
    {
        cout<<"destructing derived"<<endl;
    }
};

int main()
{
    base* b = new derived1;
    delete b;
    return 0;
}


























