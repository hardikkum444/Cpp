//a code that converts first letter to capital done by both ways

// #include <iostream>
// #include <string>
// using namespace std;

// void capital(string name)
// {
    
//     if(islower(name[0]))
//     {
//         char cap = toupper(name[0]);
//         name[0] = cap;
        
//         cout<<name<<endl;

//     }
//     else
//     {
//         cout<<"already capitalised, now converting to small"<<endl;
//         char cap = tolower(name[0]);
//         name[0] = cap;
        
//         cout<<name<<endl;
//     }
// }

// int main()
// {
//     string name;
//     cin>>name;
    
    // char symbol = name[0];
    // char cap = toupper(symbol);
    // name[0] = cap;
    // cout<<name<<endl;
    
//     capital(name);
    
    
// }


//and this is the second way, using operator overloading

#include <iostream>
using namespace std;

class capital
{
    public:
    string name;
    
    void operator& ()
    {
        char cap = toupper(name[0]);
        name[0] = cap;
        cout<<name<<endl;
        
    }
};

int main()
{
    capital boy;
    boy.name = "hardik";
    
    boy.operator&();
    
    return 0;
}
