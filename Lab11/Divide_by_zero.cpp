//Q2 WAP in C++ to handle the exception fr divide-by-zero error.
//[Exception type must be class type]

#include <iostream>

using namespace std;

class Number_030{
	int num;
	public:
		void read(){
			cin >> num;
		}
		class Divide{};
		void div(Number_030 num2){
			if(num2.num == 0)
				throw Divide();
			else{
				int result = num / num2.num;
				cout << result;
			}
		}
};

int main(){
	Number_030 num1,num2;
	cout << "Enter numerator---->";
	num1.read();
	cout << "Enter denominator-->";
	num2.read();
	try{
		num1.div(num2);
	}
	catch(Number_030 :: Divide){
		cout << "Divide by-zero error\n";
	}
	return 0;
}
