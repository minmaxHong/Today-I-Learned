#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s);
	
	int sum = 0;
	int startIndex = 0;
	
	while (true) {
		int findex = s.find('+', startIndex); // startIndex���� �����ؼ� ������ ã��
		if (findex == -1) {
			string part = s.substr(startIndex);
			cout << part;
			if (part == "") {
				break; // �� ���� ex) 2 + 3 +
			}
			cout << part << endl;
			sum += stoi(part);
			break;
		}

		int count = findex - startIndex;
		string part = s.substr(startIndex, count);
		sum += stoi(part);
		startIndex = findex + 1;
	}
	cout << "���ڵ��� ���� " << sum;
	
}