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
	cout << "원의 개수 >> ";
	cin >> cnt;
	
	Circle* circles;
	circles = new Circle[cnt];

	for (int i = 0; i < cnt; ++i) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int radius;
		cin >> radius;
		(circles + i)->setRadius(radius);

		double area = (circles + i)->getArea();
		if (area > 100) {
			upperThres++;
		}
	}
	cout << "면적이 100보다 큰 원은" << upperThres << "개 입니다.";
	
	delete[] circles;
}