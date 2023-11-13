//usage of templates part 3

#include <iostream>
using namespace std;

template <typename snob>

class display
{
    public:
    int n;

    display(int n)
    {
        this->n = n;
    }

    void pass()
    {
        cout<<"your password can be "<<n<<" characters long"<<endl;

        snob passwd;
        cin>>passwd;

        cout<<"the password you entered is "<<passwd<<endl;
    }
};

int main()
{
    cout<<"press 1 for a string password or 2 for a int password"<<endl;
    int choice;
    cin>>choice;

    if(choice ==1)
    {
        display<string>pass1(5);
        pass1.pass();
    }
    else if(choice ==2)
    {
        display<int>pass2(5);
        pass2.pass();
    }
}