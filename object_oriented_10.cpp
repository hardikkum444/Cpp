//we are now going to demonstrate the use of destructor
//and const keyword

#include <iostream>
using namespace std;

class player
{
    public:
    player(int i)
    {
        cout<<"constructor "<<i<<" has been called"<<endl;
    }

    ~player()
    {
        cout<<"destructor has been called"<<endl;
    }
};

int main()
{
    player player1(1); //destructor for static object gets called automatically, however.

    player* player2 = new player(2);
    delete player2;//youll have to manually call the destructor for Dynamically allocated object using the delete keyword
}

//basically using the const keyword, you cannot change the variables value after declaration
//concept of initializers list is nothing but the way in which we intialize the values using constructors