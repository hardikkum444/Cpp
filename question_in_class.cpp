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
