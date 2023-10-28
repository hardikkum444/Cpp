#include <iostream>
#include <cmath>
using namespace std;

void primeCheck(int n)
{
    if(n<=1)
    {
       cout<<"number aint prime"<<endl; 
    }
    if(n==2)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
    
    int k = 0;
    for(int i =2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            k = 1;
            break;
        }
    }

    if(k==0)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number aint prime"<<endl;
    }
    }
}

int main()
{
    primeCheck(37);
}