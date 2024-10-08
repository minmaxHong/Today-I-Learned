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
		cout << "title" << ' ' << price << "원 " << pages << " 페이지" << "\n";
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);

	if (a == 30000) {
		cout << "정가 30000원" << "\n";
	}
	if (a == "명품 C++") {
		cout << "명품 C++ 입니다." << "\n";
	}
	if (a == b) {
		cout << "두 책이 같은 책입니다." << "\n";
	}
}