/* 	Assume that a bank maintains two kinds of accounts for customer, one called  as saving account and other as 
	current accounts provides Simple interest and withdraw facilities but no Cheque book facility. 
	
	a) The current account provides Cheque book facility but no interest. 
	b) Current account holders should maintain a minimum balance and if the balance falls below this level 
		a service charges is imposed.
*/

#include<iostream>
using namespace std;

class account{
	public :
		string cust_name;
		int acc_no;
		double balance=25000;
		double dep_amt,withdw;
	
	public:
		void details(){
			cout << "\n Enter Account holder name : ";
			cin >> cust_name;
		}	
	public:
		void deposit(){
			cout << "\n Deposited amount : ";
			cin >> dep_amt;
		}
	public:
		void withdraw(){
			cout << "\n Withdraw amount : ";
			cin >> withdw;
		}
	public:
		void updateBal(){
			balance = balance + dep_amt;
			cout << "\n After Depositing amount : "<<balance;
			
			balance = balance - withdw;
			cout << "\n After Depositing amount : "<<balance;
		}			
	public:
		void display(){
			cout << "\n Holder name is : "<<cust_name;
		}
};
class savings: public account{
	public :
		double check_amt;
	public:
		void issue_cheque(){
			cout << "\n issue cheque of amount : ";	
			cin >> check_amt;
		}
		
	public:
		 void check_bal(){
		 	balance = balance + check_amt;
		 	cout<< "\n After deposit Check amount is : "<<balance;
			
		}
		
//	public:
//		 void impose_penalty(){
//			
//		}
};
class current : public account{
	public :
		double interest;
		int r = 5;
		int noy = 4;
	
	public:
		 void compute_interest(){
			interest = balance* r * noy/100;
			cout << "\n Interest amount is : "<<interest;
		}
		
	public:
		 void deposite_interest(){
			balance = balance + interest;
			cout<<"\n Total balance is : "<<balance;
		}
	
};

int main(){
	int n;
	
	account ac;
	ac.details();
	ac.deposit();
	ac.display();
	ac.updateBal();
	
		savings sv;
		current cr;
	cout<<"\n choose your account :-- (1) savings (2) current -- type number 1 or 2: ";
	cin>>n;
	
	
	switch(n){
		case 1:
			sv.issue_cheque();
			sv.check_bal();
			break;
			
		case 2:
			cr.compute_interest();
			cr.deposite_interest();
			break;
			
		default:
			cout << "you should select only savings and current";
			break;
	}
}
