// pointers in array

// basics of arrays, &p refers to the address of p,  int* p gives p as the value which will store the address
// and finally, *p is derefrencing, in which the value of what is in pointer p will be written.


// pointer arithmatic:
// address new(p+i) = address old + i *sizeof(data type)

#include <iostream>
using namespace std;

int main(){

    int marks[]={23,24,25,26};
    int* p=marks;
    cout<<"the value of marks at marks[0] is: "<<*p<<endl;

    //it is important to note here that *p will always point to the first and only first value of the array

    cout<<"the value of marks at marks[1] is: "<<*(p+1)<<endl;    
    cout<<"the value of marks at marks[2] is: "<<*(p+2)<<endl;    
    cout<<"the value of marks at marks[3] is: "<<*(p+3)<<endl;   

    cout<<*p<<endl; 
    cout<<*(p++)<<endl;

}


//this is all in pointer arithmatic and arrays