#include <iostream>
using namespace std;

class complex
{
	int a,b;
public:
	complex(int , int );

	void getcomplex(void){
		cout<<a<<" + "<<b<<"i "<<endl;
	}
};

complex :: complex(int x, int y){

	a=x;
	b=y;

}

int main(){

	//implicit call:
	complex a(4,3);

	//explicit call:
	complex b = complex(4,3);


	a.getcomplex();
	b.getcomplex();

	return 0;
}

// so now here we have created a parameterized constructor, where we 
// now enter the values of the constructor in the main function

// we can all this constructor implicitly or expltcily



// #include <iostream>
// using namespace std;

// class coordinate
// {
//     int a,b;
//     int a1,b1;
//     public:
//         coordinate1(int, int);
//         coordinate2(int, int);
//         void print_coordinate(void);
//         void dist(void);

// };

// coordinate :: coordinate1(int x,int y){
//     a = x;
//     b = y;
// }

// coordinate :: coordinate2(int x1,int y1){
//     a1 = x1;
//     b1 = y1;
// }


// void coordinate :: dist(void) {
//     int xf = (a1-a)(a1-a);
//     int yf = (b1-b)(b1-b);

// }

//this was the code in which i didnt know the concept of friend dunction
//which is why i was not able to build the code.

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




// #include <iostream>
// #include <cmath>

// using namespace std;

// class point
// {
//     int a,b;
   

// public:
//     point(int, int);


//     friend void dist_point(point p1, point p2);
// };

// point :: point(int x, int y){

//     a=x;
//     b=y;
// }



// void dist_point(point p1, point p2){

//     int result;

//     result = sqrt(((p2.a-p1.a)*(p2.a-p1.a)) +((p2.b-p1.b)*(p2.b-p1.b)));

//     cout<<result;
// }

// int main(){

//     point p1(1,0);

//     point p2(1,1);

//     dist_point(p1,p2);

//     return 0;
// }