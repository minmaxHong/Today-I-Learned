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

	int getPrice() {
		return price;
	}
	void setPrice(int price) {
		this->price = price;
	}
};

Book& operator+=(Book& book, int price) {
	book.setPrice(book.getPrice() + price);
	return book;
}

Book& operator-=(Book& book, int price) {
	book.setPrice(book.getPrice() - price);
	return book;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}