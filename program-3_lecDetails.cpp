#include<iostream>
using namespace std;

class lecture_details{
	public:
		string lec_name,sub_name,course;
		int no_of_lec;
		void inputval(){
			cout<< "lecturer name : ";
			cin>>lec_name;
			
			cout<< "subject name : ";
			cin>>sub_name;
			
			cout<< "course name : ";
			cin>>course;
			
			cout<< "No of lectures :";
			cin>>no_of_lec;
		}
};
class disp_details : public	lecture_details{
	public:
		void display(){
			cout<< "=========================================" <<endl;
			cout<< "name of lecturer : "<<lec_name<<endl;
			cout<< "name of Subject : "<<sub_name<<endl;
			cout<< "name of course : "<<course<<endl;
			cout<< "no of lecturs : "<<no_of_lec<<endl;
		}
	
};

int main(){
	disp_details disp;
	disp.inputval();
	disp.display();
}
