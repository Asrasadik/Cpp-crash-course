#include<iostream>

using namespace std;

class Rectangle{
	public: 
	int length,breadth;
	
	int area(){
		return length*breadth;
	}
	
};

int main(){
	Rectangle rectObj;
	cout<<"Enter length and breadth of rectangle:"<<endl;
	cin>>rectObj.length>>rectObj.breadth;
	cout<<"area of rectangle is: "<<rectObj.area();
	return 0;
}
