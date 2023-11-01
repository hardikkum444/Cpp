//using DMA to check wehther the given array of numbers consists of all prime numbers or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"how many numbers would you like to add: "<<endl;
    int c;
    cin>>c;
    
    int* arr = new int[c];
    
    for(int i=0;i<c;i++)
    {
        int n;
        cout<<"enter "<<i<<"th value:"<<endl;
        cin>>n;
        arr[i] = n;
    }
    int sum=0;
    
    for(int i=0;i<c;i++)
    {
        int k=1;
        for(int j=2;j<=sqrt(arr[i]);j++)
        {
            //int k =0;
            if(arr[i]%j==0)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            sum+=1;
        }
    }
    
    if(sum==c)
    {
        cout<<"all are prime"<<endl;
    }
    else
    {
        cout<<"not all are prime"<<endl;
    }
    
}