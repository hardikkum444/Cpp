/*so the main function of a union in cpp is to save space 

so for example you take a union consisting of int id, and int salary 
then what union will do is when you call hardik.id it will store in
4 bytes and then when you call hardik.salary then it will store the
value provided by you in the same 4 bytes*/

#include <iostream>
using namespace std;

union employee
{
	int reg;
	char letter;
	int salary;
};

int main(){

	employee hardik;
	hardik.reg=12221;
	hardik.salary=12000000;

	cout<<hardik.reg;
	cout<<hardik.salary;

	return 0;
}

// as you will see in the output, the value 12000000 will only be
// printed twice as hardik.reg and hardik.salary share the same 4 bytes
// i.e the same memory location.