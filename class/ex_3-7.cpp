#include <iostream>
using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "radius: " << radius << "원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

}