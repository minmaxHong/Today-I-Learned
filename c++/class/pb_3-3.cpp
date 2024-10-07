#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	int min_range;
	int max_range;

	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random() { min_range = 0; max_range = 0; }

int Random::next() {
	return rand();
}

int Random::nextInRange(int a, int b) {
	return (rand() % (b - a + 1)) + a;
}

int main() {
	srand(static_cast<unsigned int>(time(0)));
	
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << "\n";
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << "\n" << "\n" << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << "\n";
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
}