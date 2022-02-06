#include <iostream>
#include <string>
using namespace std;
struct Student{
	string name;
	int rollno;
	int marks;
}s1;
void display(){
	cout << s1.name << endl;
	cout << s1.rollno << endl;
	cout << s1.marks << endl;
}
int main(){
	cout << "Enter name: ";
	cin >> s1.name;
	cout << "Enter rollno";
	cin >>  s1.rollno;
	cout << "Enter marks: ";
	cin >> s1.marks;
	display();
}

