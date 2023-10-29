//extensively asked in interviews
//"many forms"
//1) compile time polymorphism 
//2) run time polymorphism 

//compile time polymorphism:
//1) function overoading 
//2) operator overloading


//**Function overloading**
//you can function overload by adding a parameter in the function with the same name
//you cannot function overload just by changing the return type of the fucntion 

#include <iostream>
using namespace std;

//this is the code without function overloading

// class human 
// {
//     public:
//     void speak()
//     {
//         cout<<"human is speaking part-1"<<endl;
//     }

//     void speak()
//     {
//         cout<<"human is speaking part-2"<<endl;
//     }
// };

// int main()
// {
//     human hardik;
//     hardik.speak();
// }

//this is with function overloading

class human 
{
    public:
    void speak()
    {
        cout<<"human is speaking part-1"<<endl;
    }

    void speak(int n)
    {
        cout<<"human is speaking part-2"<<endl;
    }
};

int main()
{
    human hardik;
    hardik.speak();
    hardik.speak(2);
}


//remember, that it is important to add a parameter to differenciate between the fucntions (function overloading)
//CHANGING THE RETURN TYPE FROM VOID TO INT OR WHATEVER WILL NOT CAUSE FUNCTION OVERLOADING


