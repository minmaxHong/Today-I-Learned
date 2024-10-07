#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "radius: " << radius << "¿ø »ý¼º" << endl;
}


double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut area: " << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza area: " << area;


}