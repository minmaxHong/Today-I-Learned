#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};

EvenRandom::EvenRandom() {  };
int EvenRandom::next() {
	return (rand() / 2) * 2;
}

int EvenRandom::nextInRange(int a, int b) {
	int num = (rand() % (b-1)) + a;
	if (num % 2 == 0) {
		return num;
	}
	return num + 1;
}

int main() {
	EvenRandom r;
	srand((unsigned)time(0));

	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10 개--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 10 까지의 랜덤 짝수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
}