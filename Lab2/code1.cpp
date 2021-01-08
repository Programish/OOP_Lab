//Question1
#include<iostream>
using namespace std;
void swap_value(int,int);
void swap_address(int*,int*);
void swap_reference(int&,int&);
int main(){
	int x,y,a,b;
	cout<<"Enter no. : \n";
	cin>>x>>y;
	a=x;
	b=y;
	swap_value(x,y);
	cout<<"\nSwapped values in call by reference:";
	swap_reference(x,y);
	cout<<x<<" "<<y<<"\n";
	cout<<"Swapped values in call by address:";
	swap_address(&a,&b);
	cout<<a<<" "<<b<<"\n";
	return 0;
}
void swap_value(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"Swapped values in call by value:";
	cout<<a<<" "<<b;
}
void swap_reference(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_address(int *a,int *b)
{
	int c;
    c=*a;
    *a=*b;
    *b=c;
}
