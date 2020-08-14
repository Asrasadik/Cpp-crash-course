#include<iostream>
using namespace std;

class Pokemon{
	public:
		void attack(){
			cout<<"Pokemon attacked"<<endl;
		}
		void defend(){
			cout<<"Pokemon defended"<<endl;
		}
};
class Pikachu: public Pokemon{
	public:
		void attack(){
			cout<<"Pikachu has given thunderbolt"<<endl;
		}
		void defend(){
			cout<<"Pikachu has ran"<<endl;
		}
};

int main(){
	Pikachu p1;
	// child class always gives priyority for its functions
	p1.attack();
	p1.defend();
	
	return 0;
}
