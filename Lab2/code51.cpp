//Question5(i)
#include<iostream>
using namespace std;
class A{
	int x;
	public:
		void get(){
			cout<<"Enter :";
			cin>>x;
		}
		friend void show(A);
};
void show(A a){
	cout<<"Showing: "<<a.x<<"\n";
}
int main(){
	A a;
	a.get();
	show(a);
}
