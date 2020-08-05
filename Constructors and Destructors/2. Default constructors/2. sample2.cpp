#include<iostream>
using namespace std;
//constructor is to initialize the values

class A{
	int i;
	public:
		A(){
			i=10;
			cout<<"constructor was called"<<endl;
		}
		int getI(){
			return i;
		}
};

int main(){
	A a_obj;
	cout<<"The value of i is: "<<a_obj.getI();
	return 0;
}
