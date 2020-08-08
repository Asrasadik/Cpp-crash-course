#include<iostream>
using namespace std;

class Parent{
	int x;
	public:
		Parent(int i){//first
		x=i;
		cout<<"x value: "<<x<<endl;
			cout<<"Parent constructor is called"<<endl;
		}
		~Parent(){//fourth
			cout<<"Parent destructor is called"<<endl;
		}
};

class Child: public Parent{
	int y;
	public:
		Child(int a):Parent(a)
		{//second
		y=a;
		cout<<"y value: "<<y<<endl;
			cout<<"Child constructor is called"<<endl;
		}
		~Child(){//third
			cout<<"Child destructor is called"<<endl;
		}
};

int main(){
	Child obj(10);/*automatically executes all parent, child, grandparent class
	constructor and destructor becaues of inheritance*/
	
	return 0;
}
