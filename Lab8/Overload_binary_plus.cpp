/*Define a class PLUS having two integer member variables .
use constructor to initialize the variables. 
Create two objects of the class and overload the binary + operator to display the sum of two objects in complex number format.*/

#include<iostream>
using namespace std;

class PLUS{
	int x;
	int y;
	public:
		
		PLUS(){
			x=0;
			y=0;
		}
		
		PLUS(int a,int b):x(a),y(b){}
		
		PLUS operator+(PLUS p){
			return PLUS((x+p.x),(y+p.y));
		}
		
		void display(){
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
		}
};

int main(){
	PLUS p1(4,5),p2(7,9),p3;
	p3=p1+p2;
	cout<<"P1 :"<<endl;
	p1.display();
	cout<<"P2 :"<<endl;
	p2.display();
	cout<<"P3 :"<<endl;
	p3.display();
	
	return 0;
};
