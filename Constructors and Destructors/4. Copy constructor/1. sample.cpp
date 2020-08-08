#include<iostream>
using namespace std;

class PrepInsta{
	private:
		int x,y;
	public:
		PrepInsta(){
			cout<<"Default constructor is called"<<endl;
		}
		//parameterised constructor
		PrepInsta(int x1, int y1){
			x=x1;
			y=y1;
			cout<<"parameterised constructor is called"<<endl;
		}
		//copy constructor
		PrepInsta(const PrepInsta &p1){
			x=p1.x;
			y=p1.y;
			cout<<"copy constructor is called"<<endl;
		}
		int getX(){
			return x;
		}
		int gety(){
			return y;
		}
};

int main(){
	//parameterised constructor
	PrepInsta p1(10,20);
	
	//copy constructor
	PrepInsta p2(p1);
	
	//another way to call copy constructor 
	
	PrepInsta p3=p1;
	
	PrepInsta p4;
	p4=p1;/*it is like assignment values are assigned but copy constructor is not called and*/
	
	
	cout<<"p1.x= "<<p1.getX()<<", p1.y= "<<p1.gety()<<endl;
	cout<<"p2.x= "<<p2.getX()<<", p2.y= "<<p2.gety()<<endl;
	cout<<"p3.x= "<<p3.getX()<<", p3.y= "<<p3.gety()<<endl;
	cout<<"p4.x= "<<p4.getX()<<", p4.y= "<<p4.gety()<<endl;
}
