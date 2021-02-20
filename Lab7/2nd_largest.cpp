#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public A{
	protected:
		int b;
//	public:
//		a=5;
};
class C{
	protected:
		int c;
};
class D:public B,public C{
	public:
		D(int z,int y,int x=5){
			c=z;
			b=y;
			a=x;
		}
		void compare(){
			if(a>b){
				if(b>c)
					cout<<"Class B is 2nd largest\n";
				else if(b<c){
					if(a>c)
						cout<<"Class C is 2nd largest\n";
					else if(c>a)
						cout<<"Class A is 2nd largest\n";
					else
						cout<<"Class B is 2nd largest\n";
				}
				else
					cout<<"Class B & C are 2nd largest\n";
			}
			else if(a<b){
				if(b<c)
					cout<<"Class B is 2nd largest\n";
				else if(b>c){
					if(a>c)
						cout<<"Class A is 2nd largest\n";
					else if(c>a)
						cout<<"Class C is 2nd largest\n";
					else
						cout<<"Class A & C are 2nd largest\n";
				}
				else
					cout<<"Class A is 2nd largest\n";
			}
			else{
				if(c>a)
					cout<<"Class A & B are 2nd largest\n";
				else if(c<a)
					cout<<"Class C is 2nd largest\n";
				else
					cout<<"All are EQUAL!!!!!!!!!!\n";
			}
		}
};
int main(){
	D d(10,10,10);
	d.compare();
	return 0;
}




