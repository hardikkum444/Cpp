//this is a cool, password management system that i made using vary basic cpp and file handling concepts, made this just for fun


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Please register your username: " << endl;
    string usid;
    cin >> usid;

    cout << "Please register your password: " << endl;
    string pass;
    cin >> pass;

    ofstream open("hardik.txt");
    open << usid <<endl<< pass;
    open.close();

    ifstream in("hardik.txt");
    string q;

    string u,p;
    while (getline(in, u)&&getline(in,p)) {}
    // cout<<u<<endl;
    // cout<<p<<endl;

    cout<<"thank you for registering, would you like to login?"<<endl;
    cout<<"press 1 to login, press 0 to exit"<<endl;
    int choice;
    cin>>choice;

    if(choice==1)
    {
        cout<<"please enter your username: ";
        string ans1;
        cin>>ans1;
        cout<<endl;
        while(ans1 != u)
        {
            cout<<"please try again: ";
            cin>>ans1;
            cout<<endl;
        }
        cout<<"please enter your password: ";
        string ans2;
        cin>>ans2;
        cout<<endl;
        while(ans2 != p)
        {
            cout<<"please try again: ";
            cin>>ans2;
            cout<<endl;
        }
        cout<<"you have successfully logged in!"<<endl;
        
    }
    else if(choice==0)
    {
        cout<<"thank you for using this password management system"<<endl<<"hope you visit again!!"<<endl;
    }


    

    return 0;
}
