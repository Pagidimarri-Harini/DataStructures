#include <iostream>  
using namespace std;  
#include <string.h>  
class Employee{  
	public:  
	int e_id;  
	string name;  
	float bs;  
	float da;  
	float it;  
	float net_sal;  
	float gross;  
	void read(){  

		cout<<"Enter Employee id,name,basic salary:";  
 		cin>>e_id>>name>>bs;  
	}  
	void cal_da(){  
 		da = 0.52 * bs;  
	}  
	void cal_gross(){  
 		gross = bs + da;  
	}  
	void cal_it(){  
 		it = 0.30 * gross;  
	}  
	void cal_netsal(){  
 		net_sal = gross - it;  
	}  
	void display(){  
 		cout<<"Employee id:"<<e_id<<endl;  
 		cout<<"Employee name:"<<name<<endl;  
 		cout<<"Basic Salary:"<<bs<<endl;  
 		cout<<"DA:"<<da<<endl;  
 		cout<<"IT:"<<it<<endl;  
 		cout<<"Gross Salary:"<<gross<<endl;   cout<<"Net Salary:"<<net_sal<<endl;
	}  
};  
int main(){  
	Employee e[10];  
	int i;  
	for(i=0;i<10;i++){  
 		e[i].read();  
 		e[i].cal_da();  
 		e[i].cal_gross();  
 		e[i].cal_it();  
 		e[i].cal_netsal();  
 		e[i].display();  
	}  
	return 0;  
} 
