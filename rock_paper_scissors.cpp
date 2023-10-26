//random rock paper and scissors game

#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

class player
{
    public:
    int player_level;
    int computer_level;

    player(int l1,int l2)
    {
        this->player_level = l1;
        this->computer_level = l2;
    }
};

int main()
{
    string name;
    cout<<"enter your name"<<endl;

    cin>>name;

    cout<<"would you like to play a game?"<<endl;

    bool yesno;
    cin>>yesno;

    player name1(0,0);
    
    while(yesno){
    int ans;
    
    cout<<"rock paper or scissors?"<<endl;
    cout<<"for rock -> 0"<<endl;
    cout<<"for paper -> 1"<<endl;
    cout<<"for scissors -> 2"<<endl;

    cin>>ans;

    srand(time(NULL));
    int i = rand() % 3;

    int rock = 0;
    int paper = 1;
    int scissors = 2;
    

    if(i==0)
    {
        cout<<"the computer chose rock"<<endl;
        if(ans == 1)
        {
            name1.player_level++;
        }
        else
        {
            name1.computer_level++;
        }
    }
    else if(i == 1)
    {   
        cout<<"the computer chose paper"<<endl;
        if(ans == 2)
        {
            name1.player_level++;
        }
        else
        {
            name1.computer_level++;
        }
    }

    else if(i== 2)
    {   
        cout<<"the computer chose scissors"<<endl;
        if(ans == 0)
        {
            name1.player_level++;
        }
        else
        {
            name1.computer_level++;
        }
    }

    cout<<"would you like to play again?"<<endl;
    cin>>yesno;
    }



    cout<<"your score is: "<<name1.player_level<<endl;
    cout<<"the computer's score is: "<<name1.computer_level<<endl;

    if(name1.computer_level>name1.player_level)
    {
        cout<<"the computer wins!";
    }
    else
    {
        cout<<name<<" wins!"<<endl;
    }
    

}


//using srand 
//srand stands for seed random and it is a function used to seed a random function 
//generator in cpp


// time(NULL) is a function that returns the current time in seconds since January
//  1, 1970 (the Unix epoch) as a numeric value (often referred to as a timestamp). 
//  The time function takes a pointer to a time_t object as its argument.
// By passing time(NULL) as the argument to srand, you're using the current time as 
// the seed for the random number generator. This helps ensure that the sequence of 
// random numbers generated will be different each time the program is run. The seed is
//  important to make the randomness of the numbers less predictable.