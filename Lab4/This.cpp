//WAP to show data members can be accessed through this pointer

#include<iostream>
using namespace std;
class pu_Area{
	int pu_b,pu_h,pu_r;
	float pu_ar,pu_l;
	public:
		pu_Area(int pu_b,int pu_h){
			this->pu_b=pu_b;
			this->pu_h=pu_h;
			pu_ar=0.5*this->pu_b*this->pu_h;
			cout<<"Area of triangle="<<pu_ar<<endl;
		}
};
int main(){
	pu_Area(2,3);
	return 0;
}
