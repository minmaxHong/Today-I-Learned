#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() { this->name = ""; }
	Person(string name) { this->name = name; }
	void setName(string name) {
		this->name = name;
	}
	string getName() { return name; }
};

class Family {
	Person* p;
	int size;
public:
	Family(string name, int size) {
		this->size = size;
		p = new Person[size];
		for (int i = 0; i < size; ++i) {
			p[i] = Person(name);
		}
	}
	void setName(int size, string name) {
		(p + size)->setName(name);
	}
	void show() {
		string name;
		for (int i = 0; i < size; ++i) {
			name = p[i].getName();
			cout << name << "\t";
		}
	}
	~Family() {
		delete[] p;
	}
};


int main() {
	Family* simpson = new Family("Simpson", 3);

	cout << "Simpson가족은 다음과 같이 3명 입니다." << "\n";
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();

	delete simpson;

}