#include <iostream>
#include "Div.h"

void Div::setValue(int a, int b) {
	x = a;
	y = b;
}

int Div::calculate() {
	return x / y;
}