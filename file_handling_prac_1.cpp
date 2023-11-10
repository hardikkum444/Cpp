#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // string name = "hardik";
    // string name1;

    // ifstream in("hardik.txt");
    // getline(in,name1);

    // cout<<name1<<endl;

    string name;
    string nam1;
    cout<<"please enter your name: "<<endl;
    cin>>name;

    ofstream hardik("hardik.txt");
    hardik<<name;

    hardik.close();

    ifstream in("hardik.txt");
    getline(in,nam1);
    cout<<nam1<<endl;
    in.close();

}
