#include<iostream>
#include<string>
using namespace std;
int main() {
	int *ptr;
	ptr = new int;
	cout << "size of the pointer ptr" << sizeof(ptr) << endl;
	*ptr = 100;
	cout << "value of ptr" << *ptr << endl;
	return 0;
}
