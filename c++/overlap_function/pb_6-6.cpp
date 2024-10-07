#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* concat = new int[size * 2];
		for (int i = 0; i < size * 2; ++i) {
			if (i < size) {
				concat[i] = s1[i];
			}
			else if (i >= size && i < size * 2) {
				concat[i] = s2[i-size];
			}
		}
		return concat;
	}
	
	static int* remove(int s1[], int s2[], int size, int& retsize) {
		int* result = new int[size * 2];
		int index = 0;
		for (int i = 0; i < size; ++i) {
			bool flag = false;
			for (int j = 0; j < size; ++j) {
				if (s1[i] == s2[j]) {
					flag = true;
				}
			}
			if (!flag) {
				result[index++] = s1[i];
			}
		}
		retsize = index;
		return result;
	}
};

int main() {
	int x[5];
	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; ++i) {
		cin >> x[i];
	}

	int y[5];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; ++i) {
		cin >> y[i];
	}

	int* concat = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다\n";
	for (int i = 0; i < 10; ++i) {
		cout << concat[i] << " ";
	}

	int retsize = 0;
	int* result = ArrayUtility2::remove(x, y, 5, retsize);
	cout << "\n배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << "\n";
	for (int i = 0; i < retsize; ++i) {
		cout << result[i] << " ";
	}

	delete[] concat;
	delete[] result;
}