//talking about default constructors
//basically even if there is no contructor mentioned in the class, even then, when we call class and name 
//object in the driver function like car ford
//then also a constructor gets called which is nothing but a default constructor, a constructor which does not exist
//but then you can call it, as soon as you call it, then the default constructor gets cancelled

//now lets talk about using the this keyword

#include <iostream>
using namespace std;

class car
{
    public:
    int age;
    
    car(int age)
    {
        this->age = age; 
    }
};

int main()
{
    car ford(10);
    cout<<"the age of this car is "<<ford.age<<" years old"<<endl;
}

//basic usage of the 'this' keyword
//this stores the address of the current address 