//multi-level inheritance 

#include <iostream>
using namespace std;

class animal 
{
    public:
    int age;
    int weight;

    void speak()
    {
        cout<<"hissss"<<endl;
    }
};

class reptile : public animal
{

};

class snek : public reptile{};

int main()
{
    snek ToblaroneTheSnek;
    
    ToblaroneTheSnek.speak();
}