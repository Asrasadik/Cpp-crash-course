#include<iostream>
using namespace std;

class PrepInsta{
	int x=0,y=0,z=0;
	public:
		void print(){
			cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
		}
		void operator ++(){ //overloading operator
			x++;
			y++;
			z++;
		}
};
int main(){
	PrepInsta p1;
	cout<<"Before overloading:"<<endl;
	p1.print();
	cout<<"After overloading"<<endl;
	++p1;
	p1.print();
	
	return 0;
}
