#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string sen;
public:
	Histogram(string sen) { 
		this->sen = sen; 
	}
	void put(string addSen) {
		this->sen += addSen;
	}
	void putc(char s) {
		this->sen += s;
	}
	void print() {
		int cnt = 0;
		for (int i = 0; i < sen.length(); ++i) {
			if ((sen[i] >= 'A' && sen[i] <= 'Z') || (sen[i] >= 'a' && sen[i] <='z')) {
				if (sen[i] >= 'A' && sen[i] <= 'Z') {
					sen[i] = sen[i] + ('a' - 'A');
				}
				cnt++;
			}
		}
		cout << sen;
		cout << "\n\n";
		cout << "ÃÑ ¾ËÆÄºª ¼ö: " << cnt << "\n\n";

		int alphabet[26] = { 0, };
		for (int i = 0; i < sen.length(); ++i) {
			if (sen[i] >= 'a' && sen[i] <= 'z') {
				alphabet[sen[i] - 'a']++;
			}
		}

		for (int i = 0; i < 26; ++i) {
			char c = 'a' + i;
			cout << c << " " << "(" << alphabet[i] << ")" << "\t" << ":";
			for (int j = 0; j < alphabet[i]; ++j) {
				cout << "*";
			}
			cout << "\n";
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}