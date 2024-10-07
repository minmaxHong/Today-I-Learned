#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> S(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i < N + 1; ++i) {
		for (int j = 1; j < N + 1; ++j) {
			cin >> A[i][j];
			S[i][j] = S[i][j - 1] + S[i - 1][j] - S[i - 1][j - 1] + A[i][j];
		}
	}


	vector<int> v(M);
	int X1, Y1, X2, Y2;
	for (int i = 0; i < M; ++i) {
		cin >> X1 >> Y1 >> X2 >> Y2;
		v[i] = S[X2][Y2] - S[X1 - 1][Y2] - S[X2][Y1 - 1] + S[X1 - 1][Y1 - 1];
	}
	
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << "\n";
	}


}