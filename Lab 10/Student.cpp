//Q3) Create an abstract class Student. 
//IT , CSE , and CSCE are 3 classes derived from Student, 
//Input the student Details ( roll , name, branch, section) and 
//display the details using base class array of pointers.
//Note: All display functions should display the data using manipulators.

#include <iostream>
#include <iomanip>

using namespace std;

class Student_030{
	protected:
		int roll;
		char name[15];
		char sec[5];
	public:
		void get(){
			cout<<"Enter roll no.";
			cin>>roll;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter section:";
			cin>>sec;
		}
		virtual void show() = 0;
};

class IT_030:public Student_030{
	public:
		void show(){
			cout<<setw(8)<<left<<"Branch"<<setw(9)<<left<<"Roll.No"<<setw(10)<<left<<"Name"<<setw(5)<<left<<"Section"<<endl;
			cout<<setw(8)<<"IT"<<setw(9)<<roll<<setw(10)<<name<<setw(5)<<sec<<endl;
		}
};

class CSE_030:public Student_030{
	public:
		void show(){
			cout<<setw(8)<<left<<"Branch"<<setw(9)<<left<<"Roll.No"<<setw(10)<<left<<"Name"<<setw(5)<<left<<"Section"<<endl;
                        cout<<setw(8)<<"CSE"<<setw(9)<<roll<<setw(10)<<name<<setw(5)<<sec<<endl;
		}
};

class CSCE_030:public Student_030{
	public:
		void show(){
			cout<<setw(8)<<left<<"Branch"<<setw(9)<<left<<"Roll.No"<<setw(10)<<left<<"Name"<<setw(5)<<left<<"Section"<<endl;
                        cout<<setw(8)<<"CSCE"<<setw(9)<<roll<<setw(10)<<name<<setw(5)<<sec<<endl;
		}
};

int main(){

	Student_030 *s[3];
	IT_030 it;
	CSE_030 cse;
	CSCE_030 csce;

	s[0] = &it;
	s[1] = &cse;
	s[2] = &csce;

	cout<<"IT----------";
	s[0] -> get();
	s[0] -> show();

	cout<<"CSE---------";
	s[1] -> get();
	s[1] -> show();

	cout<<"CSCE--------";
	s[2] -> get();
	s[2] -> show();

	return 0;
};
