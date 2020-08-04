#include<iostream>
using namespace std;

class Shape{
	public: 
	int length,breadth;
};

class Rectangle: public Shape{
	public:
	int area(){
		return length*breadth;
	}
};

int main(){
	Rectangle rect;
	rect.length=10;
	rect.breadth=20;
	
	cout<<"Area of rectangle is: "<<rect.area();
	return 0;
}
