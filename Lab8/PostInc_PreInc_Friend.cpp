//WAP to demonstrate Post and pre increment operators using operator function as well as friend function.

#include <iostream>
using namespace std;

class Number {
    int n;
    public:
    	Number(int num):n(num){}

    	Number operator ++ (void) { // preincrement
        	return Number(++n);
    	}

    	friend Number operator ++ (Number&, int);

    	void display(void) {
        	cout << n << endl;
    	}
};

Number operator ++ (Number& num, int) {  // post increment
    return Number(num.n++);
}

int main() {
	Number n1(100),n2(10),temp(0);
	cout<<"Initial value of 1st object:";
	n1.display();
	cout<<"Initial value of 2nd object:";
	n2.display();
	temp=++n1;
	cout<<"1st object passed to another object after preincrement:";
	temp.display();
	cout<<"1st object after preincrement:";
	n1.display();
	temp=n2++;
	cout<<"2nd object passed to another object after postincrement:";
	temp.display();
	cout<<"2nd object after postincrement:";
	n2.display();
    return 0;
}



