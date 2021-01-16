//Code4
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
		A(int x,int y){
			this->x = x;
			this->y = y;
		}
		int f1(){
			return this->x;
		}
		int f2(){
			return this->y;
		}
};
int main(){
	A a(3,4);
	cout<<"Value 1:"<<a.f1()<<"  ";
	cout<<"Value 2:"<<a.f2()<<endl;
	return 0;
}
