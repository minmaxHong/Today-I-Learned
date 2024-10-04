#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767) {
		return rand() % 100 + 1;
	}
	static char nextAlphaet() { // 'A': 65, 'Z': 90 ,, 'a': 97, 'z': 122
		bool flag = rand() % 2; 
		
		// �빮��
		if (flag) {
			return rand() % ('Z' - 'A') + ('A' + 1);
		}
		// �ҹ���
		else {
			return rand() % ('z' - 'a') + ('a' + 1);
		}
	}
	static double nextDouble() {
		return double(rand()) / RAND_MAX;
	}

};


int main() {
	Random::seed();

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�.\n";
	for (int i = 0; i < 10; ++i) {
		cout << Random::nextInt() << " ";
	}

	cout << "\n���ĺ��� �����ϰ� 10���� ����մϴ�.\n";
	for (int i = 0; i < 10; ++i) {
		cout << Random::nextAlphaet() <<  " ";
	}

	cout << "\n������ �Ǽ��� 10���� ����մϴ�.\n";
	for (int i = 0; i < 5; ++i) {
		cout << Random::nextDouble() << " ";
	}
	cout << "\n";
	for (int i = 0; i < 5; ++i) {
		cout << Random::nextDouble() << " ";
	}

}