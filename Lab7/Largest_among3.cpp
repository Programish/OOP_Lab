#include<iostream>
using namespace std;
int x=0;
class Base{
	protected:
		int num1;
/*	public:
		Base(int b){
			num1=b;
		}*/
};
class D1:public Base{
	protected:
		int num2;
/*	public:
		D1(int d1,int b):Base(b){
			num2=d1;
		}*/
};
class D2:public D1{
	protected:
		int num1;
/*	public:
		D2(int d2,int d1,int b):D1(d1,b){
			num1=d2;
		}*/
};
class Largest:public D2{
	public:
	//	Largest(int d2,int d1,int b):D2(d2,d1,b){}
		Largest(int d2,int d1,int b){
			D2::num1=d2;
			D1::num2=d1;
			Base::num1=b;
		}
		void compare(){
			if(D2::num1>D1::num2){
				if(D2::num1>Base::num1)
					cout<<"Class D2 has largest\n";
				else if(D2::num1<Base::num1)
					cout<<"Class Base has largest\n";
				else
					cout<<"Class D2 & Base has largest\n";
			}
			else if(D1::num2>D2::num1){
				if(D1::num2>Base::num1)
					cout<<"Class D1 has largest\n";
				else if(D1::num2<Base::num1)
					cout<<"Class Base has largest\n";
				else
					cout<<"Class D1 & Base has largest\n";
			}
			else{
				if(D1::num1>Base::num1)
					cout<<"Class D1 and D2 has largest\n";
				else
					cout<<"Class Base has largest\n";
			}
		}
};
int main(){
	Largest l(9,15,100);
	l.compare();
	return 0;
}


