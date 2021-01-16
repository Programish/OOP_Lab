//Code3
#include<iostream>
using namespace std;
class Stu{
	const char *nm;
	int id;
	float mar;
	public:
		Stu(){
			nm = "Elon";
			id = 1;
			mar = 99.99;
		}
		void show(){
			cout<<id<<". "<<nm<<" got "<<mar<<" marks"<<endl;
		}
};
int main(){
	Stu s;
	s.show();
	return 0;
}
