#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect {
	int width, heigth;
public:
	Rect(int width, int height) {
		this->width = width;
		this->heigth = height;
	}
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.heigth == s.heigth) {
		return true;
	}
	return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) {
		cout << "equal" << "\n";
	}
	else {
		cout << "not equal" << "\n";
	}

}