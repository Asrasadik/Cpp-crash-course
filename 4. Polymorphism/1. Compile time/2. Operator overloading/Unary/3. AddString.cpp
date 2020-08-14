#include<iostream>
#include<string.h>
using namespace std;

class AddString{
	public:
		char str1[20],str2[20];
		
		void operator +(){
			cout<<"After concatenation: "<<strcat(str1,str2);
		}
};

int main(){
	AddString s1;
	strcpy(s1.str1,"Prep");
	strcpy(s1.str2,"Insta");
	
	+s1;
	
	return 0;
}
