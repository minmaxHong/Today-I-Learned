#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;
	string s;
	
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") {
			break;
		}
		reverse(s.begin(), s.end());

		cout << s << endl;
	}
}