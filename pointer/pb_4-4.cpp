#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
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