//multiple inheritance

//1 derived class inheriting from multiple base classes 

#include <iostream>
using namespace std;

class human
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class monke
{
    public:
    void monkeNoise()
    {
        cout<<"oooo oooo aaa aaaa"<<endl;
    }
};

class specific :public human, public monke
{

};

int main()
{
    specific orangutan;
    orangutan.speak();
    orangutan.monkeNoise();
}