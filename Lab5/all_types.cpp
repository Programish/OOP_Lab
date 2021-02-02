//Code5

#include<iostream>
using namespace std;
class A{
	protected:
		int x;
};
//-----------------------------------------------------------------------
class B:public A{
	protected:
		int y;
};
class B_:public B{
	protected:
		int z;
	public:
		B_(int a,int b,int c){
			cout<<"For protected mode-------------------\n";
			x=a;y=b;z=c;
		}
		void show(){
			cout<<"x:"<<x<<"  y:"<<y<<"  z:"<<z<<endl;
		}
};
//-----------------------------------------------------------------------
class C:protected A{
	protected:
		int y;
};
class C_:protected C{
	protected:
		int z;
	public:
		C_(int a,int b,int c){
			cout<<"For protected mode-------------------\n";
			x=a;y=b;z=c;
		}
		void show(){
			cout<<"x:"<<x<<"  y:"<<y<<"  z:"<<z<<endl;
		}
};
//-----------------------------------------------------------------------
class D:private A{
	protected:
		int y;
};
class D_:private D{
	protected:
		int z;
	public:
		D_(int a,int b,int c){
			cout<<"For private mode-------------------\n";
			//x=a;      --->error
			y=b;z=c;
		}
		void show(){
			cout/*<<"x:"<<x*/<<"  y:"<<y<<"  z:"<<z<<endl;
		}         // |--> error 
};

int main(){
	{
		B_ b(1,2,3);
		b.show();
		C_ c(4,5,6);
		c.show();
		D_ d(7,8,9);
		d.show();
	}
	return 0;
}


