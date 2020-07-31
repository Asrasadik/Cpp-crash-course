#include<iostream>
#include<string.h>

using namespace std;
static int i=1;
class Student{
	private: 
	int rollNo;
	char name[20];
	public:
		void setRollNo(){
			rollNo=i++;
		}
		int getRollNo(){
			return rollNo;
		}
		void setname(char *nme){ //void setname(char nme[])
			strcpy(name,nme);
		}
		char *getname(){
			return name;
		}
};

int main(){
	Student s1,s2;
	char temp[20];
	s1.setRollNo();
	cin>>temp;
	s1.setname(temp);
	s2.setRollNo();
	cin>>temp;
	s2.setname(temp);
	cout<<"The Roll No of "<<s1.getname()<<" is "<<s1.getRollNo()<<endl;
	cout<<"The Roll No of "<<s2.getname()<<" is "<<s2.getname()<<s2.getRollNo();
	
	return 0;
}
