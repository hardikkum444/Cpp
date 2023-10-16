#include <iostream>
using namespace std;

class A
{
    int x,y;
    public:
    A(int r, int s)
    {
        x=r;
        y=s;
        cout<<"\nCalling base class constructor:"<<x<<" "<<y<<endl;
    }
    ~A()
    {
        cout<<"\nCalling base class";
    }
};

class B:public A
{
    int l,m;
    public:
    B(int p,int q,int r, int s):A(r,s)
    {
        l=p;
        m=q;
        cout<<"\nCalling derived class B constructor:"<<l<<" "<<m;
    }
    ~B()
    {
        cout<<"\ncalling derived B class destrcutor";
    }
};

class C:public B
{
    int n,m;
    public:
    C(int u, int v,int p,int q,int r,int s):B(p,q,r,s)
    {
        n=u;
        m=v;
        cout<<"\nCalling derived class C contructor with value"<<n<<" "<<m<<endl;
    }
    ~C()
    {
        cout<<"callnig derived class C destrucotr";
    }
};

int main()
{
    C obj1(1,2,3,4,5,6);
    return 0;
}







