#include <iostream>  
#include <string.h>  
using namespace std;  
class Employee{  
	public:  
 	int e_no;  
 	string e_name;  
 	int basic;  
 	int da;  
 	int it;  
 	int net_sal;  
 	void read(){  
 		cout<<"Enter Employee number,name,basic salary,DA,IT:";  
 		cin>>e_no>>e_name>>basic>>da>>it;  
 	}  
 	void cal_net_sal(){  
 		net_sal = basic+da-it;  
 	}  
 	void display(){  
 		cout<<"Employee number:"<<e_no<<endl;  
 		cout<<"Employee name:"<<e_name<<endl;  
 		cout<<"Basic Salary:"<<basic<<endl;  
 		cout<<"DA:"<<da<<endl;  
 		cout<<"IT:"<<it<<endl;  
 		cout<<"Net Salary:"<<net_sal<<endl;  
 	}  
};  
int main(){  
 	Employee e;  
 	e.read();  
 	e.cal_net_sal();  
 	e.display();  
 	return 0;  
}  
