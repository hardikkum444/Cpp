//talking about copy constructors

#include <iostream>
using namespace std;

// class player
// {
//     public:
//     char level;
//     int score;

//     player(int s, char l)
//     {
//         this->level = l;
//         this->score = s;
//     }
// };

// int main()
// {
//     player hardik(23,'A');

//     player boyy(hardik);

//     cout<<boyy.score<<endl;
//     cout<<boyy.level<<endl;
// }

//now to pass copy constrcutor as a constructor

class player
{
    public:
    char level;
    int score;

    player(int s, char l)
    {
        this->level = l;
        this->score = s;
    }

    player(player &temp) //it is very important to pass this by refernce, because 
    {                   //if you dont, then as known, a copy of the object will be fromed and because this is a copy construct, an infinite loop will run        
        cout<<"copy constructor has been called"<<endl;
        this->level = temp.level;
        this->score = temp.score;
    }

};

int main()
{
    player hardik(23,'A');

    player boyy(hardik);

    cout<<boyy.score<<endl;
    cout<<boyy.level<<endl;
}

//again, after making the copy construct, the by default copy construct gets no more of a value
//just like in the case of a normal constructor