#include <iostream>
#include <exception>
using namespace std;
class A{
	public:
		float a,b;
	void read(){
		cout << "Enter two numbers a and b" << endl;
		cin >> a >> b;
	}
	void Calculate(){
		try{
			if(b == 0){
				throw b;
			}else{
				cout << "Division of a and b is " << a/b << endl;
			}
		}
		catch(int x){
			cout << "Exception caught : Divide by 0" << endl;
		}
		catch(...){
			cout << "Exception caught : Divide by 0" << endl;
		}
	}
};
int main(){
	A obj;
	obj.read();
	obj.Calculate();
	return 0;

}
