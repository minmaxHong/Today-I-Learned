#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack() {
		tos = -1;
	}
	bool push(int n) {
		int len = sizeof(p) / sizeof(p[0]);
		int value = n;
		if (tos >= (len-1)) {
			return false;
		}
		p[++tos] = value;
		return true;

	}
	bool pop(int& n) {
		if (this->tos == -1) {
			return false;
		}
		n = p[tos--];
		return true;
	}	
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; ++i) {
		if (a.push(i)) {
			cout << i << ' ';
		}
		else {
			cout << "\n" << i + 1 << " 번째 stack full" << "\n";
		}
	}

	int n;
	for (int i = 0; i < 11; ++i) {
		if (a.pop(n)) {
			cout << n << ' ';
		}
		else {
			cout << '\n' << i + 1 << " 번째 stack empty";
		}
	}
	

}