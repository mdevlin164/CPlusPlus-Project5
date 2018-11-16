#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef RIGHT_A_TRIANGLE_H
#define RIGHT_A_TRIANGLE_H

class Right_A_Triangle : public Shape {
public:
	void compute_area() {
		area = (length_a * length_b) / 2;
	}
	void compute_perimeter() {
		perim = length_a + length_b + length_hyp;
	}
	void read_shape_data() {
		cout << "Enter hypothenuse of the triangle";
		cin >> length_hyp;
		cout << "Enter first length of the triangle";
		cin >> length_a;
		cout << "Enter second length of the triangle";
		cin >> length_b;
	}

private:
	int length_a, length_b, length_hyp;
};

#endif