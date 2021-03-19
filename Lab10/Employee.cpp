//Q1) Create a class which stores employee name,id and salary Derive two classes from Employee class: ‘Regular’ and ‘Part-Time’.
// The ‘Regular’ class stores DA, HRA and basic salary. 
// The ‘Part-Time’ class stores the number of hours and pay per hour. 
// Calculate the salary of a regular employee and a part-time employee, using virtual function.

#include <iostream>
#include <iomanip>

using namespace std;

class Employee_030{
	protected:
		char name[15];
		int id;
		float sal;
	public:
		virtual void get() = 0;
		virtual void show() = 0;
};

class Regular_030:public Employee_030{
	protected:
		float da,hra,basic_sal;
	public:
		void get(){
			cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter salary:";
			cin>>sal;
			
			basic_sal = sal;
		}
		void show(){
			cout<<setw(10)<<left<<"Type"<<setw(5)<<left<<"ID"<<setw(15)<<left<<"Name"<<setw(10)<<"Salary"<<endl;
		        cout<<setw(10)<<"Regular"<<setw(5)<<id<<setw(15)<<name<<setw(10)<<setfill('*')<<right<<basic_sal + 0.1*basic_sal + 0.2*basic_sal<<endl;
		}
};

class Part_Time_030:public Employee_030{
	protected:
		float hr,pay_hr;
	public:
		void get(){
		        cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter hours:";
			cin>>hr;
			cout<<"Enter salary per hour:";
			cin>>pay_hr;
		}
	        void show(){
			cout<<setw(10)<<left<<setfill(' ')<<"Type"<<setw(5)<<left<<setfill(' ')<<"ID"<<setw(15)<<left<<setfill(' ')<<"Name"<<setw(10)<<setfill(' ')<<"Salary"<<endl;
			cout<<setw(10)<<"Part-Time"<<setw(5)<<id<<setw(15)<<name<<setw(10)<<setfill('*')<<right<<hr * pay_hr<<endl;
		}	
};
int main(){

	Employee_030 *e;
	Regular_030 r;
	Part_Time_030 p;

	cout<<"Regular Employee------"<<endl;
	e = &r;
	e -> get();
	e -> show();
	cout<<endl;	
	cout<<"Part-Time Employee----"<<endl;
	e = &p;
	e -> get();
	e -> show();

	return 0;
}
