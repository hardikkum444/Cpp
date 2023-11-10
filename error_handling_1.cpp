#include <iostream>
using namespace std;

//try: used to enclose statements which may cause exceptions
//     is usually followed by 1 or more catch blocks

//catch: handling the exceptions is the job of catch block, this block catches the exception thrown by the try block 

//throw: is a statement used to throw an exception and its value to a consecutive exception handler

int main()
{
    int num;
    cout<<"enter your age: "<<endl;
    cin>>num;

    try
    {
    if(num>21)
    {
        cout<<"you can leagally consume alcohol"<<endl;
    }
    else{
        throw(num);
    }
    }

    catch(int num)
    {
        cout<<"you don't have the permssion to drink alcohol"<<endl;
    }
}