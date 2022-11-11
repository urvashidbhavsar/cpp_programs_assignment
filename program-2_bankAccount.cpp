#include<iostream>
using namespace std;

class BankDetails{
	public:
		int acc_no,acc_bal,dep_amt,wid_amt;
		string depo_name,acc_type;	
};


int main(){
	BankDetails bnk;
	bnk.acc_no = 12345;
	bnk.acc_bal = 25000;
	bnk.depo_name = "abc";
	bnk.acc_type = "savings";
	
	cout << "=============== Account Information ====================" << "\n";
	cout << "Account No : "<< bnk.acc_no << "\n";
	cout << "Depositer Name : " << bnk.depo_name << "\n";
	cout << "Account Balance : "<<bnk.acc_bal << "\n";
	cout << "Account type : "<< bnk.acc_type << "\n";
	
	cout << "==================================================" << "\n";
	cout << "Deposited Amount :";
	cin >> bnk.dep_amt;
	
	cout << "==================================================" << "\n";
	bnk.acc_bal = bnk.acc_bal + bnk.dep_amt;
	cout << "Total amount is "<< bnk.acc_bal << "\n";
	
	cout << "==================================================" << "\n";
	cout << "Widthdraw Amount :";
	cin >> bnk.wid_amt;
	
	cout << "==================================================" << "\n";
	bnk.acc_bal = bnk.acc_bal - bnk.wid_amt;
	cout << "Total amount is "<< bnk.acc_bal;
}
