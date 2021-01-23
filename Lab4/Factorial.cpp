//Find the factorial of a number using copy constructor

#include<iostream>
using namespace std;
class pu_Fact{
	int pu_n,pu_factorial;
	public:
		pu_Fact(int pu_x=0){
			pu_n=pu_x;
		}
		int pu_fact(int);
		pu_Fact(const pu_Fact &pu_f){
			pu_n=pu_f.pu_n;
			pu_factorial = pu_fact(pu_n);
		}
		void pu_show(){
			cout<<"Factorial of "<<pu_n<<" = "<<pu_factorial<<endl;
		}
};
int pu_Fact::pu_fact(int pu_n){
	return pu_n==0?1:pu_n*pu_fact(pu_n-1);
}
int main(){
	pu_Fact pu_f1(4);
	pu_Fact pu_f2(pu_f1);
	pu_f2.pu_show();
	return 0;
}
