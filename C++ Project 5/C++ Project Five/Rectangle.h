#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape {
public: 
	void compute_area() {
		area = width * height;
	}
	void compute_perimeter() {
		perim = 2 * width + 2 * height;
	}
	void read_shape_data() {
		cout << "Enter width of rectangle: ";
		cin >> width;
		cout << "Enter height of rectangle: ";
		cin >> height;
	}

private: 
	int width, height;
};

#endif