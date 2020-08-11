#include<iostream>
using namespace std;

class Complex{
	int real,imag;
	public:
		void print(){
			if(imag>0)
			cout<<real<<"+"<<imag<<"j"<<endl;
			else
			cout<<real<<imag<<"j"<<endl;
		}
		void operator ++(){ //overloading operator
			real=++real;
			imag= ++imag;
		}
		void getData(){
			cout<<"enter real and imaginary number: "<<endl;
			cin>>real>>imag;
		}
		
};
int main(){
	Complex c1;
	c1.getData();
	cout<<"Before:"<<endl;
	c1.print();
	cout<<"After:"<<endl;
	++c1;
	c1.print();
	
	return 0;
}
