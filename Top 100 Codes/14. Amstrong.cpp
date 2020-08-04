#include<iostream>
#include<math.h>
using namespace std;

int order(int num){
	int i=0;
	while(num){
		i++;
		num/=10;
	}
	return i;
}

int main(){
	int n,num,temp,p,r,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	temp=num;
	n=order(num);
	while(num!=0){
		r=num%10;
		p=pow(r,n);
		sum+=p;
		num/=10;
	}
	if(sum==temp)
	cout<<temp<<" is Amstrong number";
	else
	cout<<temp<<" is not an Amstrong number";
	
	return 0;
}

