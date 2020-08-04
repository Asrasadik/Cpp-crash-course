#include<iostream>
using namespace std;

int main(){
	int n1,n2,i,sum=0;
	cout<<"Enter two numbers"<<endl;
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++){
		sum+=i;
	}
	cout<<"Sum of numbers in ("<<n1<<","<<n2<<") range is "<<sum;
	return 0;
}
