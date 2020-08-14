#include<iostream>
using namespace std;

class Pokemon{
	int weight, height, type;
	public:
		// here forcing the compiler to not to do static resolution and force late binding at run time
		virtual void attack(){
			cout<<"Pokemon attacked"<<endl;
		}
		// early binding /early binding / compile time 
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
	Pokemon *pokeptr;
	Pikachu pikachu;
	pokeptr = &pikachu;
	
	pokeptr->attack();
	pokeptr->defend();
	
	return 0;
}
