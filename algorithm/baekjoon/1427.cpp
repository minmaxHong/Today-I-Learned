#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	vector<int> v;
	for (int i = 0; i < s.size(); ++i) {
		v.push_back(int(s[i]) -'0');
	}

	for (int i = 0; i < v.size() - 1; ++i) {
		int index = -1;
		int max = v[i];
		for (int j = i + 1; j < v.size(); ++j) {
			if(max < v[j]){
				index = j;
				max = v[j];
			}
		}
		if (index != -1) {
			int tmp = v[i];
			v[i] = v[index];
			v[index] = tmp;
		}
	}
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
	}

}