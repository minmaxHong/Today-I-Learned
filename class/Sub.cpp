#include <iostream>
#include "Sub.h"

void Sub::setValue(int a, int b) {
	x = a;
	y = b;
}

int Sub::calculate() {
	return x - y;
}