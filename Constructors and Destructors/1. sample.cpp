#include<iostream>
using namespace std;
//constructors should always be in public

class A{
	public:
		A(){
			cout<<"constructor is created"<<endl;
		}
};

int main(){
	cout<<"Before creating object"<<endl;
	A a_obj;
	cout<<"After creating object";
	return 0;
}
