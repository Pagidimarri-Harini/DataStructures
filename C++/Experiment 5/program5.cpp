#include<iostream>  
using namespace std;  
#include<string.h>  
class Student{  
	string name;  
 	int rno;  
 	public:  
 		void read(){  
 			cout<<"Enter name and roll no:";  
 			cin>>name>>rno;  
 		}  
 		void display(){  
 			cout<<"Name:"<<name<<endl;  
 			cout<<"Roll no:"<<rno<<endl;  
 		}  
};  
int main(){  
 	Student s;  
 	Student *ptr;  
 	ptr = &s;  
 	(*ptr).read();  
 	(*ptr).display();  
 	return 0;  
}
