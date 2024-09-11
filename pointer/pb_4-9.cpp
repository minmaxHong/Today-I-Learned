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
			string circleInfo;
			string name;
			string radius_s;
			int radius;

			cout << "원 " << (i + 1) << "의 이름과 반지름 >> ";
			getline(cin, circleInfo);

			int index = 0;
			for (int i = 0; i < circleInfo.length(); ++i) {
				if (circleInfo[i] == ' ') {
					index = i;
				}
			}

			for (int i = 0; i < index; ++i) {
				name += circleInfo[i];
			}
			
			for (int i = index + 1; i < circleInfo.length(); ++i) {
				radius_s += circleInfo[i];
			}

			radius = stoi(radius_s);



		}
	}

};



int main() {
	int size;
	cout << "원의 개수 >> ";
	cin >> size;

	CircleManager* manager = new CircleManager(size);


}