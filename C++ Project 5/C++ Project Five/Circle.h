#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
public:
	void compute_area() {
		area = 3.1415926 * (radius^2);
	}
	void compute_perimeter() {
		perim = 2 * 3.1415926 * radius;
	}
	void read_shape_data() {
		cout << "Enter radius of circle";
		cin >> radius;
	}

private:
	int radius;
};

#endif