#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "RightATriangle.h"
#include <iostream>
using namespace std;

int main() {

	Shape* shape_ptr = NULL;

	cout << "Enter R for rectangle \nEnter C for circle \nEnter T for triangle ";
	char shape_type;
	cin >> shape_type;

	switch (tolower(shape_type)) {
	case 'r': 
		shape_ptr = new Rectangle;
		break;
	case 'c':
		shape_ptr = new Circle;
		break;
	case 't':
		shape_ptr = new Right_A_Triangle;
		break;
	default: 
		cout << "Invalid shape selected" << endl;
	}

	if (shape_ptr != NULL) {
		shape_ptr->read_shape_data();
		shape_ptr->compute_area();
		shape_ptr->compute_perimeter();
		shape_ptr->print_result();
	}

	return 0;
}