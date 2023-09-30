// a friend function is nothing but a function declared outside the class
// which has access to the private members of that class

//create a function which takes two point objects and computes the distance between those two points

//Hint :make it a friend function

// #include<iostream>

// #include<cmath>

// using namespace std;

// class point{

//     int x ,y ;

//     friend void distance(point o1 ,point o2 );

//     public:

//     point (int a ,int b){

//         x=a;

//         y=b;

//     }

//     void display(){

//         cout<<"("<<x<<","<<y<<")"<<endl;

//     }

// };

// void distance(point o1 ,point o2){

//     float dist;

// dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));

// cout<<dist<<endl;

// }

// int main()

// {

//    point p(1,1);

//    p.display();

//    point q(2,2);

//    q.display(); 

//    distance(p,q);



//     return 0;

// }
// void coordinate :: print_coordinate(void)
// {
//     cout<<"("<<xf<<","<<yf<<")"<<endl;
// }

// int main(){
//     s.coordinate1(4,4);
//     h.coordinate2(7,7); 
//     s.print_coordinate();

//     return 0;
// }




#include <iostream>
#include <cmath>

using namespace std;

class point
{
    int a,b;
   

public:
    point(int, int);


    friend void dist_point(point p1, point p2);
};

point :: point(int x, int y){

    a=x;
    b=y;
}



void dist_point(point p1, point p2){

    int result;

    result = sqrt(((p2.a-p1.a)*(p2.a-p1.a)) +((p2.b-p1.b)*(p2.b-p1.b)));

    cout<<result;
}

int main(){

    point p1(1,0);

    point p2(1,1);

    dist_point(p1,p2);

    return 0;
}


// make a code which takes two complex numbers as input and then 
// prints their addition or subtraction