//very important polymorphism question using pointers


#include <iostream>
using namespace std;

class itemType
{
public:
    virtual void calcAmount() = 0;
};

class wooden : public itemType
{
private:
    int noItems;
    int cost;

public:
    wooden(int i, int c)
    {
        this-> noItems = i;
        this-> cost= c;
    }

    void calcAmount() override
    {
        cout << noItems * cost << endl;
    }
};

class electronics : public itemType
{
private:
    int cost1;

public:
    electronics(int c1)
    {
        this-> cost1 = c1;
    }

    void calcAmount() override
    {
        double discountedPrice = cost1 * 0.8; 
        cout << discountedPrice << endl;
    }
};

int main()
{
    itemType *bptr;

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        electronics toy(20);
        bptr = &toy;
        bptr->calcAmount();
    }
    else
    {
        wooden boy(10, 5); 
        bptr = &boy;
        bptr->calcAmount();
    }

    return 0;
}


// or easier code for understandability

// #include <iostream>
// using namespace std;

// class item
// {
//     public:
//     virtual void amount() = 0;
// };

// class electrical : public item 
// {
//     int number;
//     int cost;
    
//     public:
//     electrical(int n, int c)
//     {
//         this->number = n;
//         this->cost = c;
//     }
    
//     void amount()
//     {
//         cout<<"and the total amount for your electrnic items are: "<<number*cost<<endl;
//     }
// };

// class wooden : public item
// {
//     int offer;
    
//     public:
//     wooden(int o)
//     {
//         this->offer = o;
//     }
    
//     void amount()
//     {
//         cout<<"and your offer price is: "<<this->offer-(0.2*this->offer)<<endl;
//     }
// };

// int main()
// {
//     item *ptr;
//     int choice;
    
//     cout<<"please enter your choice: "<<endl;
//     cin>>choice;
    
//     if(choice ==1)
//     {
//         electrical A(5,6);
//         ptr = &A;
//         ptr->amount();
        
//     }
//     else
//     {
//         wooden B(20);
//         ptr = &B;
//         ptr->amount();
//     }
// }


