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
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << '\n';
	Person *person = new Person[3];
	
	for (int i = 0; i < 3; ++i) {
		string info;
		string name;
		string tel;
		cout << "��� " << i + 1 << ">>" << info;
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

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; ++i) {
		cout << (person + i)->getName() << " ";
	}

	string name;
	cout << "\n"<<"��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	getline(cin, name);

	for (int i = 0; i < 3; ++i) {
		if (name == (person + i)->getName()) {
			cout << "��ȭ ��ȣ�� " << (person + i)->getTel();
			break;
		}
	}
}