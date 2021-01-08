//Question5(iii)
#include<iostream>
using namespace std;
class A;

class B{
	int s,t;
	public:
		void set(int p,int q){
			s=p;
			t=q;
		}
		void add(A);
};

class A{
	int x,y;
	public:
		void set(int p,int q){
			x=p;
			y=q;
		}
	friend void B :: add(A);
};

void B :: add(A a){
	a.set(5,10);
	cout<<"Result: "<<a.x+a.y+s+t<<"\n";
}

int main(){
	A a;
	B b;
	a.set(5,10);
	b.set(5,10);
	b.add(a);
}
