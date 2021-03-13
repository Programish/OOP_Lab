//Write a C++ program which will demonstrate overloading of unary minus operator.

#include<iostream>
using namespace std;

class Minus{
	int x;
	public:
		void read(int a){
			x=a;
		}
		void display(){
			cout<<x<<endl;
		}
		void operator - (){
			x=-x;
		}
};

int main(){
	Minus m;
	m.read(9);
	cout<<"Value:";
	m.display();
	-m;
	cout<<"After operator overloading:";
	m.display();
	return 0;
}
