#include<iostream>
using namespace std;

int reverse(int num){
	int rev=0,rem;
	while(num!=0){
		rem=num%10;
		rev=(rev*10)+rem;
		num/=10;
	}
	return rev;
}

int main(){
	int i,n,rem;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(reverse(n)==n)
	cout<<n<<" is a palindrome";
	else
	cout<<n<<" is not a palindrome";
	
	return 0;
}
