//Question3
#include<iostream>
using namespace std;
void intrst(int p,int t,float r = 8.5){
	float a;
	a=p*(1+r*t);
	cout<<"Amount:"<<a<<"\n";
}
int main(){
	int p,t;
	float r;
	//cout<<"Give principal value,time,rate of interest:\n";
	//cin>>p>>t>>r;
	intrst(5,6);
	return 0;
}

