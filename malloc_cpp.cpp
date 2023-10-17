//dynamic memory allocation, basic usage done in class

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int* p = NULL;
    p = new int;
    if(!p)
    {
        cout<<"\nmemory allocovation not there"<<endl;
        exit(1);
    }
    
    else
    {
        cout<<"\nmemory allocation suncces"<<endl;
        *p = 12;
        cout<<"the value given is "<<*p<<endl;
        delete p;
        cout<<"and now the memory has been deleted"<<endl;
    }
    
    return 0;
}