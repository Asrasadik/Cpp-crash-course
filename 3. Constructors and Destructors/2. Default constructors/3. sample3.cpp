#include<iostream>
using namespace std;
//constructor is to initialize the values

class A{
	int i;
	public:
		A();
			int getI(){
			return i;
		}
};

A :: A(){
	i=90;
	cout<<"constructor was called and i value is initilized to "<<i<<endl;
}

int main(){
	A a_obj;
	cout<<"The value of i is: "<<a_obj.getI();
	return 0;
}
