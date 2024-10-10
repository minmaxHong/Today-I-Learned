#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v(N, 0);
	for (int i = 0; i < v.size(); ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << "\n";
	}
}