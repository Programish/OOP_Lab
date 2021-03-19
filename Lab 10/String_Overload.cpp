//Q4) Write a program to overload [ ] for a string object to get the particular character with a given string value.

#include <iostream>

using namespace std;

class Student_030{
	protected:
		char a[11]; 
	public:
		Student_030(char *x){
			int i;
			for(i = 0;i < 10;i++)
				a[i] = x[i];
		}
		void operator [] (int x){
			cout<<a[x]<<endl;
		}
};

int main(){

	char x[11] = "PUSHPENDRA";
	Student_030 s(x);

	s[6];

	return 0;
}
