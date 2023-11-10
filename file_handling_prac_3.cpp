//best way to execute file handling

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream hardik;

    hardik.open("hardik.txt",ios::out);
    if(hardik.is_open())
    {
        string name;
        int num;
        cout<<"how many words would you like to enter? "<<endl;
        cin>>num;
        while(num--)
        {
            cout<<"enter"<<endl;
            cin>>name;
            hardik<<name<<endl;
        }
    }
    else{
        cout<<"file not properly opened"<<endl;
    }

    hardik.close();

    hardik.open("hardik.txt",ios::in);
    if(hardik.is_open())
    {
        string nam;
        while(getline(hardik,nam))
        {
            cout<<nam<<endl;
        }
    }
    else{
        cout<<"file not properly opened"<<endl;
    }

    hardik.close();
    
}