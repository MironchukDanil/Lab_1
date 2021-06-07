#include"ArcCtg.h"
ArcCtg::ArcCtg(double x) :x{ x } {}
double ArcCtg::Meaning() {
	return (M_PI / 2 - atan(x)) * (DIGRESSINPI / M_PI);
}
Derivative ArcCtg::ValueDerivative() {
	return Derivative(-1 / (1 + pow(x, 2)));
}
