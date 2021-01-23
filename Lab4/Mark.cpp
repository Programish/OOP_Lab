/* Define a class mark 
Data menbers are roll,name ,marks of 5 subjects ,avg
Avg() fxn to compute average obtained in 5 subjects
Input() fxn to accept values roll.no,name ,marks
Call the fxns to display all the data members of a student on the screen*/

#include<iostream>
using namespace std;

class pu_Mark{
	int pu_roll;
	char pu_name[20];
	float pu_mark1,pu_mark2,pu_mark3,pu_mark4,pu_mark5,pu_avg;
	public:
		void pu_Input(){
			cout<<"Enter roll no.:";
			cin>>pu_roll;
			cout<<"Enter name:";
			cin>>pu_name;
			cout<<"Enter marks of 5 subjects :";
			cin>>pu_mark1>>pu_mark2>>pu_mark3>>pu_mark4>>pu_mark5;
		}
		void pu_Avg(){
			pu_avg=(pu_mark1+pu_mark2+pu_mark3+pu_mark4+pu_mark5)/5;
		}
		void pu_Show(){
			cout<<"\nDetails are as follows"<<endl;
			cout<<pu_roll<<". "<<pu_name<<endl;
			cout<<"Marks in 5 subjects are: "<<pu_mark1<<" "<<pu_mark2<<" "<<pu_mark3<<" "<<pu_mark4<<" "<<pu_mark5;
			cout<<"\nAverage :"<<pu_avg<<endl;
		}
};
int main(){
	pu_Mark pu_stu1;
	pu_stu1.pu_Input();
	pu_stu1.pu_Avg();
	pu_stu1.pu_Show();
	return 0;
}
