#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	deque<int> v(n, 0);

	
	for (int i = 0; i < n; ++i) {
		v[i] = i+1;
	}

	bool flag = true;
	while (flag) {
		if (v.size() == 1) {
			flag = false;
			break;
		}
		v.pop_front();
		int front = v.front();
		v.pop_front();
		v.push_back(front);
	}
	if (!flag) {
		cout << v[0];
	}
	
}