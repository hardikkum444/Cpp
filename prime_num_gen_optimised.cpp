#include <iostream>
#include <cmath>
#include <ctime>
#include <random>
using namespace std;

//lets try making a better version of a prime number generator

// bool isPrime(int x)
// {
//     for(int i=2;i<=sqrt(x);i++)
//     {
//         if(x%i==0)
//         {
//            return false; 
//         }
//     }
//     return true;
// }


bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    if (x == 5 || x == 7 || x == 11 || x == 13 || x == 17 || x == 19 || x == 23) return true;

    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }

    return true;
}

//this algorithm can be used to check much higher numbers, if they are prime or not
//it used the concept that every prime number is of the form 6k+1;
//therefore we compare it with i (5) and i+2 (7)

int main()
{

    mt19937 mt(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> distribution (2,49);

    //much better random number gen
    
    
    int k;

    bool prime = false;
    
    while(!prime)
    {
    
    // srand(time(NULL));   
    // k = rand()%50;

    k = distribution(mt);

    if(isPrime(k) && k!= 0 && k!= 1)
    {
        cout<<"random prime number: "<<k<<endl;
        prime = true;
    }
    }

}

// and henceforth a better version of the prime number generator has been made
// by yours tryly 