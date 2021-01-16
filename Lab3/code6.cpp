//Code5
#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		complex(){
			real = 0;
			img = 0;
		}
		complex(int x,int y){
			real = x;
			img = y;
		}
		/*complex(complex& c){
			real = c.real;
			img = c.img;
		}*/
		complex add(complex);
		void display(complex);
};
void complex::display(complex c){
			cout<<c.real<<" + "<<"i "<<c.img<<endl;
		}
complex complex :: add(complex c){
	real = real + c.real;
	img = img + c.img;
	return *this;
}
int main(){
	complex c1(5,6),c2(7,8),c3;
	c3 = c1.add(c2);
	c3.display(c3);
	return 0;
}
