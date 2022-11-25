/* Write a program to swap the two numbers using friend function */

#include<iostream>
using namespace std;

class swapping{
	int temp, a, b;
	public:
		swapping(int a, int b){
			this ->a = a;
			this ->b = b;
		} 
		
	friend void Swap(swapping &s);
};
void Swap(swapping &s){
	cout << "\n before swapping : "<<s.a << " " << s.b;
	s.temp = s.a;
    s.a = s.b;
    s.b = s.temp;
    cout << "\n After Swapping: " << s.a << " " << s.b;
	
}

int main(){
	swapping s(4,7);
	Swap (s);
	return 0;
	
}
