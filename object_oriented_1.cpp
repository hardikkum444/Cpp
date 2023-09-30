#include <iostream>

using namespace std;


// class employee
// {
// private:
// 	int a,b,c;
// public:
// 	int d,e;

// 	void setdata(int a1, int b1 , int c1);

// 	void getdata(){

// 		cout<<"vale is: "<<a<<endl;
// 		cout<<"vale is: "<<b<<endl;
// 		cout<<"vale is: "<<c<<endl;
// 		cout<<"vale is: "<<d<<endl;
// 		cout<<"vale is: "<<e<<endl;

		
// 	}
// };

// void employee :: setdata(int a1, int b1 , int c1){

// 	a1 = a;
// 	b1 = b;
// 	c1 = c;

// }




// int main(){

// 	employee hardik;
// 	hardik.setdata(122,12,142);
// 	hardik.e=4;
// 	hardik.d=5;

// 	hardik.getdata();
// 	return 0;
// }




class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee harry;
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}
