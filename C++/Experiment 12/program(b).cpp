#include <iostream>
using namespace std;
class Add{
	public:
		int a;
		int b;
		int c;
	void read(){
		cout << "Enter two integers: ";
		cin >> a >> b;
	}
	void Addition(){
		c =  a + b;
	}
	void display(){
		cout << c << endl;
	}
};


class Sub: public Add{
	public:
		int d;
	void Subtract(){
		d = a-b;
	}
	void display(){
		cout << d << endl;
		cout << c << endl;
	}
};
int main(){
	Sub S;
	S.read();
	S.Addition();
	S.Subtract();
	S.display();

	return 0;
}
