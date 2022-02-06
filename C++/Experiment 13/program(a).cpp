#include <iostream>
#include <exception>
using namespace std;
class A{
	public:
		float a,b;
	void read(){
		cout << "enter two numbers" << endl;
		cin >> a >> b;
	}
	void Calculate(){
		try{
			if(b == 0){
				throw b;
			}else{
				cout << "The division of a and b" << a/b << endl;
			}
		}
		catch(int x){
			cout << "Exception caught : divide by zero" << endl;
		}
	}
			

};
int main(){
	A obj;
	obj.read();
	obj.Calculate();
	return 0;
}

