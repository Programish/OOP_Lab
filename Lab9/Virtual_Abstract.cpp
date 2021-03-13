//Q4) Write a simple code to demonstrate use of pure virtual function and abstract base class.
#include<iostream>
using namespace std;
class Shape_030{
	protected:	
		int x;
	public:
		Shape_030(int p = 1):x(p){}
		virtual void area() = 0;
};
class Circle_030:public Shape_030{
	public:
		Circle_030(int q = 2):Shape_030(q){}
		void area(){
			cout<<"Area:"<<3.141 * x * x<<endl;
		}
};
int main(){
	Circle_030 c;
	Shape_030 *s = &c;
	s->area();
	return 0;
}
