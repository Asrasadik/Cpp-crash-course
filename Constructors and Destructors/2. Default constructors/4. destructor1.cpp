#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"Constructor was called"<<endl;
		}
		~A(){
			cout<<"Destructor was called"<<endl;
		}
};

int main(){
	A a1;//constructor for a1 is created
	cout<<"Object 1 is created"<<endl;
	int x=1;
	if(x){
		cout<<"Entering of new block"<<endl;
		A a2;//constructor for a2 is created
		cout<<"Object 2 is created"<<endl;
	}//destructor for a2
	cout<<"left the block"<<endl;
	
	return 0;
}//destructor for a1
