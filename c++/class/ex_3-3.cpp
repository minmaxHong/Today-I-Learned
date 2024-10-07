#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름: " << radius << "\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름: " << radius << "\n";
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