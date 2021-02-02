//Code2

#include<iostream>
using namespace std;
class pu_Employee{
	protected:	
		int pu_empid;
		char pu_empname[20];
};
class pu_Salary:public pu_Employee{
	protected:
		int pu_basic,pu_DA,pu_HRA,pu_EPF;
		float pu_gross=0;
	public:
		pu_Salary(){
			cout<<"Enter employee id:";
			cin>>pu_empid;
			cout<<"Enter employee name:";	
			cin>>pu_empname;
			cout<<"Enter basic value:";
			cin>>pu_basic;
			cout<<"Enter DA value:";
			cin>>pu_DA;
			cout<<"Enter HRA value:";
			cin>>pu_HRA;
			cout<<"Enter EPF value:";
			cin>>pu_EPF;
		}
		void pu_Gross(){
			pu_gross += pu_basic + pu_DA + pu_HRA - pu_EPF;
		}
		void pu_Display(){
			cout<<"Details----------------\n";
			cout<<"Employee ID:"<<pu_empid<<endl;
			cout<<"Employee name:"<<pu_empname<<endl;
			cout<<"Basic value:"<<pu_basic<<endl;
			cout<<"DA value:"<<pu_DA<<endl;
			cout<<"HRA value:"<<pu_HRA<<endl;
			cout<<"EPF value:"<<pu_EPF<<endl;
			cout<<"Calculated gross:"<<pu_gross<<endl;
		}
};
int main(){
	pu_Salary pu_s;
	pu_s.pu_Gross();
	pu_s.pu_Display();
	return 0;
}
