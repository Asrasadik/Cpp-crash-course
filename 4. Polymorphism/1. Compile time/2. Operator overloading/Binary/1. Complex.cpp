#include<iostream>
using namespace std;
//called by before op and passed by after
class Complex{
	int real,imag;
	public:
		void getData(){
			cout<<"Enter complex number: ";
			cin>>real>>imag;
		}
		Complex operator +(Complex tempobj){//obj2
			cout<<"called by object is of: "<<real<<endl;
			cout<<"passed by object is of: "<<real<<endl;
			Complex resobj;
			resobj.real=real+ tempobj.real; //real is passed by one of object
			resobj.imag=imag+ tempobj.imag;
			
			return resobj;
		}
		void display(){
			if(imag>=0)
			cout<<real<<"+"<<imag<<"j"<<endl;
			else
			cout<<real<<imag<<"j"<<endl;
		}
};

int main(){
	Complex obj1,obj2,result;
	
	obj1.getData();
	obj2.getData();
	result = obj1+obj2;
	
	result.display();
	
	return 0;
}
