#include<iostream>
#include<string.h>
using namespace std;

class Student{
	int feet=0,inches=0;//feet[0,infinity] inches[0,11]
	public:
		void getHeight(int f,int i){
			if(f>=0 && i>=0 && i<12){
				feet=f;
				inches=i;
			}
			else
			cout<<"invalid height default (0,0) is taken"<<endl;
		}
		
		bool operator >(Student s2){
			if(feet>s2.feet) //s1>s2
			return true;
			if(feet==s2.feet && inches==s2.inches) //s1==s2
			return true;
			else
			return false;
		}
		
};

int main(){
	Student s1,s2;
	s1.getHeight(5,8);
	s2.getHeight(6,9);
	
	if(s1>s2){//operator overloading
		cout<<"Student 1 is greater"<<endl;
	}
	else if(s2>s1)
	cout<<"Student 2 is greater"<<endl;
	else
	cout<<"Same height"<<endl;
	
	
}
