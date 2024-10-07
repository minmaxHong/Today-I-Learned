#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};


int main() {
	int cnt = 0;
	int upperThres = 0;
	cout << "���� ���� >> ";
	cin >> cnt;
	
	Circle* circles;
	circles = new Circle[cnt];

	for (int i = 0; i < cnt; ++i) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		int radius;
		cin >> radius;
		(circles + i)->setRadius(radius);

		double area = (circles + i)->getArea();
		if (area > 100) {
			upperThres++;
		}
	}
	cout << "������ 100���� ū ����" << upperThres << "�� �Դϴ�.";
	
	delete[] circles;
}