#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n;

	int* p;

	p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	int sum = 0;
	int a;
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << "��° ����: ";
		cin >> a;
		*p = a;
		sum += *p;
		p++;
	}
	cout << "��� = " << sum / n;

	delete[] p;
}