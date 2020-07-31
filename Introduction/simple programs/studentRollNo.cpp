#include<iostream>

using namespace std;

class Student{
	private: 
	int rollNo;
	public:
		int setRollNo(int r){
			rollNo=r;
		}
		int getRollNo(){
			return rollNo;
		}
	
};

int main(){
	Student s1,s2;
	s1.setRollNo(1);
	s2.setRollNo(2);
	cout<<"The Roll No of S1 is: "<<s1.getRollNo()<<endl;
	cout<<"The Roll No of S2 is: "<<s2.getRollNo();
	
	return 0;
}
