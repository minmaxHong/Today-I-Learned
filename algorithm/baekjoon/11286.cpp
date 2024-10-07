#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int a, int b){
		int first_abs = abs(a);
		int second_abs = abs(b);

		if (first_abs == second_abs) {
			return a > b;
		}
		else {
			return first_abs > second_abs;
		}
	}
};

int main() {
	priority_queue<int, vector<int>, compare> MyQueue;

	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int num;
		cin >> num;

		if (num == 0) {
			if (MyQueue.empty()) {
				cout << "0\n";
			}
			else {
				cout << MyQueue.top() << "\n";
				MyQueue.pop();
			}
		}
		else {
			MyQueue.push(num);
		}

	}
}