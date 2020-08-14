#include<iostream>
using namespace std;

class Add{
	int x,y;
	double m,n;
	public:
		void sum(int a,int b){
			x=a;
			y=b;
			cout<<"sum is: "<<x+y<<endl;
		}
		void sum(double a,double b){
			m=a;
			n=b;
			cout<<"sum is: "<<m+n<<endl;
		}
		void sum(int a,double b){
			x=a;
			m=b;
			cout<<"sum is: "<<x+m<<endl;
		}
};

int main(){
	Add s;
	s.sum(2,4);
	s.sum(2.2,5.1);
	s.sum(3,6.2);
	return 0;
}
