#include<iostream>
using namespace std;

class Pokemon{
	int height,weight;
	
};// this is also an abstract class because it has no implementation except variable declaration
class Pikachu: public Pokemon{
	public:
		void attack(){
			cout<<"Pikachu has given thunderbolt"<<endl;
		}
		
};

int main(){
	//Pokemon p1; this cannot be created in abstract class
	Pikachu p1;
	p1.attack();
	
	return 0;
}
