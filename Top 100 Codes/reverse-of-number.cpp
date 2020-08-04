#include<iostream>
using namespace std;

int main(){
	int i,num,rem;
	cout<<"Enter the number"<<endl;
	cin>>num;
	cout<<"Reverse of "<<num<<" is :";
	while(num!=0){
		rem=num%10;
		cout<<rem;
		num=num/10;
	}
	return 0;
}
