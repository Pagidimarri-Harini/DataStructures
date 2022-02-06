#include<iostream>
#include<string>
using namespace std;
class A {
  private:
    	char a;
	int num;
	public:
	  void read() {
		  cout << "enter the values:";
		  cin >> a >> num;
	  }
	  friend void display(A a1);
};
void display(A a1) {
	cout << a1.a << endl << a1.num << endl;
}
int main() {
	A a1;
	a1.read();
	display(a1);
	return 0;
}
