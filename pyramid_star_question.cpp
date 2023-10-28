#include <iostream>
#include <string>
using namespace std;

void print(string arr[],int s)
{
    for(int i =0;i<s;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;

    string* arr = new string[n];

    cout<<sizeof(arr)<<endl;

    int h = (n+1)/2;

    for(int i=0;i<n;i++)
    {
        arr[i] = " ";
    }

    int j = h-1;

    for(int i = h-1;i>=0;i--)
    {
        arr[i] = "*";
        arr[j++] = "*";
        print(arr,n);
    }
}
    

    