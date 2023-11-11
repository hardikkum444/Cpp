//simple error handling application

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;

    try
    {
        if(num==1 || num==0)
        {
            throw(num);
        }
        else{
            if(num%2==0){
                cout<<"your number is even"<<endl;
            }
            else{
                cout<<"your number is odd"<<endl;
            }
        }
    }

    catch(int num)
    {
        cout<<"your number is neither even nor odd"<<endl;
    }
}