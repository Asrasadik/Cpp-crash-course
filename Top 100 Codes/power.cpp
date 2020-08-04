#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	double base,exp,res;
	cout<<"Enter base value: ";
	cin>>base;
	cout<<"Enter exponent value: ";
	cin>>exp;
	res=pow(base,exp);
	cout<<base<<"^"<<exp<<" = ";
	cout<<fixed<<setprecision(2)<<res;
	
	return 0;
}

