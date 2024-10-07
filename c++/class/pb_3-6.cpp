#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int n);
	Integer(string s);

	int get();
	void set(int n);
	bool isEven();
};

Integer::Integer(int n) { num = n; };
Integer::Integer(string s) { num = stoi(s); };

int Integer::get() {
	return num;
}

void Integer::set(int n) {
	num = n;
}

bool Integer::isEven() {
	if (num % 2 == 0) {
		return true;
	}
	return false;
}


int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}