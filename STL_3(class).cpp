//key found, key not found

#include <iostream>
#include <vector>
using namespace std;

void search(vector<int>v,int e)
{
    for(int i=0;i<v.size();i++)
    if(v[i]==e)
    {
        cout<<"key found"<<endl;
        exit(0);
    }
    cout<<"key not found"<<endl;
}

int main()
{
    int arr[] = {12,3,43,12,34,56,9};
    vector<int>v(arr,arr+7);
    
    cout<<"enter value"<<endl;
    int e;
    cin>>e;
    
    search(v,e);
}