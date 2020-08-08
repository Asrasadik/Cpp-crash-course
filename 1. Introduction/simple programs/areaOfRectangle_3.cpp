#include<iostream>

using namespace std;

class Rectangle{
	private: 
	int length,breadth;
	public:
		int set(int len, int bre){
			length=len;
			breadth=bre;
		}
		int getLength(){
			return length;
		}
		
		int getBreadth(){
			return breadth;
		}
	int area(){
		return length*breadth;
	}
	
};

int main(){
	Rectangle rectObj;
	rectObj.set(10,20);
	cout<<"Length is "<<rectObj.getLength()<<endl;
	cout<<"Breadth is "<<rectObj.getBreadth()<<endl;
	cout<<"area of rectangle is: "<<rectObj.area();
	return 0;
}
