#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	int num = 0;
	vector<char> sign;
	vector<int> v;
	bool flag = true;

	int* s = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> s[i];
	}

	int i = 0;
	while (flag) {
		int a = s[i++];
		bool flag_2 = true;

		if (num <= a) {
			while (num <= a) {
				num++;
				v.push_back(num);
				sign.push_back('+');
				if (num == a) {
					v.pop_back();
					sign.push_back('-');
					flag_2 = false;
					break;
				}
			}
		}
		else {
			if (v.size() == 0) {
				break;
			}
			else if (v.back() > a) {
				flag = false;
				break;
			}
			if (v.back() <= a && flag_2) {
				v.pop_back();
				sign.push_back('-');
			}
		}
	}
	if (flag) {
		for (int i = 0; i < sign.size(); ++i) {
			cout << sign[i] << "\n";
		}
	}
	else if (!flag) {
		cout << "NO";
	}
	
}