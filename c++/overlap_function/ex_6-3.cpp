#include <iostream>
#include <string>
using namespace std;

// 원형 선언
void star(int a = 5);
void msg(int id, string text = "");

void star(int a) {
	for (int i = 0; i < a; ++i) {
		cout << "*";
	}
	cout << "\n";
}

void msg(int id, string text) {
	cout << id << ' ' << text << "\n";
}



int main() {
	star();
	star(10);

	msg(10);
	msg(10, "Hello");

}