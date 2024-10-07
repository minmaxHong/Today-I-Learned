#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;

	int* p;

	p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	int sum = 0;
	int a;
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << "번째 정수: ";
		cin >> a;
		*p = a;
		sum += *p;
		p++;
	}
	cout << "평균 = " << sum / n;

	delete[] p;
}