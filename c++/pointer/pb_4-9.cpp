#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	
	double getArea() {
		return 3.14 * radius * radius;
	}

	string getName() {
		return name;
	}
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		this->size = size;

		p = new Circle[size];
		for (int i = 0; i < size; ++i) {
			string circleName;
			int radius;
			cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
			cin >> circleName >> radius;
			
			(p + i)->setCircle(circleName, radius);
		}
	}
	~CircleManager(){
		delete[] p;
	}

	void searchByName() {
		string searchCircleName;
		
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> searchCircleName;

		for (int i = 0; i < searchCircleName.length(); ++i) {
			if ((p + i)->getName() == searchCircleName) {
				cout << (p + i)->getName() << "�� ������" << (p + i)->getArea() << "\n";
			}
		}
	}
	
	void searchByArea() {
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		int minArea = 0;
		cin >> minArea;

		cout << minArea << "���� ū ���� �˻��մϴ�." << "\n";
		for (int i = 0; i < size; ++i) {
			if ((p + i)->getArea() > minArea) {
				cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea() << " ";
			}
		}
		cout << ".";
	}
};

int main() {
	// �� ���� �Է�
	int circleNum = 0;
	
	cout << "���� ���� >> ";
	cin >> circleNum;
	cin.ignore();
	CircleManager circles(circleNum);

	// �� �̸� �˻�
	circles.searchByName();
	circles.searchByArea();

}