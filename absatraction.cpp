//when we dont know how a function is being implemented, then that is called abstraction 
//heres an example

#include <iostream>
using namespace std;

class add
{
    public:

    int x;
    int y;
    add(int a,int b ): x(a),y(b) {};
    void addi()
    {
        cout<<this->x+this->y<<endl;
    }

};


int main()
{
    add a1(6,4);
    a1.addi();

}

//to the normal user, they dont know what the function addi is implying or what is the backgroud op behind it 
//just like we dont what is the operation behind the function sort of the cpp library.