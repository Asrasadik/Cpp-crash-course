#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers"<<endl;
	cin>>n1>>n2>>n3;
	if(n1>n2 && n1>n3)
		cout<<n1 <<" is greater";
	else if(n2>n3 && n2>n1)
		cout<<n2 <<" is greater";
	else
		cout<<n3<<" is greater";
	return 0;
}
