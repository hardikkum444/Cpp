//demonstrating the use of protected data type 

#include <iostream>
using namespace std;

class human
{
    protected:  //look at this 
    int height;
    int age = 10;
};

class male : protected human //and this 
{
    public:
    void getAge()
    {
        cout<<this->age<<endl;
    }
};

int main()
{
    male hardik;

    hardik.getAge();
}