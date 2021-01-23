/*Create two classes A and B which stores the value in distances. 
Class A stores distance in metres and centimetres and class B in feet and inches.
WAP that can read values for the class objects and add one object A with another object of B.
Use a friend fxn to carry out the addition operation.
The object that stores the results may be a object of class A or B, depending on the units in which the results are required.
The display should be in the format of feet and inches or metres and centimetres depending on the object on display.*/

#include<iostream>
using namespace std;
class pu_f_i;
class pu_m_cm{
	float pu_m,pu_cm;
	public:
		void input(){
			cout<<"Enter distance in metre and centimetre respectively:\n";
			cin>>pu_m>>pu_cm;
		}
		friend pu_m_cm pu_add(pu_m_cm,pu_f_i);
		friend void show(pu_m_cm);
};
class pu_f_i{
	float pu_feet,pu_inch;
	public:
		void input(){
			cout<<"Enter distance in feets and inches respectively:\n";
			cin>>pu_feet>>pu_inch;
		}
		friend pu_m_cm pu_add(pu_m_cm,pu_f_i);
};
pu_m_cm pu_add(pu_m_cm d1,pu_f_i d2){
	pu_m_cm obj;
	obj.pu_m = d1.pu_m + 0.3048*d2.pu_feet;
	obj.pu_cm = d1.pu_cm + 2.54*d2.pu_inch;
	return obj;
}
void show(pu_m_cm obj){
	cout<<"After addition of metre costants to feet constants and centimetre costants to feet constants\n";
	cout<<"Resultant in m and cm is "<<obj.pu_m<<"m & "<<obj.pu_cm<<"cm\n";
}
int main(){
	pu_m_cm pu_obj1,pu_obj;
	pu_f_i pu_obj2;
	pu_obj1.input();
	pu_obj2.input();
	pu_obj = pu_add(pu_obj1,pu_obj2);
	show(pu_obj);
	return 0;
}


