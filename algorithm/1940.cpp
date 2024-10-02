#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

bool cmp(int a, int b) {
	return a < b;
}

int main() {
	int N, M;
	cin >> N;
	cin >> M;

	vector<int> v(N, 0);
	for (int i = 0; i < N; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);

	int start = 0;
	int end = N - 1;

	int sum = v[start] + v[end];
	int cnt = 0;
	while (start != end) {
		if (sum > M) {
			sum -= v[end];
			end--;
			sum += v[end];
		}
		else if (sum == M) {
			cnt++;
			sum -= v[start];
			start++;
			sum += v[start];
		}
		else if (sum < M) {
			sum -= v[start];
			start++;
			sum += v[start];
		}
	}
	cout << cnt;
}