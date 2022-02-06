#include <iostream>
using namespace std;
class A{
	public:
	int a,b;
	virtual void add() = 0;
	void read(){
		cout << "Enter two integers ";
		cin >> a >> b;
	}
};
class B: public A{
	public:
		void add(){
			cout << a+b << endl;
		}
};
int main(){
	B b;
	b.read();
	b.add();
	return 0;
}

