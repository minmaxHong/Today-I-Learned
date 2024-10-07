#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "������ ���� radius = " << radius << endl; }
	Circle(int r) { radius = r;  cout << "������ ���� radius = " << radius << endl; }
	~Circle() { cout << "�Ҹ��� ���� radius = " << radius << endl; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle* p;
	while (true) {
		int radius = 0;
		cout << "���� ������ �Է�(�����̸� ����)>>";
		cin >> radius;
		if (radius < 0) {
			break;
		}
		p = new Circle(radius);
		cout << "���� ������ " << p->getArea() << endl;

		delete p;
	}
}