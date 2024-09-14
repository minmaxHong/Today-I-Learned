#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack(int size) {
		this->size = size;
		tos = -1;
		p = new int[size];
	}
	MyIntStack(MyIntStack& s) {
		this->size = s.size;
		this->tos = s.tos;
		p = new int[size];
		for (int i = 0; i < size; ++i) {
			p[i] = s.p[i];
		}
	}

	~MyIntStack() {
		delete p;
	}
	bool push(int n) {
		if (tos >= size) {
			cout << "Stack Full";
			return false;
		}
		p[++tos] = n;
		return true;
	}
	bool pop(int& n) {
		if (tos == -1) {
			cout << "Stack Empty";
			return false;
		}
		n = p[tos--];
		return true;
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);

	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << "\n";
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n;
}