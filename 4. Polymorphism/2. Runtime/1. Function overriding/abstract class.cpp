#include<iostream>
using namespace std;

class Pokemon{
	int height,weight;
	
	virtual void attack()=0;
};
class Pikachu: public Pokemon{
	public:
		void attack(){
			cout<<"Pikachu has given thunderbolt"<<endl;
		}
		
};

int main(){
	//Pokemon p1; this cannot be created in abstract class 
	// Pokemon *p2 this can be created in abstract class
	Pikachu p1;
	p1.attack();
	
	return 0;
}
