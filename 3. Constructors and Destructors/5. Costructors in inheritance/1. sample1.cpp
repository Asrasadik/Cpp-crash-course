#include<iostream>
using namespace std;

class Parent{
	public:
		Parent(){//first
			cout<<"Parent constructor is called"<<endl;
		}
		~Parent(){//fourth
			cout<<"Parent destructor is called"<<endl;
		}
};

class Child: public Parent{
	public:
		Child(){//second
			cout<<"Child constructor is called"<<endl;
		}
		~Child(){//third
			cout<<"Child destructor is called"<<endl;
		}
};

int main(){
	Child obj;/*automatically executes all parent, child, grandparent class
	constructor and destructor becaues of inheritance*/
	
	return 0;
}
