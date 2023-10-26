//empty class


#include <iostream>
using namespace std;

class empty
{

};

int main()
{
    empty e1;

    cout<<"size: "<<sizeof(e1)<<endl;
    return 0;
}

//so basically in the case of empty class, 1 byte of memory is allocated to 
//the class object