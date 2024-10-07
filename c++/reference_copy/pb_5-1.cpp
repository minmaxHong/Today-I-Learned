#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	int getRadius() {
		return radius;
	}
};

void swap(Circle& a, Circle& b) {
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a(2);
	Circle b(3);
	
	cout << 'a' << "\t" << 'b' << '\n';
	cout << a.getRadius() << "\t" << b.getRadius() << "\n\n";
	
	swap(a, b);

	cout << 'a' << "\t" << 'b' << '\n';
	cout << a.getRadius() << "\t" << b.getRadius();

}