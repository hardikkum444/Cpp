//referencial polymorphism

#include <iostream>
using namespace std;

class s
{
    int rno;
    char name[10];
    int age;
    s*next;
    public:
    s()
    {
        next = NULL;
    }
    void getData()
    {
        cout<<"Enter roll, name , and age "<<endl;
        cin>>rno>>name>>age;
    }
    
    void link(s*t)
    {
        next = t;
    }
    void show()
    {
        s*p = this;
        while(p!=NULL){
            cout<<"roll no: "<<p->rno<<" Name "<<p->name<<" Age "<<p->age<<endl;
            p=p->next;
        }
    }
};


int main()
{
    s o1,o2,o3;
    o1.getData();
    o2.getData();
    o3.getData();
    o1.link(&o2);
    o2.link(&o3);
    
    o1.show();
}




