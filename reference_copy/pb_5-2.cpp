#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return false;
	}
	big = a > b ? a : b;
	return true;
}

int main() {
	cout << "2���� ������ �Է��ϼ���>> ";
	int a, b;
	cin >> a >> b;

	int big = 0;
	if (bigger(a, b, big)) {
		cout << "big: " << big;
	}
	else {
		cout << "same";
	}
}