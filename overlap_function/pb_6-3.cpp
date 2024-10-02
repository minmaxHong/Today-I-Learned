#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	int max = a > b ? a : b;
	max = max < c ? max : c;
	return max;
}


int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' '<< z << "\n";
}