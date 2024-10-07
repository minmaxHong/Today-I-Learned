#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "积己磊 角青 radius = " << radius << endl; }
	Circle(int r) { radius = r;  cout << "积己磊 角青 radius = " << radius << endl;}
	~Circle() { cout << "家戈磊 角青 radius = " << radius << endl; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;
}