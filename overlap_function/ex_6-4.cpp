#include <iostream>
using namespace std;

void f(char a = ' ', int M = 1);

void f(char a, int M) {
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << a;
		}
		cout << "\n";
	}
}


int main() {
	f();
	f('%');
	f('@', 5);
}