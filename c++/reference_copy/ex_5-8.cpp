#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << "\n";

	find(name, 0) = 'S'; // Sike
	cout << name << "\n";

	char& ref = find(name, 2);
	ref = 't'; // Site
	cout << name << endl;
}