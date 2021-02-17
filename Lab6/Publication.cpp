#include<iostream>
#include<string>
using namespace std;
class Publications{
	string title;
	int price;
	public:
		Publications(){
			getdata();
		}
		Publications(int p,string t){
			price=p;
			title=t;
		}
		Publications(Publications &p){
			title=p.title;
			price=p.price;
		}
		void getdata(){
			cout<<"Enter title:";
			cin>>title;
			cout<<"Enter price:";
			cin>>price;
		}
		void display(){
			cout<<"Title:"<<title<<"  Price:"<<price<<endl;
		}
};
class Pamphlet:public Publications{
	public:
		Pamphlet(){}
		Pamphlet(int p,string t):Publications(p,t){
		}
};
class Notice:public Pamphlet{
	string whom;
	public:
		Notice(){
			getdata();
		}
		Notice(int p,string t,string s):Pamphlet(p,t){
			whom=s;
		}
		Notice(Notice &s){
			whom=s.whom;
		}
		void getdata(){
			cout<<"Enter whom to notice:";
			cin>>whom;
		}
		void display(){
			cout<<"Whom:"<<whom<<endl;
		}
};
class Sales{
	float public_sale;
	public:
		Sales(){
			getdata();
		}
		Sales(float p1){
			public_sale=p1;
		}
		void getdata(){
			cout<<"Enter public sale:";
			cin>>public_sale;
		}
		void display(){
			cout<<"Public sale:"<<public_sale;
		}	
};
class Book:public Publications,public Sales{
	int pages;
	public:
		Book(){
			getdata();
		}
		Book(int p,string t,int pa,float s):Publications(p,t),Sales(s){
			pages=pa;
		}
		Book(Book &b){
			pages=b.pages;
		}
		void getdata(){
			cout<<"Enter pages:";
			cin>>pages;
		}
		void display(){
			cout<<"Pages:"<<pages<<endl;
		}
};
class Tape:public Publications,public Sales{
	int play_time;
	public:
		Tape(){
			getdata();
		}
		Tape(int p,string t,int pt,float s):Publications(p,t),Sales(s){
			play_time=pt;
		}
		Tape(Tape &t){
			play_time=t.play_time;
		}
		void getdata(){
			cout<<"Enter playtime:";
			cin>>play_time;
		}
		void display(){
			cout<<"Play time:"<<play_time<<endl;
		}
};
int main(){
	Book p1(12,"dfgh",56,6.5);
	p1.display();
	Tape p2(12,"cvbn",89,1.9);
	p2.display();//p2(p1),p3(2345,"sdfgh");
//	p1.Publications::display();
//	p1.display();
	//p2.display();
	//p3.display();
	return 0;
}
	
	
