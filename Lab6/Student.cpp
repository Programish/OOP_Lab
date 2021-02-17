#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		char branch[5];
	public:
		Student(){
			read();
		}			
		void read(){
			cout<<"Enter roll:";
			cin>>roll;
			cout<<"Enter branch:";
			cin>>branch;
		}
		void display(){
			cout<<"\nRoll:"<<roll<<"  Branch:"<<branch<<endl;
		}
};
class Internal_Exam:public virtual Student{
	protected:
		int sub1_mark,sub2_mark;
	public:
		Internal_Exam(){
			read();
		}
		void read(){
			cout<<"Enter internal marks of subject1:";
			cin>>sub1_mark;
			cout<<"Enter internal marks of subject2:";
			cin>>sub2_mark;
		}
		void display(){
			cout<<"Internal marks of subject1 & subject2 are "<<sub1_mark<<" & "<<sub2_mark<<" respectively\n";
		}
};
class External_Exam:virtual public Student{
	protected:
		int sub1_mark,sub2_mark;
	public:
		External_Exam(){
			read();
		}
		void read(){
			cout<<"Enter external marks of subject1:";
			cin>>sub1_mark;
			cout<<"Enter external marks of subject2:";
			cin>>sub2_mark;
		}
		void display(){
			cout<<"External marks of subject1 & subject2 are "<<sub1_mark<<" & "<<sub2_mark<<" respectively\n";
		}
};
class Result:public Internal_Exam,public External_Exam{
	protected:
		int total1=0,total2=0;
	public:
		Result(){
			calc();
		}
		void calc(){
			total1 += Internal_Exam::sub1_mark + External_Exam::sub1_mark;
			total2 += Internal_Exam::sub2_mark + External_Exam::sub2_mark;
		}
		void display(){
			cout<<"Total marks in subject1:"<<total1<<endl;
			cout<<"Total marks in subject2:"<<total2<<endl;
		}
};
int main(){
	Result r;
	r.display();
	return 0;
}



