#include<iostream>
using namespace std;
class bankaccount {
	double balance;
	public:
		bankaccount(double b) {
			balance=b;
		}
		friend class accountmanager;
};
class accountmanager {
public:
	void display(bankaccount a) {
		cout<<"balance"<<a.balance<<endl;
	}
	double addition(double amount, bankaccount a) {
		return a.balance+amount;
	}
	double deduct(double amount, bankaccount a) {
		return a.balance-amount;
	}
};
int main () {
	bankaccount ba(25000);
	accountmanager am;
	double x;
	am.display(ba);
	cout<<"enter amount: "<<endl;
	cin>>x;
	cout<<"added amount is: "<<am.addition(x,ba)<<endl;
	cout<<"added amount is: "<<am.deduct(x,ba)<<endl;
	return  0;
}
	
	
	
	
	


