#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram():mem{} {}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	int result = mem[address];
	return result;
}

void Ram::write(int address, char value) {
	mem[address] = value;
}