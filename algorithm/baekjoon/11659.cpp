#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int* A = new int[N + 1];
	int* S = new int[N + 1];
	S[0] = 0;
	for (int i = 1; i < N + 1; ++i) {
		cin >> A[i];
		S[i] = S[i - 1] + A[i];
	}

	int* result = new int[M];
	for (int j = 0; j < M; ++j) {
		int start, end;
		cin >> start >> end;
		result[j] = S[end] - S[start - 1];
	}

	for (int k = 0; k < M; ++k) {
		cout << result[k] << "\n";
	}

	delete[] A;
	delete[] S;
	delete[] result;
}