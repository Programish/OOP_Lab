#include<iostream>
#define x 5 
using namespace std;
struct Employee{
	int EmpNo,Salary;
	char Name[20],Dept[20];
};
int Input(struct Employee *q);
int Display(struct Employee *q);
int Average(struct Employee *q);
int Highest(struct Employee *q);
struct Employee *e,E[x];
int main(){
	e=&E[0];
	Input(e);
	Display(e);
    Average(e);
    Highest(e);
	return 0;
}
int Input(struct Employee *q){
	for(int y=1;y<=x;y++,q++){
		cout<<"Enter Employee No.of employee"<<y<<" :"<<endl<<endl;
		cin>>q->EmpNo;
		cout<<"Enter Salary of Employee"<<y<<" :"<<endl<<endl;
		cin>>q->Salary;
		cout<<"Enter Name of Employee"<<y<<" :"<<endl<<endl;
		cin>>q->Name;
		cout<<"Enter Department of Employee"<<y<<" :"<<endl<<endl;
		cin>>q->Dept;
	}
	return 0;
}
int Display(struct Employee *q){
	for(int y=1;y<=x;y++,q++){
		cout<<"Employee No.of employee"<<y<<" :"<<q->EmpNo<<endl<<endl;
		cout<<"Salary of Employee"<<y<<" :"<<q->Salary<<endl<<endl;
		cout<<"Name of Employee"<<y<<" :"<<q->Name<<endl<<endl;
		cout<<"Department of Employee"<<y<<" :"<<q->Dept<<endl<<endl;
	}
	return 0;
}
int Average(struct Employee *q){
	float a=0;
	for(int y=0;y<x;y++,q++)
		a=a+q->Salary;
	a=a/x;
	cout<<"Average :"<<a<<endl<<endl;
	return 0;
}
int Highest(struct Employee *q){
	int h=0;
	for(int y=1;y<=x;y++,q++)
		if(h < q->Salary)
			h=q->Salary;
	cout<<"Highest :"<<h<<"of Employee "<<y<<endl<<endl;
	return 0;
}
