//Code1

#include<iostream>
using namespace std;
class pu_A{
	protected:
		int pu_x;
};
class pu_B:public pu_A{
	protected:
		int pu_y;
	public:
		void pu_show(){
			cout<<"Enter value of x:";
			cin>>pu_x;
			cout<<"Enter value of y:";
			cin>>pu_y;
			cout<<"\nValue of x:"<<pu_x;
			cout<<"\nValue of y:"<<pu_y<<endl;
		}
};
int main(){
	pu_B pu_b;
	pu_b.pu_show();
	return 0;
}
