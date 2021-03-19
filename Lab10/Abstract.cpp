//Q5) Illustrate the use of an Abstract class.

#include <iostream>

using namespace std;

class X_030{
	protected:
		int x;
	public:
		virtual void get() = 0;
};

class Y_030:public X_030{
	public:
		void get(){
			cout<<"Enter:";
			cin>>x;
		}
};

int main(){
	
	X_030 *a;
	Y_030 b;

	a = &b;

	a -> get();

	return 0;
}
