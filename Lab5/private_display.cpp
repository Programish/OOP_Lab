//Code3

#include<iostream>
using namespace std;
class pu_Base{
	private:
		int pu_x,pu_y;
	public:
		pu_Base(int pu_p,int pu_q):pu_x(pu_p),pu_y(pu_q){};
		void pu_show(){
			cout<<"For base class x="<<pu_x<<"  y="<<pu_y<<endl;
		}
};
class pu_Derived:public pu_Base{
	public:
		pu_Derived(int pu_p,int pu_q):pu_Base(pu_p,pu_q){};
		void pu_show(){
			pu_Base::pu_show();
		}
};
int main(){
	pu_Derived pu_d(2,3);
	pu_d.pu_show();
	return 0;
}
