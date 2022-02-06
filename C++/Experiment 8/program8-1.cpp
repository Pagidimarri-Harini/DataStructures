#include<iostream>
#include<string>
using namespace std;
class A {
	private:
		char a;
		int num;
	public:
		friend class x;
		void read() {
			cout << "enter the values:";
			cin >> a >> num;
		}
		
};
class x {
	public:
		void display(A b) {
			cout << b.a << endl << b.num << endl;
		}
};
int main() {
	A a1;
	x x1;
	x1.display(a1);
	return 0;
}
