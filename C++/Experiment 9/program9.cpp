#include <iostream>
using namespace std;
class A{
	public:
		int a;
		A(){
			a = 10;
			cout << "Constructor created";
		}
		void display(){
			cout << a << endl;
		}
		~A(){
			cout << "destructor created";
		}
};
int main(){
	A obj;
	obj.display();
	return 0;
}
