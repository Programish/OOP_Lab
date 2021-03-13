//Q1) Create a class Yourroll_Polygon with data member roll_height and roll_width and a member function roll_setData(). 
//Rectangle and Triangle are two classes and both having derived from Yourroll_Polygon. 
//Set values for both derived classes and display the area() by derived class object.
#include<iostream>
using namespace std;
class ECS030_Polygon{
	protected:
		int ECS030_height,ECS030_width;
};
class Rectangle:public ECS030_Polygon{
	public:
		void ECS030_setData(int p = 40,int q = 50){
			ECS030_height = p;
			ECS030_width = q;
		}
		void area(){
			cout<<"Area of rectangle:"<<ECS030_height*ECS030_width<<endl;
		}
};	
class Triangle:public ECS030_Polygon{
	public:
		void ECS030_setData(int p = 40,int q = 50){
			ECS030_height = p;
			ECS030_width = q;
		}
		void area(){
			cout<<"Area of Triangle:"<<ECS030_height * ECS030_width*0.5<<endl;
		}
};	
int main(){
	Rectangle r;
	Triangle t;
	r.ECS030_setData();
	r.area();
	t.ECS030_setData();
	t.area();
	return 0;
}



