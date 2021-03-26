// Q4 WAP in C++ to handle the exception for underflow and overflow in case of a stack ADT.
// [Exception type must be class type]

#include <iostream>

using namespace std;

const int Max = 5;

class Stack_030{
	int* stack;
	int top, size;

	public:
		class Overflow{};
		class Underflow{};

		Stack_030(int size = Max) {
			stack = new int[size];
			this->size = size;
			top = -1;
		}
		void push(int n){
			if (top == size - 1)
				throw Overflow();
			stack[++top] = n;
		}
		int pop(){
			if (top < 0)
				throw Underflow();
			return stack[top--];
		}
		~Stack_030(){
			delete[] stack;
		}
};

int main(){
	Stack_030 temp_stack(5);
	try{
		for (int i = 0; i < 8; i++) {
			cout << "PUSH : " << i << endl;
			temp_stack.push(i);
		}
	} 
	catch(Stack_030 :: Overflow){
		cout << "Stack overflow!\n";
	}
	try{
		for(int i = 0; i < 8; i++)
			cout << "POP : " << temp_stack.pop() << endl;
	} 
	catch(Stack_030 :: Underflow){
		cout << "\nStack underflow!\n";
	}
	return 0;
}

