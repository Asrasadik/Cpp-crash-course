#include<iostream>
using namespace std;

int main(){
	int num,i,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	int temp=num;
	for(i=1;i<num;i++){
		if(num%i==0)
		sum+=i;
	}
	if(sum==num)
	cout<<temp<<" is a prefect number";
	else
	cout<<temp<<" is not a perfect number";
	return 0;
}
