#include<iostream>
using namespace std;

class base{
	public:
	int a;
	base(){
		a = 10;
	}
	void display1(){
		cout<<"a = "<<a<<endl;
	}
};

class derived1:public base{
	public:
	int b;
	derived1(){
		b = 20;
	}
	void display2(){
		cout<<"b = "<<b<<endl;
	}
};

class derived2:public derived1{
	public:
	int c;
	derived2(){
		c = 30;
	}
	void display3(){
		cout<<"c = "<<c<<endl;
	}
};

int main(){
	derived2 obj;
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}

