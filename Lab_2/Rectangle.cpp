#include"Rectangle.h"
Rectangle::Rectangle(double side1, double side2) :Pair(side1, side2) {
	if (side1 < 0 || side2 <0)
		throw 1.0;
	else {
		this->side1 = side1;
		this->side2 = side2;
	}
}
Rectangle:: ~Rectangle() = default;
double Rectangle:: Perimeter()const {
	return 2 * (side1 + side2);
}
double Rectangle::Square()const {
	return side1 * side2;
}
