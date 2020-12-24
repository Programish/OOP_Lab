#include<iostream>
using namespace std;
struct Student{
	int rol,y;
	char nm[20],brnch[5],x;
}s1;
int main(){
	cout<<"Enter name :";
	cin>>s1.nm;
	cout<<"Enter roll :";
	cin>>s1.rol;
	cout<<"Enter branch :";
	cin>>s1.brnch;
	cout<<"Enter section :";
	cin>>s1.x>>s1.y;
	cout<<"Name :"<<s1.nm<<endl;
	cout<<"Roll no. :"<<s1.rol<<endl;
	cout<<"Branch :"<<s1.brnch<<endl;
	cout<<"Section :"<<s1.x<<s1.y<<endl;
	return 0;
}
