#include<iostream>
using namespace std;

class sq_res{
	public:	
		int num, res;
			void input_val(){
				cout<< "enter number : ";
				cin>>num;
			}	
};
class cube_res: public sq_res{
	public:
		void sq_disp(){
				res = num*num;
				cout <<"square is : "<<res<<endl;
			}
		void cube_disp(){
			res = num*num*num;
			cout<<"cube is :"<<res<<endl;
		}
};

int main(){
	cube_res cr;
	cr.input_val();
	cr.sq_disp();
	cr.cube_disp();
}
