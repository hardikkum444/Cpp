//concept of shallow copy and deep copy 

#include <iostream>
#include <string>
#include<stdio.h>
#include <cstring>
using namespace std;

// class player
// {
//     public:
//     char *name = new char[100];
//     int score;
//     char level;

//     player(char n[],int s, char l)
//     {
//         this->name = n;
//         this->level = l;
//         this->score = s;
//     }
// };


// int main()
// {
//     char name[7] ="hardik"; //the reason why we have taken 7 is because we have to leave space for a NULL character 

//     player boy1(name, 12,'A');

//     cout<<boy1.name<<endl;

//     player boy2(boy1);

//     boy2.name[0] = 'r';    //as you can see, after passing the value of boy2 name[0] as 'r' even the value of name for boy 1 gets changed, this is called SHALLOW COPY
//     cout<<boy2.name<<endl; //basically the name variable is being shared between boy1 and boy2 because of the copy construct, so any change in either one of them will cause a change in both.
//     cout<<boy1.name<<endl;

// }


// now to convert this into DEEP COPY


class player
{
    public:
    char *name = new char[100];
    int score;
    char level;

    player(char n[],int s, char l)
    {
        this->name = n;
        this->level = l;
        this->score = s;
    }

    //making a copy construct
    player(player & temp)
    {
        char* name1 = new char[strlen(temp.name + 1)];
        strcpy(name1, temp.name);
        this->name = name1;
    }
};


int main()
{
    char name[7] = "hardik"; //the reason why we have taken 7 is because we have to leave space for a NULL character 
    player boy1(name, 12,'A');

    cout<<boy1.name<<endl;

    player boy2(boy1);

    boy2.name[0] = 'r';    //as you can see, after passing the value of boy2 name[0] as 'r' even the value of name for boy 1 gets changed, this is called SHALLOW COPY
    cout<<boy2.name<<endl; //basically the name variable is being shared between boy1 and boy2 because of the copy construct, so any change in either one of them will cause a change in both.
    cout<<boy1.name<<endl;

}

//and now it works perfectly fine!!










