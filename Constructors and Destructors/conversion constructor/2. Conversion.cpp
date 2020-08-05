#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class PrepInsta{
	int x,y;
	public:
		void display(){
			cout<<"The values are x= "<<x<<" and y= "<<y<<endl;
			}
			//at the time of parameterised definition I am initializing one value
		PrepInsta(int a=0,int b=0)
		{
			x=a;
			y=b;
		}
};

int main(){
	
	//Basic parameterised constructor with one parameter
	//PrepInsta p; --> to check default values
	PrepInsta p(10,20);
	p.display();
	
	//Implicit calling using assignment operator
	//	conversion constructor
	p={100,200};
	p.display();	
	return 0;
}
