#include <iostream>
using namespace std;

int main()
{
    cout<<"enter: ";
    int n;
    cin>>n;
    
    for(int i=n;i>0;i--)
    {
        for(int j =i-1;j>0;j--)
        {
            cout<<" ";
            
        }
        for(int k =i;k<=n;k++)
        {cout<<"*";}
        cout<<endl;
    }
    
    
}