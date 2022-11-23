//Write a program of two concatenate the two strings using Operator Overloading

#include<iostream>
#include<string.h>
using namespace std;

class String{
	public:
		char str[20];
	public:
		void accept_string(){
			cout<<"\n Enter string :";
			cin>>str;
		}
		void display_string(){
			cout<<"\n concanetanation is :"<<str;
		}
		String operator+(String x){
			String s;
			strcat(str,x.str);
			strcpy(s.str,str);
			return s;
		}
};

int main(){
	String str1,str2,str3;
	
	str1.accept_string();
	str2.accept_string();

//	str1.display_string();
//	str2.display_string();
	
	str3 = str1+str2;
	cout<< "\n ----------------------------------- ";
	str3.display_string();
	
}
