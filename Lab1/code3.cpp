#include<iostream>
using namespace std;
struct Employee{
	int EmpNo,Salary;
	char Name[20],Dept[20];
};
int main(){
	float avg=0;
	int x=0,y=0;
	struct Employee a[5];
	for(int i=0;i<5;i++){
		cout<<"Enter name of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Name;
		cout<<"Enter employee no. of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].EmpNo;
		cout<<"Enter departement of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Dept;
		cout<<"Enter salary of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Salary;
	}
	for(int i=0;i<5;i++)
		avg+=a[i].Salary;
	cout<<"Average Salary :"<<avg/5<<endl;
	for(int i=0;i<5;i++)
		if(x<a[i].Salary){
			x=a[i].Salary;
			y=i;
		}
	cout<<"Details of employee"<<y<<"having highest salary"<<endl;
	cout<<"Name :"<<a[y].Name<<endl<<"Employee no. :"<<a[y].EmpNo<<endl<<"Departement :"<<a[y].Dept<<endl<<"Salary :"<<a[y].Salary<<endl;
	return 0;
}
