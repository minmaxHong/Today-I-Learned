#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	string s;
	
	while (true) {
		cout << ">>";
		getline(cin, s);
		
		char a = 'a' + rand() % 26;

		int fIndex = rand() % s.size();
		if (s == "exit") {
			break;
		}
		
		if (s[fIndex] == ' ' && fIndex < s.size()) {
			fIndex++;
		}

		s[fIndex] = a;

		cout << s << endl;
	}
}