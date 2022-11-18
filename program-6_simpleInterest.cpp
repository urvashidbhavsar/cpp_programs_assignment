#include<iostream>
using namespace std;

class Interest{
	public:
		int prin_amt, year;
		float rate,interest;
		Interest(){
			cout<< "enter principle amount : ";
			cin>>prin_amt;
			
			cout<< "enter year : ";
			cin>>year;
			
			cout<< "enter rate : ";
			cin>>rate;
			
			interest = prin_amt*year*rate/100;
			
			cout<< "Result : "<<interest<<endl;
		}
};

int main(){
	Interest();
}
