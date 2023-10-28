//encapsulation is nothing but trapping of data members and funcitons
//consider encapsulation as information hiding 

//advanages of encapsulation 
//1) data hiding (increases security)
//2) we can make code read only 
//3) code reusability 
//4) encapsulation helps in unit testing

#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int age;       //since this is private, hence its encapsulated

    //making a getter to access private info 

    public:
    void getAge(int x)
    {
        this->age = x;
    }
    
    void tellAge()
    {
        cout<<this->age<<endl;
    }
};

int main()
{
    student hardik;

    hardik.getAge(18);
    hardik.tellAge();
}