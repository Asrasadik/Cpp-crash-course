#include<iostream>
using namespace std;

int main(){
	int base0=0,base1=1,num,sum=0,i;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Fibonacci series is: ";
	cout<<base0<<" "<<base1<<" ";
	for(i=2;i<num;i++){ //check point -> i=2
		sum=base0+base1;
		cout<<sum<<" ";
		base0=base1;
		base1=sum;
	}
	return 0;
	
}

