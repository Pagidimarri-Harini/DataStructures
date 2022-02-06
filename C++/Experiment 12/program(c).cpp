#include <iostream>
using namespace std;
class A{
	public:
		int x = 5;
	virtual void display(){
		cout << x;
	}
};
class B:public A{
	public:
	int y = 10;
	void display(){
		cout << y;
	}
};
int main(){
	A *a;
	B b;
	a = &b;
	a->display();
	return 0;
}
