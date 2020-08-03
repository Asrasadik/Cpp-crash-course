#include<iostream>
using namespace std;

void prime(int num){
	int j,flag=0;
	for(j=2;j<=num/2;j++){
		if(num%j==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<num<<" ";
}

int main(){
	int n1,n2,i;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are:"<<endl;
	if(n1<2)
	n1++;
	for(i=n1;i<=n2;i++)
	prime(i);
	return 0;
}
