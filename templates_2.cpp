//usage of templates part 2

#include <iostream>
using namespace std;

template <typename T>
class array
{
    public:
    T* arr = new T (5);

    void insert()
    {
        for(int i =0;i<5;i++)
        {
            cin>>arr[i];
        }

        for(int i =0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    array<char>a1;

    a1.insert();
}