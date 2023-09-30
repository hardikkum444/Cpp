#include <iostream>

using namespace std;

//call by reference

int swap(int* a, int* b){
	int load;
	load = *a;
	*a = *b;
	*b = load;
	return 0;
}

int main(){
	int x,y;
	cout<<"please enter the value of x"<<endl;
	cin>>x;
	cout<<"please enter the vakue of y"<<endl;
	cin>>y;
	cout<<"previous value of x: "<<x<<" and y: "<<y<<endl;
	swap(x,y);
	cout<<"new value of x: "<<x<<" and y: "<<y<<endl;
	return 0;

}


