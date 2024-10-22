#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int* coins = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> coins[i];
	}

	int cnt = 0;
	for (int i = N - 1; i >= 0; --i) {
		if (K / coins[i] == 0) {
			continue;
		}
		cnt += K / coins[i];
		K %= coins[i];
	}
	cout << cnt;

}