//basically templates help us to improve code reusability 
//and for general purpose programming

#include <iostream>
using namespace std;

template <typename har>
void print(har value)
{
    cout<<value<<endl;
}

int main()
{
    print("hardik");
    print(5); //gets recognises automatically by cpp
    print<int>(5);  //doing it manually 
    print(6.4f);
}

