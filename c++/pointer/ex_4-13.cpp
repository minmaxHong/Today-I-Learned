#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "���ڿ��� �Է��ϼ���(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); ++i) {
		string first = s.substr(0, 1);
		string second = s.substr(1, s.length() - 1);

		s = second + first;

		cout << s << endl;
	}

}