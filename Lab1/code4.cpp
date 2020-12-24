#include<iostream>
using namespace std;
struct Student{
	int rol,y;
	char nm[20],brnch[5],x;
};
int main(){
	struct Student *s,s1;
	s=&s1;
	cout<<"Enter name :";
	cin>>s->nm;
	cout<<"Enter roll :";
	cin>>s->rol;
	cout<<"Enter branch :";
	cin>>s->brnch;
	cout<<"Enter section :";
	cin>>s->x>>s->y;
	cout<<"Name :"<<s->nm<<endl;
	cout<<"Roll no. :"<<s->rol<<endl;
	cout<<"Branch :"<<s->brnch<<endl;
	cout<<"Section :"<<s->x<<s->y<<endl;
	return 0;
}
	
