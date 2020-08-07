#include<iostream>
using namespace std;

class PrepInsta{
	int x,y;
	public:
		void display(){
			cout<<"The values are x= "<<x<<" and y= "<<y<<endl;
			}
		PrepInsta(int a)
		{
			x=a;
			y=a;
		}
};

int main(){
	
	//Basic parameterised constructor with one parameter
	PrepInsta p(10);
	
	p.display();
	
	//Implicit calling using assignment operator
	//	conversion constructor
	p=100;
	p.display();	
	return 0;
}
