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
			cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
			cin >> circleName >> radius;
			
			(p + i)->setCircle(circleName, radius);
		}
	}
	~CircleManager(){
		delete[] p;
	}

	void searchByName() {
		string searchCircleName;
		
		cout << "검색하고자 하는 원의 이름 >> ";
		cin >> searchCircleName;

		for (int i = 0; i < searchCircleName.length(); ++i) {
			if ((p + i)->getName() == searchCircleName) {
				cout << (p + i)->getName() << "의 면적은" << (p + i)->getArea() << "\n";
			}
		}
	}
	
	void searchByArea() {
		cout << "최소 면적을 정수로 입력하세요 >> ";
		int minArea = 0;
		cin >> minArea;

		cout << minArea << "보다 큰 원을 검색합니다." << "\n";
		for (int i = 0; i < size; ++i) {
			if ((p + i)->getArea() > minArea) {
				cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << " ";
			}
		}
		cout << ".";
	}
};

int main() {
	// 원 개수 입력
	int circleNum = 0;
	
	cout << "원의 개수 >> ";
	cin >> circleNum;
	cin.ignore();
	CircleManager circles(circleNum);

	// 원 이름 검색
	circles.searchByName();
	circles.searchByArea();

}