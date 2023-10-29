//inheritance ambiguity 
//basically if in multiple inheritance, the parent classes have same named function
//then what'll happen?

#include <iostream>
using namespace std;

class human
{
    public:
    void speak()
    {
        cout<<"human is humaning"<<endl;
    }
};

class animal
{
    public:
    void speak()
    {
        cout<<"animal is animaling"<<endl;
    }
};

class livingObj : public animal, public human
{

};

int main()
{
    livingObj obj1;
    livingObj obj2;

    obj1.human::speak();
    obj2.animal::speak();

}