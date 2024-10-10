#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a[10001] = { 0 };
	int number;
	for (int i = 0; i < N; ++i) {
		cin >> number;
		a[number]++;
	}

	for (int i = 0; i < 10001; ++i) {
		if (a[i] != 0) {
			for (int j = 0; j < a[i]; ++j) {
				cout << i << "\n";
			}
		}
	}

}