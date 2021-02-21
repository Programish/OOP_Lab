#include<iostream>
using namespace std;
class A{
	protected:
		int num1;
	public:
	//	A(int y):num1(y){}
		int Factorial(int x=1){
			return x*((num1==1)?1:Factorial(num1--));
		}
};
class B:virtual public A{
	protected:
		int num1;
};
class C:public virtual A{
	protected:
		int num2;
};
class D:public B,public C{
	public:
		int x=0;
		D(int c,int b,int a){
			num2=c;
			B::num1=b;
			A::num1=a;
			x=x+Factorial(a);
		}
		void compare(){
			if(num2>B::num1){
				if(num2>A::num1)
					cout<<"Class C has largest\n";
				else if(num2<A::num1)
					cout<<"Class A has largest\n";
				else
					cout<<"Class A & C has largest\n";
			}
			else if(num2<B::num1){
				if(B::num1>A::num1)
					cout<<"Class B has largest\n";
				else if(B::num1<A::num1)
					cout<<"Class A has largest\n";
				else
					cout<<"Class A & B has largest\n";
			}
			else{
				if(num2>A::num1)
					cout<<"Class B and C has largest\n";
				else if(num2<A::num1)
					cout<<"Class A has largest\n";
				else
					cout<<"All are equal!!!!!!!!!!!\n";
			}
		}
		void display(){
			cout<<"Factorial:"<<x<<endl;
		}
};
int main(){
	D a(12,70,10);
	a.compare();
	a.display();
	return 0;
}
