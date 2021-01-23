//Find the area of a circle using the concept of constructor with default arguments

#include<iostream>
using namespace std;
class pu_Area{
	float pu_ar,pu_pi;
	int pu_R;
	public:
		pu_Area(){
			pu_R=5;
			pu_ar=3.14*pu_R*pu_R;
		}
		pu_Area(int pu_r,float pu_pi=3.14){
			pu_R=pu_r;
			pu_ar=pu_pi*pu_R*pu_R;
		}
		void pu_show(){
			cout<<"Area="<<pu_ar<<" with radius "<<pu_R<<endl;
		}
};
int main(){
	pu_Area pu_Cir1(4);
	pu_Cir1.pu_show();
	pu_Area pu_Cir2(2,3.14159);
	pu_Cir2.pu_show();
	pu_Area pu_Cir3;
	pu_Cir3.pu_show();
	return 0;
}
