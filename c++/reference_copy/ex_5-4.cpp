#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	
	int& refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << "\n"; // i=1, n=5, refn=5

	refn = i; // i=1, n=1, refn=1
	refn++; // i=1, n=2, refn=2
	cout << i << '\t' << n << '\t' << refn << "\n";

	int* p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << "\n";
}