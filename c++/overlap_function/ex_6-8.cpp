#include <iostream>
using namespace std;

class Circle {
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1) {
		radius = r;
		numOfCircles++;
	}
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};

int Circle::numOfCircles = 0;

int main() {
	Circle* p = new Circle[10];
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << "\n";

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << "\n";

	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << "\n";

	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << "\n";

}