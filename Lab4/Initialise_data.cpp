//Write all the possible way to initialise the data members by constructors

#include<iostream>
using namespace std;
class pu_Constructor{	
	int pu_x,pu_y;
	public:
		pu_Constructor():pu_x(0),pu_y(20){};
		pu_Constructor(int pu_n,int pu_m):pu_x(pu_n),pu_y(pu_m){};
		void pu_show(){
			cout<<"x = "<<pu_x<<"  y = "<<pu_y<<endl;
		}
};
int main(){
	pu_Constructor pu_c1;
	pu_c1.pu_show();
	pu_Constructor pu_c2(2,3);
	pu_c2.pu_show();
	return 0;
}
