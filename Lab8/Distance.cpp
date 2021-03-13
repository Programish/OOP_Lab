/*Create a Class TwoD with data members x_co and y_co,
take the values of two co-ordinates from the user and 
find the distance between two points by using operator overloading.*/

#include<iostream>
#include<cmath>
using namespace std;

class TwoD{
	int x_co,y_co;
	public:
		TwoD():x_co(0),y_co(0){}
		
		TwoD(int p,int q):x_co(p),y_co(q){}
		
		float operator-(TwoD t){
			float p,q;
			p=pow(x_co-t.x_co,2);
			q=pow(y_co-t.y_co,2);
			return pow(p+q,0.5);
		}
		
		void display(){
			cout<<x_co<<","<<y_co;
		}
};

int main(){
	TwoD t1(2,6),t2(4,9);
	float t3;
	t3=t1-t2;
	cout<<"Coordinate1-"<<endl;
	t1.display();
	cout<<"\nCoordinate2-"<<endl;
	t2.display();
	cout<<"\nResultant distance: "<<t3<<endl;
	return 0;
}
