#include<iostream>
using namespace std;

int fact(int n){
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}

int main(){
	int num,temp,rem,f,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	temp=num;
	while(num!=0){
		rem=num%10;
		f=fact(rem);
		sum+=f;
		num/=10;
	}
	if(sum==temp)
	cout<<temp<<" is a strong number";
	else
	cout<<temp<<" is not a strong number";
	return 0;
}
