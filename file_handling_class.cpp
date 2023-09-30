#include <iostream>
#include <fstream>

using namespace std;

class employee
{
private:
	char name[30];
	char employee_ID[20];
	char joining_DATE[20];
	char position[20];
	char marital_status[10];
	char age[20];
	char salary[20];
	char comment[20];

public:
	void getEMP_data()
	{
		cout<<"Welcome to InfoBrother: "<<endl;
		cout<<"=======================";
		cout<<"\n\n Employee name: "<<endl;
		cin.getline(name,30);
		cout<<"Employee ID: "<<endl;
		cin.getline(employee_ID,20);
		cout<<"joining date: "<<endl;
		cin.getline(joining_DATE,20);
		cout<<"position: "<<endl;
		cin.getline(position,20);
		cout<<"Martial status: "<<endl;
		cin.getline(marital_status,10);
		cout<<"age: "<<endl;
		cin.getline(age,20);
		cout<<"salary"<<endl;
		cin.getline(salary,20);
		cout<<"status: "<<endl;
		cin.getline(status,20);

	}


	void showemp_data()
	{
		cout<<"\n\nEmployee Data: "<<endl;
		cout<<"====================\n"<<endl;
		cout<<" Name: "<<name<<endl;
		cout<<" employee_ID: "<<employee_ID<<endl;
		cout<<" position: "<<position<<endl;
		cout<<" Date of joining: "<<joining_DATE<<endl;
		cout<<" Age of employee: "<<age<<endl;
		cout<<" total salary: "<<endl;
		cout<<" Martial status: "<<endl;
		cout<<" comment: "<<endl;

	}
	
	class library
	{
	public:
		Employee Emp;
		fstream fp, fp1;

		void WriteEmployee()
		{
			fp.open("employee.txt", ios::out);
			(fp)
			{
				Emp.getEmp_data();

				fp.write ((char*)&Emp,sizeof(Emp));
				cout<<"Record store successfully: "<<endl;
			}
			fp.close();
		}

		void W_displayEmp()
		{
			fp.open("Employee.txt",ios::in);
			if (fp)
			{
				while(fp.read((char*)&Emp,sizeof(Emp))){
					Emp.showemp_data()
				}
			}
		}
	}
}