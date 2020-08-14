#include<iostream>
#include<string.h>
using namespace std;

class PrepInsta{
	public:
	char String[20];	
	PrepInsta operator +(PrepInsta p2){
		PrepInsta resobj;
		strcat(String,p2.String);
		strcpy(resobj.String,String);
		
		return resobj;
	}
	
	void display(){
		cout<<String;
	}
	
};

int main(){
	char str1[]="Prep";
	char str2[]="Insta";
	
	PrepInsta p1,p2,res;
	strcpy(p1.String,str1);
	strcpy(p2.String,str2);
	res=p1+p2;
	
	res.display();
	
	return 0;
}
