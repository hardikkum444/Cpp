//some more operator overloading hand made examples


#include <iostream>
using namespace std;

//this is an easy example 

// class side
// {
//     public:
//     int s;

//     void operator+ (side &s)
//     {
//         int value1 = this->s;
//         int value2 = s.s;
//         cout<<"and the area of the sqaure is: "<<value1*value2<<endl;
//     }
// };

// int main()
// {
//     side s1;
//     side s2;

//     s1.s = 5;
//     s2.s = 4;

//     s1+s2;
// }

//this is a self made nice example

class conversion 
{
    public:
    int vel;
    int time;

    conversion(int v, int t)
    {
        this->time = t;
        this->vel = v;
    }

    conversion operator+ (conversion &other)
    {
        int newVel = this->vel + other.vel;
        int newTime = this->time + other.time;
        
        return conversion(newVel, newTime);
    }

    void display()
    {
        cout<<"new vel: "<<this->vel<<" and new time is: "<<this->time;
    }

};


int main()
{
    conversion c1(20,2);
    conversion c2(23,5);

    conversion avg = c1 + c2;
    avg.display();
}
