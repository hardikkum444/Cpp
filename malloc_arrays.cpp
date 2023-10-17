//this is a sample code showing dynamic memory alloc in arrays

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout<<"enter the size of your array"<<endl;
    int size;
    cin>>size;
    
    int* arr = new int[size];
    
    if(arr==NULL)
    {
        cout<<"memory allocation failed"<<endl;
        exit(1);
    }
    else
    {
        cout<<"\nDynaimc allocation of memory for array arr is successful"<<endl;
        
        cout<<"\nenter array elements"<<endl;
        
        for(int i =0;i<size;i++)
        {
            cin>>*(arr+i);
        }
        
    
    
    cout<<"\nEnteres elements are: "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<"\n"<<*(arr+i);
    }
    }
    delete []arr;
    cout<<"\nMemory deallocated"<<endl;
    
    return 0;
}