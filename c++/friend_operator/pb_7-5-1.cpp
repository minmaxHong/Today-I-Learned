#include <iostream>
using namespace std;

class Matrix {
	int p1, p2, p3, p4;
public:
	Matrix(int p1 = 0, int p2 = 0, int p3 = 0, int p4 = 0) {
		this->p1 = p1;
		this->p2 = p2;
		this->p3 = p3;
		this->p4 = p4;
	}

	void show() {
		cout << "Matrix = { " << p1 << " " << p2 << " " << p3 << " " << p4 << " }\n";
	}

	Matrix operator+(Matrix op2) {
		Matrix tmp;
		tmp.p1 = this->p1 + op2.p1;
		tmp.p2 = this->p2 + op2.p2;
		tmp.p3 = this->p3 + op2.p3;
		tmp.p4 = this->p4 + op2.p4;

		return tmp;
	}
	Matrix operator+=(Matrix op2) {
		this->p1 += op2.p1;
		this->p2 += op2.p2;
		this->p3 += op2.p3;
		this->p4 += op2.p4;
		return *this;
	}

	bool operator==(Matrix op2) {
		return this->p1 == op2.p1 && this->p2 == op2.p2 && this->p3 == op2.p3 && this->p4 == op2.p4;
	}

};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();

	if (a == c) {
		cout << "a and c are the same" << "\n";
	}
}