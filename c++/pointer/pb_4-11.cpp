#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Gambling {
	string player[2];
public:
	Gambling(string p1, string p2) {
		this->player[0] = p1;
		this->player[1] = p2;
	}

	void playGamble() {
		bool flag = false;
		while (true) {
			int num[3] = { 0, };
			for (int i = 0; i < 2; ++i) {
				string enter;
				cout << player[i] << ":<Enter>";
				getline(cin, enter);
				for (int i = 0; i < 3; ++i) {
					num[i] = rand() % 3;
				}
				cout << "\n";
				cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2];

				if ((num[0] == num[1]) && (num[0] == num[2]) && (num[1] == num[2])) {
					cout << "\t\t" << player[i] << "님 승리!!";
					flag = true;
					break;
				}
				else {
					cout << "\t\t" << "아쉽군요!";
				}
			cout << "\n";
			}
			if (flag) {
				break;
			}
			
		}
	}

};

int main() {
	srand((unsigned)time(0));

	string p1, p2;
	cout << "***** " << "갬블링 게임을 시작합니다. " << "*****" << "\n";
	cout << "첫번째 선수 이름 >> ";
	getline(cin, p1);
	
	cout << "두번째 선수 이름 >> ";
	getline(cin, p2);

	Gambling game(p1, p2);
	game.playGamble();

}