//Code2
#include<iostream>
using namespace std;
class Emp{
	char nm[20];
	int id,sal;
	public:
		void read(){
			cout<<"Enter employee id:";
			cin>>id;
			cout<<"Enter name of employee:";
			cin>>nm;
			cout<<"Enter salary:";
			cin>>sal;
		}
		void display(){
			cout<<id<<"\t"<<nm<<"\t\t"<<sal<<endl;
		}
};
int main(){
	cout<<"Size of the class:"<<sizeof(Emp)<<endl;
	Emp e[10];
	for(int i=0;i<10;i++){
		cout<<"\nEmployee "<<i+1<<endl;
		e[i].read();
	 }
	 cout<<"Emp.ID\tName\t\tSalary"<<endl;
	 for(int i=0;i<10;i++)
		e[i].display();
	return 0;
}
