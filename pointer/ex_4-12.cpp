#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[5];

	for (int i = 0; i < 5; ++i) {
		cout << "�̸� >> ";
		getline(cin, s[i], '\n');
	}

	string latter = s[0];
	for (int i = 1; i < 5; ++i) {
		if (latter < s[i]) {
			latter = s[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter;

}