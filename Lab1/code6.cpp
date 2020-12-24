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
	for(int i=0;i<10;i++){
		cout<<"Enter name of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Name;
		cout<<"Enter employee no. of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].EmpNo;
		cout<<"Enter departement of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Dept;
		cout<<"Enter salary of Employee"<<i+1<<" :"<<endl;
		cin>>a[i].Salary;
	}
	cout<<"Slab1 :"<<endl;
	for(int i=0;i<10;i++)
		if(a[i].Salary<=10000){
			cout<<"Name :"<<a[i].Name<<endl<<"Employee no. :"<<a[i].EmpNo<<endl<<"Departement :"<<a[i].Dept<<endl<<"Salary :"<<a[i].Salary<<endl;
		}
	cout<<"Slab2 :"<<endl;
	for(int i=0;i<10;i++)
		if(a[i].Salary>50000){
			cout<<"Name :"<<a[i].Name<<endl<<"Employee no. :"<<a[i].EmpNo<<endl<<"Departement :"<<a[i].Dept<<endl<<"Salary :"<<a[i].Salary<<endl;
		}
	cout<<"Slab3 :"<<endl;
	for(int i=0;i<10;i++)
		if(a[i].Salary>=10001 && a[i].Salary<=49999){
			cout<<"Name :"<<a[i].Name<<endl<<"Employee no. :"<<a[i].EmpNo<<endl<<"Departement :"<<a[i].Dept<<endl<<"Salary :"<<a[i].Salary<<endl;
		}
	return 0;
}
