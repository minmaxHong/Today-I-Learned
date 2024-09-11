#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s);
	
	int sum = 0;
	int startIndex = 0;
	
	while (true) {
		int findex = s.find('+', startIndex); // startIndex부터 시작해서 끝까지 찾음
		if (findex == -1) {
			string part = s.substr(startIndex);
			cout << part;
			if (part == "") {
				break; // 빈 공간 ex) 2 + 3 +
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
	cout << "숫자들의 합은 " << sum;
	
}