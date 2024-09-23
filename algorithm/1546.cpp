#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	double* scores = new double[n];
	double max = -1;
	for (int i = 0; i < n; ++i) {
		cin >> scores[i];
		if (scores[i] > max) {
			max = scores[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < n; ++i) {
		scores[i] = 10000 * (double)scores[i] / (max * 100);
		sum += scores[i];
	}
	cout << sum / n;
	delete[] scores;
}