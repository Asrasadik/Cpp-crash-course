#include<iostream>
using namespace std;

int main(){
	int num,i,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	for(i=1;i<=num;i++){
		sum+=i;
	}
	cout<<"Sum of first "<<num<<" numbers is "<<sum;
	return 0;
	
}
