//Q2) Solve the above Q1 by showing the area() by base class object.

#include<iostream>
using namespace std;
class ECS030_Polygon{
	protected:
		int ECS030_height,ECS030_width;
		float result = 0;
	public:
		virtual void ECS030_setData(){}
		void area(){
			cout<<"Area:"<<result<<endl;
		}
};
class Rectangle:public ECS030_Polygon{
	public:
		void ECS030_setData(int p = 40,int q = 50){
			ECS030_height = p;
			ECS030_width = q;
		}
		void rslt(){
			result = ECS030_height * ECS030_width;
		}
};	
class Triangle:public ECS030_Polygon{
	public:
		void ECS030_setData(int p = 40,int q = 50){
			ECS030_height = p;
			ECS030_width = q;
		}
		void rslt(){
			result = ECS030_height * ECS030_width * 0.5;
		}
};	
int main(){
	ECS030_Polygon *p;
	Rectangle r;
	Triangle t;
	r.ECS030_setData();
	r.rslt();
	cout<<"Rectangle---";
	p = &r;
	p -> area();
	t.ECS030_setData();
	t.rslt();
	cout<<"Triangle---";
	p = &t;
	p -> area();
	return 0;
}



