#include"ArcTan.h"
ArcTan::ArcTan(double x) :Derivative(x) {
	this->x = x;
}
double ArcTan::Meaning() {
	return atan(x) * DIGRESSINPI / M_PI;
}
Derivative ArcTan::ValueDerivative() {
	return Derivative(1 / (1 + pow(x, 2)));
}

