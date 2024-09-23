#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	
	~Book() {
		delete[] this->title;
	}
	Book(const Book& c) {
		this->title = new char[strlen(c.title)+100];
		strcpy(this->title, "��ǰ�ڹ�");
		this->price = c.price;
	}

	void show() {
		cout << title << ' ' << price << "��" << "\n";
	}
};

int main() {
	Book cpp("��ǰc++", 10000);
	Book java = cpp;
	cpp.show();
	java.show();
}