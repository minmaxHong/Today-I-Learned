#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
	Point();
	Point(int a, int b);
	void show();
};

void Point::show() {
	cout << "x: " << x << " y: " << y << "\n";
}

Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }

int main() {
	Point origin;
	Point target(10, 20);
	
	origin.show();
	target.show();

}
