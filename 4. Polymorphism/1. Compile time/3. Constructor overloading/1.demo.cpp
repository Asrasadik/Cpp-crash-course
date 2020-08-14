#include<iostream>
using namespace std;

class Demo{
	int i,j;
	public:
		Demo(){
			i=0;
			j=0;
		}
		Demo(int x){
			i=x;
			j=0;
		}
		Demo(int x,int y){
			i=x;
			j=y;
		}
		void display(){
			cout<<"i: "<<i<<" j: "<<j<<endl;
		}
};

int main(){
	Demo d1(2);
	Demo d2(3,4);
	Demo d3(5);
	Demo d4;
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	
	return 0;
}
