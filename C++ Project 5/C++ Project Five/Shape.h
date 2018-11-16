#pragma once
#include <iostream>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public: 
	virtual void compute_area() = 0;
	virtual void compute_perimeter() = 0;
	virtual void read_shape_data() = 0;
	virtual void print_result() {
		cout << "The area is " << area << endl;
		cout << "The perimeter is " << perim << endl;
	}

protected:
	double area, perim;
};

#endif