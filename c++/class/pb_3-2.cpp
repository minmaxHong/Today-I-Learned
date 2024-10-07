#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	
	Date(int a, int b, int c);
	Date(string s);

	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int a, int b, int c) { year = a; month = b; day = c; }
Date::Date(string s) {
	int date[3] = {0, 0, 0};
	int index = 0;
	string ss;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '/') {
			date[index++] = stoi(ss);
			ss.clear();
		}
		else {
			ss += s[i];
		}
	}
	date[index] = stoi(ss);

	year = date[0];
	month = date[1];
	day = date[2];
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << "\n";
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");

	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << "\n";
}