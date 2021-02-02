//Code4

#include<iostream>
using namespace std;
class A{
	protected:
		int x,y,z;
	public:
		A(){
			x=1;
			y=2;
			z=3;
			cout<<"Constructor of A invoked\n";
		}
		void show(){
			cout<<"x:"<<x<<"  y:"<<y<<"  z:"<<z<<endl;
		}
		~A(){
			cout<<"Destructor of A invoked\n";
		}
};
class B:public A{
	protected:
		int a,b,c;
	public:
		B(){
			a=4;
			b=5;
			c=6;
			cout<<"Constructor of B invoked\n";
		}
		void show(){
			A::show();
			cout<<"a:"<<a<<"  b:"<<b<<"  c:"<<c<<endl;
		}
		~B(){
			cout<<"Destructor of B invoked\n";
		}
};
class C:public B{
	protected:
		int i,j,k;
	public:
		public:
		C(){
			i=7;
			j=8;
			k=9;
			cout<<"Constructor of C invoked\n";
		}
		void show(){
			B::show();
			cout<<"i:"<<i<<"  j:"<<j<<"  k:"<<k<<endl;
		}
		~C(){
			cout<<"Destructor of C invoked\n";
		}
};
int main(){
	{
		C c;
		c.show();
	}
	return 0;
}
