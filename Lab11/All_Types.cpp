/* Q1 Write a program in C++ to illustrate the following:
   -> General flow of try-catch block
   -> Use of generalized exception handler
   -> Re-throwing exceptions
   -> Specifying Exceptions
   -> Exception type as primary type and user defined type
   -> Life time of an object within a try block
   -> A function caller handling the exception
   -> Nested try blocks
   -> Multiple catch and catch all
*/

#include <iostream>

class UserDefinedException{};

using namespace std;

class Test_030{
	void display(){
		cout << "Inside Test\n";
	}
};

void throwException_030(){
	throw UserDefinedException_030();
}

int main(){
	try{
		try{
			Test_030 t();  // Object created inside of `try { }' block
			throwException_030();
			cout << "This statement is never reached!\n";
		} 
		catch(int e){
			cout << "Int Exception caught!\n";
			cout << "Rethrowing...\n";
			throw e;
		} 
		catch(UserDefinedException_030 e){
			//t.display();  // Error: t is not accessible outside of its scope
			cout << "UserDefinedException caught!\n";
			cout << "Rethrowing...\n";
			throw e;
		}
	} 
	catch(...){
		cout << "Generalized exception caught!\n";
	}

	return 0;
}
