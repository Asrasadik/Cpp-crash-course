#include<iostream>
using namespace std;

class PrepInsta{
	int x;
	double y;
	public:
		void print(){
			cout<<"Noting to print"<<endl;
		}
		void print(int a){
			x=a;
			cout<<"value of x: "<<x<<endl;
		}
		void print(double a){
			y=a;
			cout<<"value of y: "<<y<<endl;
		}
		void print(int a, double b){
			x=a;
			y=b;
			cout<<"value of x: "<<x<<" value of y: "<<y<<endl;
		}
};

int main(){
	PrepInsta obj;
	obj.print();
	obj.print(90);
	obj.print(98.9);
	obj.print(91,5.99);
	return 0;
}
