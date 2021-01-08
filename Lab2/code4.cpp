//Question4
#include<iostream>
using namespace std;
inline float square(float x){
	return (x*x);
}
int main(){
	int p,q;
	cout<<"Enter no. :";
	cin>>p;
	q = square(p);
	cout<<"Square:"<<q<<"\n";
	return 0;
}
