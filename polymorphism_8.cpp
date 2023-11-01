// //more on refernce polymorphism

// #include <iostream>
// using namespace std;

// class s
// {
//     public:
//     s*next;
//     int age;
    
//     s()
//     {
//         this->next = NULL;
//     }
    
//     void getD()
//     {
//         cout<<"enter age: "<<endl;
//         cin>>age;
//     }
    
//     void link(s*t)
//     {
//         next = t;
//     }
    
//     void print(s*p)
//     {
//         while(p!=NULL)
//         {
//             cout<<p->age<<endl;
//             p=p->next;
//         }
//     }
// };

// int main()
// {
//     s o1,o2,o3;
//     o1.getD();
//     o2.getD();
//     o3.getD();
    
//     o1.link(&o2);
//     o2.link(&o3);
    
//     o1.print(&o1);
// }

//this is the code that i built, it basically uses the concept of static objects, and in the class the 
//concept of dynamic object has been used
//also some of the concept has been cleared by pointers theory

//again this is how the linked list algorithm works like to
//except, in the driver function and in the class, we use both dynamic allocation

//here is the somewhat similar code which uses the same concept, except it has been 
//dynamcially allocated in the driver function



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
    void show(s*node)
    {
        while(node->next!=NULL)
        {
            cout<<node->rno<<node->name<<node->age<<endl;
            node= node->next;
        }
    }
};


int main()
{
    s* o1 = new s;
    s* o2 = new s;
    s* o3 = new s;
    
    o1->getData();
    o2->getData();
    o3->getData();
    o1->link(o2);
    o2->link(o3);
    
    o1->show(o1);
}

//with this the entire concept should be cleared!