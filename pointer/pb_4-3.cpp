#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
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