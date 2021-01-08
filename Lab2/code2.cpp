//Question2
#include<iostream>
using namespace std;
void area(int);//circle
void area(int,int);//triangle
void area(float,int);//rectangle
int main(){
	int r,b,h,x;
	float y;
	cout<<"1.Circle 2.Triangle 3.Rectangle";
	cout<<"Enter no.";
	cin>>x;
	switch(x){
		case 1: 
			cout<<"\nEnter radius\n";
			cin>>r;
			area(r);
			break;
		case 2:
			cout<<"\nEnter base and height\n";
			cin>>b>>h;
			area(b,h);
		case 3:
			cout<<"\nEnter base and height\n";
			cin>>y>>h;
			area(y,h);
			break;
		default:
			break;
	}
	return 0;
}
void area(int r){
	float x;
	x=3.14*r*r;
	cout<<"Area of circle:"<<x<<"\n";
}
void area(int b,int h){
	float x;
	x=b*h/2;
	cout<<"Area of triangle:"<<x<<"\n";
}
void area(float b,int h){
	float x;
	x=b*h;
	cout<<"Area of rectangle:"<<x<<"\n";
}
