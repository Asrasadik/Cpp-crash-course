#include<iostream>
using namespace std;

class Demo{
	public:
		int i;
		float f;
		Demo(int val1,float val2){//parameterized constructor
			i=val1;
			f=val2;
		}
};

int main(){
	Demo demo1(100,5.0);//prints as 5 though its 5.0 it doesn't print 5.0000 
						//but in C language it gives 7.000000
	Demo demo2(200,8.9);
	cout<<demo1.i<<" & "<<demo1.f<<endl;
	cout<<demo2.i<<" & "<<demo2.f<<endl;
	return 0;
}
