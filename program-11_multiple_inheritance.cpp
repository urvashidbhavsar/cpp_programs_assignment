#include<iostream>
using namespace std;

class person{
	public:
		
		string per_name
		int age;
		
		void details(){
			cout<<"\n Enter person name : ";
			cin>>per_name;
			
			cout<<"\n Enter person age : ";
			cin>>age;
		}
};

class member_per{
	public:
		int per;
		
		member_per(){
			per = 32;
		}
};

class teacher{
	public:
		int salary;
		
		teacher(){
			salary = 25000;
		}
};

class display_data: public person, public member_per, public teacher{
	public:
	 void display_value(){
	 	cout << "\n Person name is  : "<<per_name;
	 	cout << "\n Person age is : "<<age;
	 	cout << "\n Percentage of members : "<<per;
	 	cout << "\n salary is : "<<salary;
	 }
	
};
int main(){
	display_data d;
	d.details();
	d.display_value();	
}
