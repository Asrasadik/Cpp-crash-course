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
			/*at the time of parameterised definition I am initializing one value
			either 0 or at max 1 argument non initialize
			PrepInsta(int a); => valid
			PrepInsta(int a=0); => valid
			PrepInsta(int a=0,int b=0)=> valid
			PrepInsta(int a,int b=0);=> valid
			
			PrepInsta(int a=0,int b);=>not valid*/
		PrepInsta(int a,int b)
		{
			x=a;
			y=b;
		}
		/*PrepInsta(int a,int b) this is not valid in 
		if we are using PrepInsta 0bj=100 since constructor needs 2 values*/
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
