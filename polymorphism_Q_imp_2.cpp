//calculator question using the concept of polymorphism 
//also the concept of virtual base class has been used

//whilst doing this question i got to know the following points:

//1) i have to use all the classes that have been given the tag of virtual clear class in the abstract class otherwise all the child classes derived from that virtual base class will be given the tag of abstract class and object will not be created for those classes

//2) if you dont want to use the virtual clear class, you can use the normal virtual class but you'll have to define somthing within it.It has been demonstrated below


#include <iostream>
using namespace std;

class calc
{
    public:
    // virtual void add () = 0;
    // virtual void sub () = 0;
    // virtual void mult () = 0;
    // virtual void divi () = 0;
    
    virtual void add ()
    {
        cout<<"nothing yet"<<endl;
    }
    virtual void sub (){
        cout<<"nothing yet"<<endl;
    }
    virtual void mult (){
        cout<<"nothing yet"<<endl;
    }
    virtual void divi (){
        cout<<"nothing yet"<<endl;
    }
};

class addition : public calc
{
    int num1;
    int num2;
    // int choice;
    
    public:
    addition(int n,int e)
    {
        this->num1 = n;
        this->num2 = e;
    }
        
    
    void add()
    {
        cout<<this->num1+this->num2<<endl;
    }
    void sub (){};
    void mult (){};
    void divi (){};

};

class subtraction : public calc
{
    int num1;
    int num2;
    // int choice;
    
    public:
    subtraction(int n,int e)
    {
        this->num1 = n;
        this->num2 = e;
    }
        
    
    void sub()
    {
        cout<<this->num1-this->num2<<endl;
    }
    void add (){};
    void mult (){};
    void divi (){};

};

class multiplication : public calc
{
    int num1;
    int num2;
    // int choice;
    
    public:
    multiplication(int n,int e)
    {
        this->num1 = n;
        this->num2 = e;
    }
        
    
    void mult()
    {
        cout<<this->num1*this->num2<<endl;
    }
    void sub (){};
    void add (){};
    void divi (){};

};

class division : public calc
{
    int num1;
    int num2;
    // int choice;
    
    public:
    division(int n,int e)
    {
        this->num1 = n;
        this->num2 = e;
    }
        
    
    void divi()
    {
        cout<<this->num1/this->num2<<endl;
    }
    void sub (){};
    void mult (){};
    void add (){};

};

int main()
{
    calc *cptr;
    int choice;
    cout<<"enter your choice: "<<endl;
    cin>>choice;
    
    if(choice==1)
    {
        addition A(3,2);
        cptr = &A;
        cptr->add();
    }
    else if(choice==2)
    {
        subtraction B(3,2);
        cptr = &B;
        cptr->sub();
    }
    else if(choice==3)
    {
        multiplication C(3,2);
        cptr = &C;
        cptr->mult();
    }
    else if(choice==4)
    {
        division D(3,2);
        cptr = &D;
        cptr->divi();
    }
}




