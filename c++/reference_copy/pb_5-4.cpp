#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int size = sizeof(a);
	for (int i = 0; i < size; ++i) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
}

int main() {
	char s[] = "Mike";
	bool b = false;

	char& loc = find(s, 'M', b);
	if (!b) {
		cout << "M을 발견할 수 없다" << "\n";
		return 0;
	}
	loc = 'm';
	cout << s << endl;

}