#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;

	char* arrNum = new char[num];
	cin >> arrNum;

	int sum = 0;
	for (int i = 0; i < num; ++i) {
		sum += int(arrNum[i]) - '0';
	}
	cout << sum;
}