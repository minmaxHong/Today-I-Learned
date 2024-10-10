#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;

	vector<int> v(N, 0);
	for (int i = 0; i < v.size(); ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cout << v[K - 1];
}