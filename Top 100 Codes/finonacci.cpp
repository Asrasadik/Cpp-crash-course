#include<iostream>
using namespace std;

int main(){
	int base0=0,base1=1,num,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<base0<<" "<<base1<<" ";
	for(i=0;i<=num;i++){
		sum=base0+base1;
		cout<<sum<<" ";
		base0=base1;
		base1=sum;
	}
	return 0;
	
}

