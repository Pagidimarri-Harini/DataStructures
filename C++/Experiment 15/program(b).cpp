#include<iostream>
using namespace std;
class b_overloading {
    public:
        int a, b, c;
        b_overloading() {
            cout << "enter the value of a and b:";
            cin >> a >> b;
        }
        void operator +() {
            c = a * b;
        }
        void print() {
            cout << c;
        }
};
int main() {
    b_overloading obj;
    obj.operator +();
    obj.print();
    return 0;
}
