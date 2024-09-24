#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	int start = 1;
	int end = 2;
	int cnt = 1;
	
	int sum = start + end;

	while (end <= N) {
		if (start == end) {
			end++;
			sum += end;
		}
		if (sum == N) {
			cnt++;
			sum -= start;
			start++;
		}
		else if (sum < N) {
			end++;
			sum += end;
		}
		else if (sum > N) {
			sum -= start;
			start++;
		}
	}
	cout << cnt;

}