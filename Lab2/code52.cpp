////Question5(ii)
#include<iostream>
using namespace std;
class A{
	int x,y,z;
	public:
		void get(){
			cout<<"Enter 3 no. :\n";
			cin>>x>>y>>z;
		}
		friend class B;
};
class B{
	int p,q,r;
	public:
		A a;
		void show(){
			a.get();
			cout<<"Entered :"<<a.x<<" "<<a.y<<" "<<a.z<<"\n";
		}
		void display(){
			cout<<"Sum: "<<(a.x+a.y+a.z)<<"\n";
		}
};
int main(){
	B b;
	b.show();
	b.display();
	return 0;
}
