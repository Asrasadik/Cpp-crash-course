#include<iostream>
using namespace std;

int main(){
	int num,i,flag=0;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	if(num==2){
		flag=0;
	}
	else{
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
}
	if(flag==1)
	cout<<num<<" is a prime number";
	else
	cout<<num<<" is not a prime number";
	return 0;
}
