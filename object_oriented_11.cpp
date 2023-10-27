//use of the static keyword
//its used to make a variable which does not depend on any class object

//static functions
//1)there is no need to create objects for a static function
//2)this keyword is not allowd for static function
//3)static function can only access STATIC MEMBERS

#include <iostream>
using namespace std;

class player
{
    public:
    static int gameDur;
    int score;
    player(int s)
    {
        this->score = s;
    }

    static void funct()
    {
        cout<<gameDur<<endl;
    }
};

int player :: gameDur = 10;

int main()
{
    player hardik(3);
    cout<<player::gameDur<<endl; //this is how you should access it

    //cout<<hardik.gameDur<<endl;  //not like this, this is bad practice

    player :: funct(); //done, all rules applied, and this is how it should be accessed , not like the bad practice mentioned before
}