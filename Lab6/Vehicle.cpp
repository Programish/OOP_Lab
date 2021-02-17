#include<iostream>
#include<string>
using namespace std;
class Vehicle{
	protected:
		string name;
		int wheels;
	public:
		Vehicle(){
			read();
		}
		Vehicle(int w,string n){
			name=n;
			wheels=w;
		}
		Vehicle(Vehicle &v){
			name=v.name;
			wheels=v.wheels;
		}
		void read(){
			cout<<"Enter name of vehicle:";
			cin>>name;
			cout<<"Enter no. of wheels of vehicle:";
			cin>>wheels;
		}
		void display(){
			cout<<"Vehicle:"<<name<<" have"<<" "<<wheels<<" wheels."<<endl;
		}
};
class Light_Gear:public Vehicle{
	protected:
		float sl;
	public:
		Light_Gear(){
			read();
		}
		Light_Gear(float s,string n,int w):Vehicle(w,n){
			sl=s;
		}
		Light_Gear(Light_Gear &l){
			sl=l.sl;
		}
		void read(){
			cout<<"Enter speed limit:";
			cin>>sl;
		}
		void display(){
			cout<<"Speed limit:"<<sl<<endl;
		}
};
class Heavy_Gear:public Vehicle{
	protected:
		float load;
		string permit;
	public:
		Heavy_Gear(){
			read();
		}
		Heavy_Gear(float l,string p,string n,int w):Vehicle(w,n){
			load=l;
			permit=p;
		}
		Heavy_Gear(Heavy_Gear &h){
			load=h.load;
			permit=h.permit;
		}
		void read(){
			cout<<"Enter load capacity of vehicle:";
			cin>>load;
			cout<<"Enter permit(yes/no):";
			cin>>permit;
		}
		void display(){
			cout<<"Load:"<<load<<"  Permit:"<<permit<<endl;
		}
};
class Gear_Motor:public Light_Gear{
	protected:
		int count;
	public:
		Gear_Motor(){
			read();
		}
		Gear_Motor(int c,float s,string n,int w):Light_Gear(s,n,w){
			count=c;
		}
		Gear_Motor(Gear_Motor &g){
			count=g.count;
		}
		void read(){
			cout<<"Enter gear count:";
			cin>>count;
		}
		void display(){
			cout<<"Gear count:"<<count<<endl;
		}
};
class NonGear_Motor:public Light_Gear{
	protected:
		int count;
	public:
		NonGear_Motor(){}
		NonGear_Motor(float s,string n,int w):Light_Gear(s,n,w){
		}
};
class Passenger:public Heavy_Gear{
	protected:
		int sit,stand;
	public:
		Passenger(){
			read();
		}
		Passenger(int si,int st,float l,string p,string n,int w):Heavy_Gear(l,p,n,w){
			sit=si;
			stand=st;
		}
		Passenger(Passenger &p){
			sit=p.sit;
			stand=p.stand;
		}
		void read(){
			cout<<"Enter sitting capacity:";
			cin>>sit;
			cout<<"Enter standing capacity:";
			cin>>stand;
		}
		void display(){
			cout<<"Sitting capacity:"<<sit<<"  Standing capacity:"<<stand<<endl;
		}
};
class Goods:public Heavy_Gear{
	protected:
		string type;
	public:
		Goods(){
			read();
		}
		Goods(string t,float l,string p,string n,int w):Heavy_Gear(l,p,n,w){
			type=t;
		}
		Goods(Goods &p){
			type=p.type;
		}
		void read(){
			cout<<"Enter type:";
			cin>>type;
		}
		void display(){
			cout<<"Type:"<<type<<endl;
		}
};
int main(){
	Goods g("dfg",2.5,"sdf","vbn",9);
	g.display();
	return 0;
}


