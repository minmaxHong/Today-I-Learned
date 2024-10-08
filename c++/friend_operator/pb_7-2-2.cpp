#include <iostream>
#include <cstring>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << "title" << ' ' << price << "�� " << pages << " ������" << "\n";
	}

	string getTitle() {
		return title;
	}
	
	friend bool operator==(Book& book, int price);
	friend bool operator==(Book& book, string title);
	friend bool operator==(Book& op1, Book& op2);
};

bool operator==(Book& book, int price) {
	return book.price == price;
}
bool operator==(Book& book, string title) {
	return book.title == title;
}
bool operator==(Book& op1, Book& op2) {
	return (op1.price == op2.price) && (op1.title == op2.title) && (op1.pages == op2.pages);
}



int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);

	if (a == 30000) {
		cout << "���� 30000��" << "\n";
	}
	if (a == "��ǰ C++") {
		cout << "��ǰ C++ �Դϴ�." << "\n";
	}
	if (a == b) {
		cout << "�� å�� ���� å�Դϴ�." << "\n";
	}
}