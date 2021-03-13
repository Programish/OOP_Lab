//Write a program to demonstrate the insertion and extraction operator overloading.

#include<iostream>
using namespace std;

class A{
	int x;
	public:
		A(int p=5,int q=10):x(p){}
		
		friend istream & operator >> (istream &,A &);
		friend ostream & operator << (ostream &,A &);
};

istream & operator >> (istream & in,A & ob){
	in>>ob.x;
	return in;
}

ostream & operator << (ostream & out,A & ob){
	out<<ob.x<<endl;
	return out;
}

int main(){
	A a,b,c;
	cout<<"Enter values:"<<endl;
	cin>>a>>b>>c;
	cout<<"Displaying values:"<<endl;
	cout<<a<<b<<c;
	return 0;
}

