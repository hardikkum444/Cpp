//random palindrome question


#include <iostream>
using namespace std;

void isPal(char arr[],int length)
{
    char * boy = new char[100];

    int k = length-1;

    for(int i=0;i<length;i++)
    {
        boy[i] = arr[k--];
    }

    // for(int i =0;i<length;i++)
    // {
    //     cout<<boy[i];
    // }
    // cout<<endl;

    int count = 0;
    int j =0;
    for(int i=0;i<length;i++)
    {
        if(boy[i] == arr[j++]);
        {
            count+=1;
        }
    }
    cout<<count<<endl;
    if (count == length)
    {
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"it aint a palindrome"<<endl;
    }
}

int main()
{
    char* arr = new char[100];
    cout<<"what is the len"<<endl;
    int len;
    cin>>len;
    cout<<"enter the letters one by one"<<endl;    

    for(int i =0;i<len;i++)
    {
        cin>>arr[i];
    }

    isPal(arr,len); 
}