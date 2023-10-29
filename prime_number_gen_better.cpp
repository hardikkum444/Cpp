#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//lets try making a better version of a prime number generator

bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
           return false; 
        }
    }
    return true;
}



int main()
{

    int k;

    bool prime = false;
    
    while(!prime)
    {
    
    srand(time(NULL));
    k = rand()%50;

    if(isPrime(k) && k!= 0 && k!= 1)
    {
        cout<<"random prime number: "<<k<<endl;
        prime = true;
    }
    }

}

// and henceforth a better version of the prime number generator has been made
// by yours tryly 