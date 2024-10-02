#include <iostream>
#include <string>
using namespace std;

bool count(int* cnt, int* condition, int size = 4) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		if (cnt[i] >= condition[i]) {
			sum++;
		}
	}
	if (sum == 4) {
		return true;
	}
	return false;
}

int main() {
	int N, M; // 문자열 길이, 부분 문자열 길이
	string s;
	
	cin >> N >> M;
	cin >> s;

	int sum = 0;
	int cnt[4] = { 0 }; // 'A', 'C', 'G', 'T'
	
	int condition[4] = { 0 };
	for (int i = 0; i < 4; ++i) {
		cin >> condition[i];
	}

	for (int i = 0; i < M; ++i) {
		if (s[i] == 'A') {
			cnt[0]++;
		}
		else if (s[i] == 'C') {
			cnt[1]++;
		}
		else if (s[i] == 'G') {
			cnt[2]++;
		}
		else if (s[i] == 'T') {
			cnt[3]++;
		}
	}

	if (count(cnt, condition)) {
		sum++;
	}
	
	int start = 0;
	int end = M-1;
	while (end < N-1) {
		if (s[start] == 'A') {
			cnt[0]--;
		}
		else if (s[start] == 'C') {
			cnt[1]--;
		}
		else if (s[start] == 'G') {
			cnt[2]--;
		}
		else if (s[start] == 'T') {
			cnt[3]--;
		}

		start++;
		end++;
		if (s[end] == 'A') {
			cnt[0]++;
		}
		else if (s[end] == 'C') {
			cnt[1]++;
		}
		else if (s[end] == 'G') {
			cnt[2]++;
		}
		else if (s[end] == 'T') {
			cnt[3]++;
		}

		if (count(cnt, condition)) {
			sum++;
		}
	}
	cout << sum;


}