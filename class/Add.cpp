#include <iostream>
#include "Add.h"

void Add::setValue(int a, int b) {
	x = a;
	y = b;
}

int Add::calculate() {
	return x + y;
}