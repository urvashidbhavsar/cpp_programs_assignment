#include<iostream>
using namespace std;

class fly{
	public:
	 void plane(){
	 	cout << "plane is fly"<<endl;
	 }
};
class bird : public fly{
	public:
		void flying(){
			cout<<"bird is also flying"<<endl;
		}
};

int main(){
	bird b;
	b.plane();
	b.flying();
}
