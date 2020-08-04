#include<iostream>
using namespace std;

int main(){
	int i,num,rem,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>num;
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	cout<<"sum of digits of "<<num<<" is: "<<sum;
	return 0;
}
