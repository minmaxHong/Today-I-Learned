#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n, 0);
	vector<int> s(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	s[0] = v[0];
	for (int i = 1; i < v.size(); ++i) {
		s[i] = v[i] + s[i-1];
	}
	
	int sum = 0;
	for (int i = 0; i < s.size(); ++i) {
		sum += s[i];
	}
	cout << sum;
}