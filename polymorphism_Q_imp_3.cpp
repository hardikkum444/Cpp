#include <iostream>
using namespace std;

class paint
{
    public:
    virtual void redBlue()
    {
        cout<<"i am painting"<<endl;
    }
    //virtual void blue() =0 ;

};

class paintred : public paint
{
    public:
    void redBlue()
    {
        cout<<"i am painting with red"<<endl;
    };
    
    // void blue()
    // {
    //     cout<<"nothing"<<endl;
    // }
};

class paintblue : public paint
{
    public:
    void redBlue()
    {
        cout<<"i am painting with blue"<<endl;
    };
    
    // void red()
    // {
    //     cout<<"nothing"<<endl;
    // }
};


int main()
{
    paint* ptr;
    cout<<"enter choice"<<endl;
    char ch;
    cin>>ch;
    if(ch=='R' or ch=='r')
    {
        paintred r;
        ptr = &r;
        ptr->redBlue();
        
    }
    else
    {
        paintblue b;
        ptr = &b;
        ptr->redBlue();
    }
}
    
    
    
    
    
    
    
    