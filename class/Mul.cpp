#include <iostream>
#include "Mul.h"

void Mul::setValue(int a, int b) {
	x = a;
	y = b;
}

int Mul::calculate() {
	return x * y;
}