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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << "\n";
	}
	string getTitle() {
		return title;
	}

	Book& operator += (int op2) {
		price += op2;
		return *this;
	}
	Book& operator -= (int op2) {
		price -= op2;
		return *this;
	}
};

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;

	a.show();
	b.show();
}