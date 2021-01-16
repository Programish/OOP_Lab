//Code1
#include<iostream>
using namespace std;
class A{
	char sub[10];
	int mrk;
	public:
		void read(){
			cout<<"Name of subject :";
			cin>>sub;
			cout<<"Marks:";
			cin>>mrk;
		}
		void display(){
			cout<<mrk<<" marks in "<<sub<<endl;
		}
};
int main(){
	A stud[3];
	cout<<"Enter name of 3 subjects and corresponding marks of a student:\n";
	for(int i=0;i<3;i++)
		stud[i].read();
	for(int i=0;i<3;i++)
		stud[i].display();
	return 0;
}
