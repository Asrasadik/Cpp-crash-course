#include<iostream>
#include<math.h>
using namespace std;

int order(int n){
	int j=0;
	while(n){
		j++;
		n/=10;
	}
	return j;
}
int rev(int n,int o){
	
	int rem,i=0,rev=0;
	while(i<o){
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
		i++;
	}
	return rev;
}

int main(){
	int num,sq,o;
	cout<<"Enter the number: ";
	cin>>num;
	o=order(num);
	sq=pow(num,2);
	int num1=rev(num,o);
	int sq1=rev(sq,o);
	if(num1==sq1){
		cout<<num<<" is an Automorphic number";
	}
	else
		cout<<num<<" is not an Automorphic number";
	return 0;
}
