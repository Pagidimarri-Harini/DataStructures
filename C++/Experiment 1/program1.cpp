#include<iostream>
#include<string>
using namespace std;
class student {
	public:
		char name[10];
		int roll_no;
		char grade;
		void read() {
			cout << "enter the details of a student:";
			cin >> name >> roll_no >> grade;
		}
		void display() {
			cout << name << endl << roll_no << endl << grade << endl;
		}
};
int main() {
	student s1[3];
	for(int i = 0; i < 3; i++) {
		s1[i].read();
	}
	for(int i = 0; i < 3; i++) {
		s1[i].display();
	}
	return 0;
	
}

