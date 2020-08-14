#include<iostream>
using namespace std;

class Grandparent{
	public:
		void print(){
			cout<<"Pichu pichu"<<endl;
		}
};
class Father: virtual public Grandparent{
	//do nothing
};
class Mother: virtual public Grandparent{
	//do nothing
};
class Child: public Father, public Mother{
	//do nothing
};

int main(){
	Child c1;
	c1.print();/* this gives error because there are two instances for function with same name and signature(arguments that it is accepting and returning)
	there is an ambiguity that wether to inherit from
	father class or mother class so this can be solved using virtual base class*/
	return 0;
	
}
