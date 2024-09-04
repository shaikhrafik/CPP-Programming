#include<iostream>
using namespace std;

class BankAccount{
	
	int acc_no;
	string name;
	double balance;
	
	public:
		BankAccount(){
			acc_no = 1234;
			name ="Rafik";
			balance = 10000.00;
		}
		BankAccount(int acc_no,string name, double balance){
			this->acc_no = acc_no;
			this->name = name;
			this->balance = balance;
		}
	
		
		void Deposit(double d_amt){
			
			balance = balance + d_amt;
			
			cout<<"Amount After Deposit:"<<balance<<endl;
		}
		
		void Withdraw(double w_amt){
			
			balance = balance - w_amt;
			
			cout<<"Amount After Withdrawal:"<<balance<<endl;
		}
};

int main()
{
	BankAccount acc1;
	acc1.Deposit(1000.00);
	acc1.Withdraw(2000.00);
}
