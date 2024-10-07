#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read() {
		for (int i = 0; i < size; ++i) {
			int n;
			cin >> n;
			p[i] = n;
		}
	}
	void write() {
		for (int i = 0; i < size; ++i) {
			cout << p[i] << " ";
		}
	}
	int big() {
		int max = 0;
		for (int i = 0; i < size; ++i) {
			if (max < p[i]) {
				max = p[i];
			}
		}
		return max;
	}
	~Sample() {
		delete[] p;
	}
};

int main() {
	Sample s(10);

	s.read();
	s.write();
	cout << endl << "가장 큰 수는" << s.big() << endl;
}