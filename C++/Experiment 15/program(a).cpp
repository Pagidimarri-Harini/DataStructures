#include<iostream>
using namespace std;
class u_overloading {
    public:
        int n;
        u_overloading() {
            cout << "enter the value of n:";
            cin >> n;
        }
        void operator ++() {
            n = n + 5;
        }
        void print() {
            cout << "The value of n is " << n;
        }

};
int main() {
    u_overloading obj;
    obj.operator ++();         //++ obj;
    obj.print();
    return 0;
}
