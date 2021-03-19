//Q2) Write a C++ code to demonstrate constructor, virtual function, a pure virtual function and virtual destructor.

#include <iostream>

using namespace std;

class Vehicle_030{
	protected:
		int x;
	public:
		Vehicle_030(int temp): x(temp){
			cout<<"Constructor of base class called\n";
		}
		virtual void get(){}
		virtual void show() = 0;
		virtual ~Vehicle_030(){
			cout<<"Virtual destructor of base class called\n";
		}
};

class Car_030:public Vehicle_030{
	public:
		Car_030(int temp):Vehicle_030(temp){
			cout<<"Constructor of derived class called\n";
		}
                void get(){
                	cout<<"Virtual function class called\n";
                }
                void show(){
			cout<<"Pure virtual function called\n";
		}
		virtual ~Car_030(){
	              	cout<<"Virtual destructor of derived class called\n";
                }
};
int main(){
	Vehicle_030 *v = new Car_030(9);
	
	v -> get();
	v -> show();

	delete v;

	return 0;
}
