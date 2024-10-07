#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut;
	double area = donut.getArea();

	cout << "area: " << area;
}