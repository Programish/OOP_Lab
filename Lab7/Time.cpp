#include<iostream>
using namespace std;
class Hour{
	protected:
		int hh;
};
class Minute{
	protected:
		int mm;
};
class Second{
	protected:
		int ss;
};
class Time:public Second,public Minute,public Hour{
	public:
		Time(int h,int m,int s){
			hh=h;
			mm=m;
			ss=s;
		}
		void calc(){
			if(ss>60){
				mm=mm+int(ss/60);
				ss=ss%60;
			}
			if(mm>60){
				hh=hh+int(mm/60);
				mm=mm%60;
			}
		}
		void display(){
			cout<<"Time in proper format-> "<<hh<<":"<<mm<<":"<<ss<<endl;
		}
};
int main(){
	Time t(23,145,95);
	t.calc();
	t.display();
	return 0;
}
		
	
