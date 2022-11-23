#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void accept(){
			cout<<"Enter any number : ";
			cin>>a;
		}
		void display(){
			cout<<"value is : "<<a<<endl;
		}
};
class B:public A{
	public:
		int b;
		void accept_2(){
			cout<<"Enter any number : ";
			cin>>b;
		}
		void display_2(){
			cout<<"value is : "<<b<<endl;
		}
};
int main(){
	B b;
	b.accept();
	b.display();
	b.accept_2();
	b.display_2();
}
