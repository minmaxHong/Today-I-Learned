#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	cout << "이름과 전화 번호를 입력해 주세요" << '\n';
	Person *person = new Person[3];
	
	for (int i = 0; i < 3; ++i) {
		string info;
		string name;
		string tel;
		cout << "사람 " << i + 1 << ">>" << info;
		getline(cin, info);
		int index = 0;
		
		for (int i = 0; i < info.length(); ++i) {
			if (info[i] == ' ') {
				index = i;
				break;
			}
		}

		for (int i = 0; i < index; ++i) {
			name += info[i];
		}
		for (int i = index; i < info.length(); ++i) {
			tel += info[i];
		}

		(person + i)->set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; ++i) {
		cout << (person + i)->getName() << " ";
	}

	string name;
	cout << "\n"<<"전화번호 검색합니다. 이름을 입력하세요>>";
	getline(cin, name);

	for (int i = 0; i < 3; ++i) {
		if (name == (person + i)->getName()) {
			cout << "전화 번호는 " << (person + i)->getTel();
			break;
		}
	}
}