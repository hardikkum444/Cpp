//this is the level basic of inheritance

#include <iostream>
#include <string>
using namespace std;

class human
{
    public:
    int age;
    int weight;

    void getAge()
    {
        cout<<this->age<<endl;
    }
};

class male : public human
{
    string color;

};

int main()
{
    male  hardik;

    hardik.age = 18;
    hardik.getAge();
}


//defination of protected access specifier 
//basically this means that you can use the members defined in this class
//within this class, also you can use them in the class derived from this class
//however you cannot use them anywhere else, mainly not in the driver function either
 













