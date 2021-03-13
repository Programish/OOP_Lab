//Q3) Create a class Account which stores account number, customer name and balance. Derive two
//classes   ‘Savings’ and ‘Current’ from ‘Account’ class:  The ‘Savings’ class has a minimum balance of rs 1000.
// The ‘Current’ class has a min balance amount of rs 5000. Include member functions in the appropriate class for
/*
-deposit money
-withdraw (minimum balance should be checked)
-display balance
Display data from each class using virtual function.*/

#include<iostream>
using namespace std;
class Account_030{
	protected:
		int acc_no;
		char name[15];
		float bal,temp;
	public:
		virtual void get_info() = 0;
		virtual void deposit() = 0;
		virtual void withdraw() = 0;
		virtual void display() = 0;
};
class Savings_030:public Account_030{
	public:
		Savings_030(){
			bal = 1000;
		}
		void get_info(){
			cout<<"Enter Account number:";
			cin>>acc_no;
			cout<<"Enter name:";
			cin>>name;
		}
		void deposit(){
			cout<<"Enter amount to be deposited:";
			cin>>temp;
			bal += temp;
		}
		void withdraw(){
			cout<<"Enter amount of withdrawal:";
			cin>>temp;
			if(temp > bal)
				cout<<"Impossible to withdraw"<<endl;
			else if(bal-temp < 1000)
				cout<<"Not possible because of minimum balance"<<endl;
			else
				bal -= temp;
		}
		void display(){
			cout<<"Account balance: "<<bal<<endl;
		}
};
class Current_030:public Account_030{
	public:
		Current_030(){
			bal = 5000;
		}
		void get_info(){
			cout<<"Enter Account number:";
			cin>>acc_no;
			cout<<"Enter name:";
			cin>>name;
		}
		void deposit(){
			cout<<"Enter amount to be deposited:";
			cin>>temp;
			bal += temp;
		}
		void withdraw(){
			cout<<"Enter amount of withdrawal:";
			cin>>temp;
			if(temp > bal)
				cout<<"Impossible to withdraw"<<endl;
			else if(bal-temp < 5000)
				cout<<"Not possible because of minimum balance"<<endl;
			else
				bal -= temp;
		}		
		void display(){
			cout<<"Account balance: "<<bal<<endl;
		}
};
int main(){
	Account_030 *a;
	Savings_030 s;
	Current_030 c;
	a = &s;
	cout<<"Savings-------"<<endl;
	a->get_info();
	a->deposit();
	a->withdraw();
	a->display();
	a = &c;
	cout<<"Current-------"<<endl;
	a->get_info();
	a->deposit();
	a->withdraw();
	a->display();
	return 0;
}



