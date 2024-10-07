#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n;
	cin >> n;

	Circle* pArray = new Circle[n];
	Circle* p = pArray;
	for (int i = 0; i < n; ++i) {
		int radius;
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		p->setRadius(radius);
		p++;
	}
	p = pArray;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		double result = p->getArea();
		if (result >= 100 && result <= 200) cnt++;
		cout << result << " ";
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << cnt;

	delete[]pArray;

}