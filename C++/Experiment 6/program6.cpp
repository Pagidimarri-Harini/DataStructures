#include <iostream>
#define pi 3.14
using namespace std;
class Circle{
	public:
		int radius;
	Circle(){
		radius= 10;
	}
	Circle(int r){
		radius = r;
	}
	void area();
	void perimeter();
};

void Circle::area(){
	float area = pi*radius*radius;
	cout << "Radius of the circle is: " << area << endl;
}
void Circle::perimeter(){
	float perimeter = 2*pi*radius;
	cout << "Perimeter of the circle is: " << perimeter << endl;
}


int main(){
	Circle c(5);
	c.area();
	c.perimeter();
	return 0;
}
