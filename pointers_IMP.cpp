#include <iostream>
using namespace std;

void add(int* & a)
{
    a = new int(23);
};

int main()
{
    int a = 10;
    int *b = &a;
    add(b);
    cout<<*b<<endl;
}

    // add(int* &a): This function takes a reference to a pointer to an integer as its parameter. With this signature, any changes made to the parameter a within the function will affect the original pointer passed to the function. In other words, it allows the function to modify the original pointer.

    // add(int* a): This function takes a pointer to an integer as its parameter. When you pass a pointer to this function, ****you can modify the value pointed to by the pointer, but any changes to the pointer itself ****(like making it point to a different location in memory) will not affect the original pointer passed to the function. This is because it's a copy of the original pointer, not a reference.
    
    //so if  i want to cahange the value of an in an int i will use, normal add(int*a) but if i want to make a pointer point to a different location, i will use add(int*&a)