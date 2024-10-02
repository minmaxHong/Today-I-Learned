#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n=100, int val=0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; ++i) {
			mem[i] = val;
		}

		for (int i = 0; i < size; ++i) {
			cout << mem[i] << " ";
		}
	}
	~MyVector() {
		delete[] mem;
	}
};

int main() {
	MyVector a = MyVector();
	MyVector b = MyVector(30, 10);
}