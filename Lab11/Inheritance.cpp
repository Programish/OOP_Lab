// Q5 WAP in C++ to handle the exception for the following inheritance structure.
// [Exception type must be class type]
//
// Parent
// P_Age : int
// Parent(int age) : throws exception if age is < 0
// Read(): read the age
// Write(): display age
// 	    /\
// 	    |
// 	    |
// 	    |
// 	    |
// Child
// C_Age : int
// Child(int age) : throws exception if child age > parent age
// Read(): read the age
// Write(): display age

#include <iostream>

using namespace std;

class Parent_030{
	protected:
		int P_Age;
	public:
		Parent_030(int age) : P_Age(age){
			cout << "Given Parent's Age :" << P_Age << endl;
			try{
				if(P_Age < 0)
					throw P_Age;
			}
			catch (int x){
                        	cout << "Parent's Age can't be Negtive\n";
                        }
		}
		void read(){
			cout << "Enter Parent's Age:";
			cin >> P_Age;
			try{
				if(P_Age < 0)
					throw P_Age;
			}
			catch (int x){
                        	cout << "Parent's Age can't be Negtive\n";
                        }
		}
		void display(){
			cout << "Parent's Age:" << P_Age << endl;
		}
};

class Child_030 : public Parent_030{
	protected:
		int C_Age;
	public:
		Child_030(int c_age,int p_age) : C_Age(c_age) , Parent_030(p_age){
			cout << "Given Child's Age :" << C_Age << endl;
			try{
				if(P_Age < C_Age)
					throw C_Age;
			}
			catch (int x){
                        	cout << "Child's Age can't be greater than Parent's Age\n";
                        }
		}
		void read(){
			Parent_030 :: read();
			cout << "Enter Child's Age:";
			cin >> C_Age;
			try{
				if(P_Age < C_Age)
					throw C_Age;
			}
			catch (int x){
                        	cout << "Child's Age can't be greater than Parent's Age\n";
                        }
		}
		void display(){
			Parent_030 :: display();
			cout << "Child's Age:" << C_Age << endl;
		}
};

int main(){
	
	Child_030 cp(67,-10);
		
	return 0;
}
