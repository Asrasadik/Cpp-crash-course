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

void amstrong(int num,int n){
	int sum=0,r,p,temp=num;
	while(num!=0){
		r=num%10;
		p=pow(r,n);
		sum+=p;
		num/=10;
	}
	if(sum==temp)
	cout<<temp<<"\t";
}

int main(){
	int n,n1,n2,i;
	cout<<"Enter the range: ";
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++){
		n=order(i);
		amstrong(i,n);
	}
	
	return 0;
}

