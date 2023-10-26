#include <iostream>
#include "class1.cpp"

using namespace std;

int main()
{
    class1 c(5);
    
}

//basically i can create a class in another .cpp txt docm and i can use #include "docm name"
//and then use it in my main docm, really helpfull 



//so this is one very interesting thig to discuss

//say we create a class like the following

//class car

// {
//     int car_name;  (4 bytes space taken)
//     char car_add;  (1 byte space taken)    
// }

//so basically noif you create an object
//car ford
//and then cout the size of ford
//you will expect (4+1) = 5
//but it will actually come out as 8


//this is where the concept of padding comes:
//basically in cpp, all the objects are given same space inorder to align them
//and keep them in an orderly manner
//basically the creator of cpp had OCD
//but its interesting

// Structure padding is the addition of some empty bytes of memory in the structure 
// to naturally align the data members in the memory. 