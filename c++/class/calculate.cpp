#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	while (true) {
		int n1, n2;
		int result = 0;
		char op;
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> n1 >> n2 >> op;

		if (op == '+') {
			a.setValue(n1, n2);
			result = a.calculate();
		}
		else if (op == '*') {
			m.setValue(n1, n2);
			result = m.calculate();
		}
		else if (op == '-') {
			s.setValue(n1, n2);
			result = s.calculate();
		}
		else if (op == '/') {
			d.setValue(n1, n2);
			result = d.calculate();
		}
		cout << result << endl;
	}
}