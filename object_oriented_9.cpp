//using assignment operator <can act like copy construct>
//keep in mind that making of copy constructor is still necessary

#include <iostream>
#include <cstring>
using namespace std;

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
    char name[7] = "hardik"; 
    player boy1(name, 12,'A');

    //cout<<boy1.name<<endl;

    player boy2(boy1);

    boy2.name[0] = 'r';   

    cout<<"before copy"<<endl;

    cout<<boy1.name<<endl;
    cout<<boy2.name<<endl; 

    boy1 = boy2; //this is assignment op
    
    cout<<endl<<"after copy"<<endl;

    cout<<boy1.name<<endl;
    cout<<boy2.name<<endl; 


}