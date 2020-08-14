#include<iostream>
#include<string.h>
using namespace std;

class AddString{
	char string1[20],string2[20];
	public:
		
		
		void operator +(){
			cout<<"After concatenation: "<<strcat(string1,string2);
		}
		
		AddString(char* str1, char* str2){ //AddString(char str1[], char str2[])
			strcpy(string1,str1);
			strcpy(string2,str2);
		}
};

int main(){
	char str1[]="Prep";
	char str2[]="Insta";
		AddString s1(str1,str2);
	
	+s1;
	return 0;
}
