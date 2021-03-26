//Q3 WAP in C++ to handle the exception for array-out-of-bound.
//[Exception type must be class type]

#include <iostream>
#define max 10
using namespace std;

class Array_030{
	int arr[max];
	public:
		class Range{};
		int & operator [](int i){
			if(i < 0 || i >= max)
				throw Range();
			else
				return arr[i];
		}
};

int main(){
	Array_030 a;
	try{
		a[1] = 10;
		a[15] = 60;
	}
	catch(Array_030 :: Range){
		cout << "Out of Range----\n";
	}
	return 0;
}
