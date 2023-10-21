#include <iostream>
using namespace std;

int main()
{
    cout<<"enter the size of you array"<<endl;
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[i] = num;
        cout<<"accepted"<<endl;
    }
    
    cout<<"what would you like to add?"<<endl;
    int add;
    cin>>add;
    
    cout<<"at what index would you like to add?"<<endl;
    int index;
    cin>>index;
    
    int j =0;
    while(j!= index)
    {
        j++;
    }
    
    cout<<arr[j]<<endl;
    
    int store1 = add;
    
    for(int i =j;i<n+1;i++)
    {
        int store = arr[i];
        arr[i] = store1;
        store1 = store;
    }
    
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
}