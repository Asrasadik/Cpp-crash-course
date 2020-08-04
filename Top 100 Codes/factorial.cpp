#include<iostream>
using namespace std;

int fact(int num){
	if(num==1)
	return num;
	else
	return num*fact(num-1);
}

int main(){
	int num,f;
	cout<<"Enter the number: ";
	cin>>num;
	f=fact(num);
	cout<<"Factorial of "<<num<<" is "<<f;
}
