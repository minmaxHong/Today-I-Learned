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
	
	friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix& operator+=(Matrix& a, Matrix b);
	friend bool operator==(Matrix a, Matrix b);
};

Matrix operator+(Matrix a, Matrix b) {
	Matrix tmp;
	tmp.p1 = a.p1 + b.p1;
	tmp.p2 = a.p2 + b.p2;
	tmp.p3 = a.p3 + b.p3;
	tmp.p4 = a.p4 + b.p4;

	return tmp;
}

Matrix& operator+=(Matrix& a, Matrix b) {
	a.p1 += b.p1;
	a.p2 += b.p2;
	a.p3 += b.p3;
	a.p4 += b.p4;
	return a;
}


bool operator==(Matrix a, Matrix b) {
	return a.p1 == b.p1 && a.p2 == b.p2 && a.p3 == b.p3 && a.p4 == b.p4;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();

	if (a == c) {
		cout << "a and c are the same" << "\n";
	}
}