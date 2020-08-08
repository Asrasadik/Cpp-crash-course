#include<iostream>
using namespace std;

class A{
	public: 
	int x;
	
	protected:
		int y;
		
	private:
		int z;
		
		//x,y and z are accessible inside the class
};

class B: public A{
	// x is inherited stays public in child
	// y is inherited stays protected in child
	// z is not inherited and not accessible since it is private in parent
};

class C: protected A{
	//x is inherited but as protected in child
	// y is inherited stays as protected in child
	// z is not inherited and not accessible since it is private in parent
};

class D: private A{
	//x is inherited but as private in child
	//y is inherited but as private in child
	// z is not inherited and not accessible since it is private in parent
};
class E: private D{
	//nothing gets inherited 
};
class F: private C{// if protected C then x and y is inherited as protected
	// x and y is inherited as private 
};
int main(){
	//x is accessible 
	//y is not accessible 
	//z is not accessible
	
	A a;
	B b;
	C c;
	D d;
	
	a.x;// works as x is public
	a.y;// doesn't work as y is protected
	a.z;// doesen't work as z is private
	
	b.x;// work as x is public in class B
	b.y;// doesn't work as y is protected in class B
	b.z;// doesn't work as z is not inherited
	
	c.x;//doesn't work as x is protected in class C
	c.y;//doesn't work as y is protected in class C
	c.z;//doesn't work as z is not inherited
	
	d.x;//doesn't work as x is private in class D
	d.y;//doesn't work as y is private in class D
	d.z;//doesn't work as z is not inherited
	
	return 0;
}

