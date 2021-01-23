//WAP to calculate the area of triangle,rectangle and circle using 
//constructor overloading

#include<iostream>
using namespace std;
class pu_Area{
	int pu_b,pu_h,pu_r;
	float pu_ar;
	double pu_l;
	public:
		pu_Area(int pu_b,int pu_h){
			this->pu_b=pu_b;
			this->pu_h=pu_h;
			pu_ar=0.5*this->pu_b*this->pu_h;
			cout<<"Area of triangle="<<pu_ar<<endl;
		}
		pu_Area(double pu_l,int pu_b){
			this->pu_b=pu_b;
			this->pu_l=pu_l;
			pu_ar=this->pu_b*this->pu_l;
			cout<<"Area of rectangle="<<pu_ar<<endl;
		}
		pu_Area(int pu_r){
			this->pu_r=pu_r;
			pu_ar=3.14*this->pu_r*this->pu_r;
			cout<<"Area of circle="<<pu_ar<<endl;
		}
};
int main(){
	pu_Area pu_tr(2,3);
	pu_Area pu_rec(4.5,4);
	pu_Area pu_cir(5);
	return 0;
}
