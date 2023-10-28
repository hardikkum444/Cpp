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













