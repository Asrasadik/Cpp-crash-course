#include<iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"Parent constructor is called"<<endl;
		}
		~Parent(){
			cout<<"Parent destructor is called"<<endl;
		}
};

class Child: public Parent{
	public:
		Child(){
			cout<<"Child constructor is called"<<endl;
		}
		~Child(){
			cout<<"Child destructor is called"<<endl;
		}
};

int main(){
	Child obj;/*automatically executes all parent, child, grandparent class
	constructor and destructor becaues of inheritance*/
}
