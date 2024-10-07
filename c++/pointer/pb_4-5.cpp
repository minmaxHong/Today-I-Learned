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
	Circle circles[3];
	int cnt = 0;
	for (int i = 0; i < 3; ++i) {
		int radius;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;

		circles[i].setRadius(radius);
		double area = circles[i].getArea();
		if (area > 100) {
			cnt++;
		}
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";

}