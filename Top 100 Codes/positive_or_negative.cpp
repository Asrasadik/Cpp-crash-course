#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	if(num==0){
		cout<<"0 is neither positive nor negative";
	}
	else{
	(num>0)?cout<<num<<" is a positive number":cout<<num<<" is a negative number";
}
return 0;
}
