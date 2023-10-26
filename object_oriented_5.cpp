//now we will take about dynamic memory alloc in classes
//we know the use of car ford <which is static creation>
//now we will learn dynamic creation

#include <iostream>
using namespace std;

class student
{
    public:
    int age;
    char grade;
};

int main()
{
    student* hardik = new student;
    hardik->age = 19;
    (*hardik).grade = 'A';

    cout<<(*hardik).age<<endl;
    cout<<hardik->grade<<endl;
}

//so as you can see there are 2 ways to use dynamic memory alloc
//using -> or using (*name).object