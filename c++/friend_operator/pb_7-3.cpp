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

	bool operator!() {
		return price == 0;
	}
};

int main() {
	Book book("�������", 0, 50);
	if (!book) {
		cout << "��¥��" << "\n";
	}
}