#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	int odd_even; // 1: next(): even, nextInRange(): odd

	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};
SelectableRandom::SelectableRandom() { odd_even = 1; };
int SelectableRandom::next() { // even
	if (odd_even) {
		return (rand() / 2) * 2;
	}
}

int SelectableRandom::nextInRange(int a, int b) { // odd
	int num = (rand() % (b - 1)) + a;
	if (odd_even) {
		if (num % 2 == 0) {
			return num + 1;
		}
		return num;
	}
}

int main() {
	SelectableRandom r;
	srand((unsigned)time(0));

	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� 9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
}